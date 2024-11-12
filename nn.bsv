package ascon;
import Vector::*;
import FIFO::*;
//import ListN :: *;

interface Userinterface;

    method Action input_function (Bit#(128)plaintext, Bit#(128) associated_data,Bit#(128) key,Bit#(128) nonce);
    method Bit#(128) ciphertext();
    method Bit#(128) tag();
endinterface
// s-box bit slicing operation .

function Vector#(5,Bit#(64)) sbox (Vector#(5,Bit#(64))x);

    Vector#(5,Bit#(64)) y ;

    y[0]= (x[4]&x[1]) ^(x[3]) ^(x[2]&x[1]) ^x[2]^( x[1]&x[0]) ^x[1]^ x[0];

    y[1]= x[4]^ (x[2]&x[3]) ^x[3] ^(x[3]&x[1])^ x[2] ^(x[1]&x[2]) ^ x[1]^ x[0];

    y[2]= (x[4]&x[3])^ x[4]^ x[2]^ x[1]^ 'h'hffffffffffffffff;

    y[3]= (x[4]&x[0])^ (x[3]&x[0])^ x[4]^ x[3]^ x[2]^ x[1]^ x[0];

    y[4]= (x[4]&x[1])^ x[4]^x[3]^(x[1]&x[0])^x[1];
    // $display("y = %h %h %h %h %h", y[0], y[1], y[2], y[3], y[4]);
    return  y;
    
endfunction
 
function Bit#(64) rotate(Bit#(64) statereg ,int l);
    let res=((statereg >> l) | (statereg << (64 - l))) & 'hFFFFFFFFFFFFFFFF;
    return res;
  
endfunction

// linear diffussion function

function Vector#(5, Bit#(64)) diffusion(Vector#(5, Bit#(64)) x);
    Vector#(5, Bit#(64)) temp = x;  

    temp[0] = rotate(x[0], 19);
    temp[1] = rotate(x[0], 28);
    x[0] = x[0] ^ temp[0] ^ temp[1];

    temp[2] = rotate(x[1], 61);
    temp[3] = rotate(x[1], 39);
    x[1] = x[1] ^ temp[2] ^ temp[3];

    temp[4] = rotate(x[2], 1);
    temp[0] = rotate(x[2], 6); 
    x[2] = x[2] ^ temp[4] ^ temp[0];

    
    temp[1] = rotate(x[3], 10);  
    temp[2] = rotate(x[3], 17); 
    x[3] = x[3] ^ temp[1] ^ temp[2];

    temp[3] = rotate(x[4], 7);   
    temp[4] = rotate(x[4], 41);  
    x[4] = x[4] ^ temp[3] ^ temp[4];

    return x;
endfunction

//adding of round constants

function  Vector#(5,Bit#(64))add_constant (Vector#(5,Bit#(64))x,Rounds a, Bit#(4) i);

    Vector#(12, Bit#(64)) constants = unpack({64'h4b, 64'h5a, 64'h69, 64'h78, 64'h87, 64'96, 64'ha5, 64'hb4, 64'hc3, 64'hd2, 64'he1, 64'hf0});
   
    
    x[2] = x[2] ^ (( a == Eight) ? constants[4 + i] : constants[i]);

    return x;
   
endfunction

//permutation function . 

function ActionValue#(Vector#(5, Bit#(64))) permutation(Vector#(5, Bit#(64)) state, Rounds a,Bit#(4)i);
    actionvalue
    Vector#(5, Bit#(64)) updated_state = state; // Initialize updated_state with the input state

    Bit#(4) lv_a = (a == Eight) ? 8 : 12;
  
    //  begin
        $display("Iteration %0d - Before add_constant: %h %h %h %h %h", i, updated_state[0], updated_state[1], updated_state[2], updated_state[3], updated_state[4]);
        updated_state = add_constant(updated_state, a, i);
        $display("Iteration %0d - After add_constant: %h %h %h %h %h", i, updated_state[0], updated_state[1], updated_state[2], updated_state[3], updated_state[4]);
        updated_state = sbox(updated_state);
        $display("Iteration %0d - After sbox: %h %h %h %h %h", i, updated_state[0], updated_state[1], updated_state[2], updated_state[3], updated_state[4]);
        updated_state = diffusion(updated_state);
        $display("Iteration %0d - After diffusion: %h %h %h %h %h",i,  updated_state[0], updated_state[1], updated_state[2], updated_state[3], updated_state[4]);
    // end




return updated_state;
//$display("updated_state=%h",updated_state)
endactionvalue
endfunction

typedef enum {IDLE,INTIALIZE, ASSOCIATED_DATA,ENCRYPTION,FINALIZATION}Phase deriving (Bits, Eq);
typedef enum {Eight, Twelve} Rounds deriving (Bits,Eq);


module mkAscon_engine(Userinterface);

    Reg#(Bit#(64)) iv_constant <- mkReg(64'h80800c0800000000);
    Reg#(Bit#(1))ready_ciphertext<-mkReg(0);
    Reg#(Bit#(1))ready_tag<-mkReg(0);
  

    Vector#(2,Reg#(Bit#(64)))rg_encrypted_data <-replicateM(mkReg(0));
    Vector#(2,Reg#(Bit#(64)))rg_encryption_tag <-replicateM(mkReg(0));

   
    Reg#(Bit#(4)) counter<-mkReg(0);
    Reg#(Bit#(1))req_associated_data<-mkReg(1);
    Vector# (4,Reg#(Bit#(128)))rg_interface <- replicateM(mkReg(0));
    
   Vector# (5,Reg#(Bit#(64)))rg_state <- replicateM(mkReg(0));
   Vector#(5,Bit#(64)) local_state =unpack({320'h0});
   Reg#(Phase)fsm_state <- mkReg(IDLE);

rule intialization_state(fsm_state==INTIALIZE);
    Vector#(5,Bit#(64)) local_state=replicate(0);
if(counter<12)
begin
    if (counter==0)
     begin
        local_state[0]= iv_constant;
        local_state[1]= rg_interface[0][127:64];
        local_state[2]=rg_interface[0][63:0];
        local_state[3]= rg_interface[3][127:64];
        local_state[4]= rg_interface[3][63:0];
        counter<=counter+1;
    $display("local_state=%h,%h,%h,%h,%h",local_state[0],local_state[1],local_state[2],local_state[3],local_state[4]);
    end
    else 
    begin
        //let lv_reg_state= readVReg(rg_state);
        local_state=readVReg(rg_state);
        counter<=counter+1;
        $display("local_state=%h,%h,%h,%h,%h",local_state[0],local_state[1],local_state[2],local_state[3],local_state[4]);
    end
    
   
   let permutation_value <- permutation(local_state,Twelve,counter);
   writeVReg(rg_state,permutation_value); // 12 rounds are performed. and it will update in rg_sate register.
   //$display("rg_state=%h",rg_state
   end 
else begin
   fsm_state <=ASSOCIATED_DATA  ;
   counter<=0;
   end
//local_counter1=counter+1;
endrule


rule associated_data_state(fsm_state==ASSOCIATED_DATA); 
    if(req_associated_data==1)
        begin

            rg_state[0]<=rg_interface[2][127:64]^rg_state[0]; //here associated data will xored with the updated rg_state and the result will also stored in rg_state itself.
            rg_state[1]<=rg_interface[2][63:0]^rg_state[1];
            
    
        end
    else 
            fsm_state <=ENCRYPTION;
            counter<=0;
    req_associated_data<=req_associated_data-1;
endrule

rule encryption_state(fsm_state==ENCRYPTION); 
    
        if(counter!=8)
            begin

                let lv_updated_state = readVReg(rg_state);
                let permutation_value1<-permutation(lv_updated_state,Eight,counter);
                writeVReg(rg_state,permutation_value1); // 8 rounds of permutation
                counter<=counter+1;
                
                
            end
        else 
            begin
                rg_encrypted_data[0]<=rg_interface[1][127:64]^rg_state[0]; // xoring with first two rows to get ciphertext
                rg_encrypted_data[1]<=rg_interface[1][63:0]^rg_state[1];
                $display("rg_encrypted_data=%h",rg_encrypted_data[0],rg_encrypted_data[1]);
                fsm_state <=FINALIZATION;
                ready_ciphertext<=1;
                counter<=0;
            end
        //local_counter2=counter+1;
        
endrule

rule finalization_state(fsm_state==FINALIZATION);
   // Bit#(4)local_counter3=counter;
    let lv_final_rg_state=readVReg(rg_state);
    let permutation_value2<-permutation(lv_final_rg_state,Twelve,counter);
    //if(local_counter3<12)
    if(counter!=12)
        begin
        writeVReg(rg_state,permutation_value2);
        counter<=counter+1;
        
        end

    
    else 
        begin
            rg_encryption_tag[0]<=rg_interface[0][127:64]^rg_state[0];
            rg_encryption_tag[1]<=rg_interface[0][63:0]^rg_state[1];
            
            fsm_state <=IDLE  ;
            ready_tag<=1;
        end    

endrule

method Action input_function(Bit#(128)plaintext,Bit#(128)associated_data,Bit#(128)key,Bit#(128)nonce);
    
    // rg_state[0] <= iv;
    // rg_state[1] <= key[127:64];
    //rg_key <= key;
    rg_interface[0]<= key;
    rg_interface[1]<= plaintext;
    rg_interface[2]<= associated_data;
    rg_interface[3]<= nonce;
    fsm_state <= INTIALIZE;
endmethod


method Bit#(128)ciphertext()if(ready_ciphertext==1);
       
   return pack(readVReg(rg_encrypted_data));
endmethod
method Bit#(128)tag()if(ready_tag==1);
   
    return pack(readVReg(rg_encryption_tag));
endmethod
endmodule
endpackage
