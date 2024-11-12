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

function (Vector#(5,Bit#(64))) sbox (Vector#(5,Bit#(64))x);

    Vector#(5,Bit#(64)) y ;

    y[0]= (x[4]&x[1]) ^(x[3]) ^(x[2]&x[1]) ^x[2]^( x[1]&x[0]) ^x[1]^ x[0];

    y[1]= x[4]^ (x[2]&x[3]) ^x[3] ^(x[3]&x[1])^ x[2] ^(x[1]&x[2]) ^ x[1]^ x[0];

    y[2]= (x[4]&x[3])^ x[4]^ x[2]^ x[1]^ (64'b1);

    y[3]= (x[4]&x[0])^ (x[3]&x[0])^ x[4]^ x[3]^ x[2]^ x[1]^ x[0];

    y[4]= (x[4]&x[1])^ x[4]^x[3]^(x[1]&x[0])^x[1];
return  y;
endfunction
 //circular right roation for the linear diffussion

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

    Vector#(12, Bit#(64)) constants = unpack({64'hf0, 64'he1, 64'hd2, 64'hc3, 64'hb4, 64'ha5, 64'h96, 64'h87, 64'h78, 64'h69, 64'h5a, 64'h4b});
   
    
    x[2] = x[2] ^ (( a == Eight) ? constants[4 + i] : constants[i]);
    return x;
    
endfunction

//permutation function . 

function Vector#(5,Bit#(64)) permutation(Vector#(5,Bit#(64))state,Rounds a) ;

    Vector#(5,Bit#(64)) updated_state = ?;

    Bit#(4) lv_a=(a==Eight)?8:12;
    for (Bit#(4) i = 0; i < lv_a; i = i + 1) 
        begin
         updated_state = add_constant(updated_state, a,i);

         updated_state = sbox(updated_state);
         updated_state = diffusion(updated_state);
        end
return updated_state;
 
endfunction

typedef enum {INTIALIZE, ASSOCIATED_DATA,ENCRYPTION, FINALIZATION}Phase deriving (Bits, Eq);
typedef enum {Eight, Twelve} Rounds deriving (Bits,Eq);


module mkAscon_engine(Userinterface);

    Reg#(Bit#(64) )iv_constant=mkReg('h80800c0800000000) ;

    Vector#(5,Bit#(64)) local_state =unpack({320'h0});
   

    Vector#(2,Reg#(Bit#(64)))rg_encrypted_data <-replicateM(mkReg(0));
    Vector#(2,Reg#(Bit#(64)))rg_encryption_tag <-replicateM(mkReg(0));

    Reg#(Phase)fsm_state <- mkReg(INTIALIZE);

    Reg#(Bit#(4)) counter<-mkReg(0);
    Reg#(Bit#(1))req_associated_data<-mkReg(1);
    Vector# (2,Reg#(Bit#(128)))rg_interface <- replicateM(mkReg(0));
    
    Vector# (5,Reg#(Bit#(64)))rg_state <- replicateM(mkReg(0));

        local_state[0]= rg_state[0];
        local_state[1]= rg_state[1];
        local_state[2]= rg_state[2];
        local_state[3]= rg_state[3];
        local_state[4]= rg_state[4];


rule intialization_state(fsm_state==INTIALIZE);

Bit#(4)lv_counter1=counter ;

if (lv_counter1<12)
   begin
   writeVReg(rg_state,permutation(local_state,Twelve)); // 12 rounds are performed. and it will udate in rg_sate register.
  
   end 
else
   fsm_state <=ASSOCIATED_DATA  ;
lv_counter1<=lv_counter1+1;
if(lv_counter==12)
    counter<=0;
endrule


rule associated_data_state(fsm_state==ASSOCIATED_DATA); 
    if(req_associated_data==1)
        begin

            rg_state[0]<=rg_interface[1][127:64]^rg_state[0]; //here associated data will xored with the updated rg_state and the result will also stored in rg_state itself.
            rg_state[1]<=rg_interface[1][63:0]^rg_state[1];
            
    
        end
    else 
            fsm_state <=ENCRYPTION;
    req_associated_data<=0;
endrule

rule encryption_state(fsm_state==ENCRYPTION); 
Bit#(4)lv_counter2=counter;

        if(lv_counter2<8)
            begin

                let lv_updated_state = readVReg(rg_state);
                writeVReg(rg_state,permutation(lv_updated_state,Eight)); // 8 rounds of permutation
    
            end
        else 
            fsm_state <=FINALIZATION;
        lv_counter2<=lv_counter2+1;
        rg_encrypted_data[0]<=rg_interface[0][127:64]^rg_state[0]; // xoring with first two rows to get ciphertext
        rg_encrypted_data[1]<=rg_interface[0][63:0]^rg_state[1];
        lv_counter2=lv_counter2+1;
        if(lv_counter2==0)
            counter<=0;

   
   
endrule

rule finalization_state(fsm_state==FINALIZATION);

    let lv_final_rg_state=readVReg(rg_state);
    if(counter<12)
        writeVReg(rg_state,permutation(lv_final_rg_state,Twelve));
    counter<=counter+1;

    rg_encryption_tag[0]<=rg_[0][127:64]^rg_state[0]; // tag:xor with last two rows of udated rg_state with key
    rg_encryption_tag[1]<=rg_interface[0][63:0]^rg_state[1];


   

endrule

method Action input_function(Bit#(128)plaintext,Bit#(128)associated_data,Bit#(128)key,Bit#(128)nonce);
    
    rg_state[0] <= iv_constant;
    rg_state[1] <= key[127:64];
    rg_state[2]<= key[63:0];
    rg_state[3]<= nonce[127:64];
    rg_state[4]<= nonce[63:0];
    rg_interface[0]<=plaintext;
    rg_interface[1]<=associated_data
endmethod


method Bit#(128)ciphertext();
       
   return pack(readVReg(rg_encrypted_data));
endmethod
method Bit#(128)tag();
   
    return pack(readVReg(rg_encryption_tag));
endmethod
endmodule
endpackage
