
package ascon_enc_dec;
import Vector::*;
import FIFO::*;
//import ListN :: *;

interface Userinterface;

    method Action input_function (Bit#(128)plaintext, Bit#(128) associated_data,Bit#(128) key,Bit#(128) nonce,Bit#(1)mode);
    method Bit#(128) ciphertext();
    method Bit#(128) decrypted_data();    
    method Bit#(128) tag();
    method Bit#(128) decrypted_tag();
endinterface
// s-box bit slicing operation .

function Vector#(5,Bit#(64)) sbox (Vector#(5,Bit#(64))x);

    Vector#(5,Bit#(64)) y ;

    y[0]= (x[4]&x[1]) ^(x[3]) ^(x[2]&x[1]) ^x[2]^( x[1]&x[0]) ^x[1]^ x[0];

    y[1]= x[4]^ (x[2]&x[3]) ^x[3] ^(x[3]&x[1])^ x[2] ^(x[1]&x[2]) ^ x[1]^ x[0];

    y[2]= (x[4]&x[3])^ x[4]^ x[2]^ x[1]^ 'hffffffffffffffff;

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

    Vector#(12, Bit#(64)) constants = unpack({64'hf0, 64'he1, 64'hd2, 64'hc3, 64'hb4, 64'ha5, 64'h96, 64'h87, 64'h78, 64'h69, 64'h5a, 64'h4b});
   
    
    x[2] = x[2] ^ (( a == Eight) ? constants[7 - i] : constants[11-i]);

    return x;
   
endfunction

//permutation function . 

function ActionValue#(Vector#(5, Bit#(64))) permutation(Vector#(5, Bit#(64)) state, Rounds a,Bit#(4)i);
    actionvalue
    Vector#(5, Bit#(64)) updated_state = state; // Initialize updated_state with the input state

    Bit#(4) lv_a = (a == Eight) ? 8 : 12;
  
      begin
        $display("Iteration %0d - Before add_constant: %h %h %h %h %h", i, updated_state[0], updated_state[1], updated_state[2], updated_state[3], updated_state[4]);
        updated_state = add_constant(updated_state, a, i);
        $display("Iteration %0d - After add_constant: %h %h %h %h %h", i, updated_state[0], updated_state[1], updated_state[2], updated_state[3], updated_state[4]);
        updated_state = sbox(updated_state);
        //$display("Iteration %0d - After sbox: %h %h %h %h %h", i, updated_state[0], updated_state[1], updated_state[2], updated_state[3], updated_state[4]);
        updated_state = diffusion(updated_state);
        $display("Iteration %0d - After diffusion: %h %h %h %h %h",i,  updated_state[0], updated_state[1], updated_state[2], updated_state[3], updated_state[4]);
     end




return updated_state;
//$display("updated_state=%h",updated_state)
endactionvalue
endfunction

typedef enum {IDLE,INTIALIZE, ASSOCIATED_DATA,SELECECTION_MODE,ENCRYPTION,DECRYPTION,PERMUTATE_ENCRYPT_DECRYPT,FINALIZATION}Phase deriving (Bits, Eq);
typedef enum {Eight, Twelve} Rounds deriving (Bits,Eq);


module mkAscon_engine(Userinterface);

    Reg#(Bit#(64)) iv_constant <- mkReg(64'h80800c0800000000);
    Reg#(Bit#(1))ready_ciphertext<-mkReg(0);
    Reg#(Bit#(1))ready_decrypted_data<-mkReg(0);
    Reg#(Bit#(1))ready_tag<-mkReg(0);
    Reg#(Bit#(1))ready_decrypted_tag<-mkReg(0);

  

    Vector#(2,Reg#(Bit#(64)))rg_encrypted_data <-replicateM(mkReg(0));
    Vector#(2,Reg#(Bit#(64)))rg_decrypted_data <-replicateM(mkReg(0));
    Vector#(2,Reg#(Bit#(64)))rg_encryption_tag <-replicateM(mkReg(0));
    Vector#(2,Reg#(Bit#(64)))rg_decryption_tag <-replicateM(mkReg(0));

   
    Reg#(Bit#(4)) counter<-mkReg(0);
    Reg#(Bit#(1))req_associated_data<-mkReg(1);
    Vector# (4,Reg#(Bit#(128)))rg_interface <- replicateM(mkReg(0));
    Reg#(Bit#(1)) select <- mkReg(0);

    
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
       $display("before intial permutation of p(12)=%h,%h,%h,%h,%h",local_state[0],local_state[1],local_state[2],local_state[3],local_state[4]);
   end
   else 
   begin
       //let lv_reg_state= readVReg(rg_state);
       local_state=readVReg(rg_state);
       counter<=counter+1;
       
   end
   
  
  let permutation_value <- permutation(local_state,Twelve,counter);
  
  if (counter == 11)
    begin
       
        $display("Final permutation result p(12): %h", permutation_value);
    end

  writeVReg(rg_state, permutation_value); // Update rg_state register
end

else

    begin
        Vector#(5,Bit#(64))new_state;
        new_state[4]=rg_state[0];
        new_state[3]=rg_state[1];
        new_state[2]=rg_state[2];
        new_state[1]=rg_state[3];
        new_state[0]=rg_state[4];
        //$display("newstate ,%h",new_state);

        let packed_rg_state =  pack(new_state);
        //$display("packed_rg_state %h",packed_rg_state);
        let padded_key = {192'b0, rg_interface[0]};
        //$display("padded_key %h",padded_key);
        let intialization_output= packed_rg_state ^ padded_key;
        //$display("intialization_output %h",intialization_output);
        Vector#(5,Bit#(64))new_rg_state;

        new_rg_state[4] = unpack(intialization_output[63:0]);
        new_rg_state[3] = unpack(intialization_output[127:64]);
        new_rg_state[2] = unpack(intialization_output[191:128]);
        new_rg_state[1] = unpack(intialization_output[255:192]);
        new_rg_state[0] = unpack(intialization_output[319:256]);


        
        $display("before xoring with associated data input %h ,%h ,%h ,%h ,%h ",new_rg_state[0], new_rg_state[1],new_rg_state[2],new_rg_state[3],new_rg_state[4]);
        writeVReg(rg_state,new_rg_state);
       // $dispalay("rg_state %h,%h,%h,%h,%h",rg_state[0],rg_state[1],rg_state[2],rg_state[3],rg_state[4]);
        fsm_state <=ASSOCIATED_DATA  ;  
        counter<=0;
    end
//local_counter1=counter+1;
endrule


rule associated_data_state(fsm_state==ASSOCIATED_DATA); 
Vector#(5,Bit#(64))new_lv_state;
    if(req_associated_data==1)
        begin
            let associated_data_input0=rg_interface[2][127:64]^rg_state[0];
            let associated_data_input1=rg_interface[2][63:0]^rg_state[0];
           
            rg_state[0]<=rg_interface[2][127:64]^rg_state[0]; //here associated data will xored with the updated rg_state and the result will also stored in rg_state itself.
            rg_state[1]<=rg_interface[2][63:0]^rg_state[1];
            req_associated_data<=0;
        end
    else
        begin
            let lv_updated_state = readVReg(rg_state);
            Vector#(5, Bit#(64)) permutation_value0 = ?;
            if(counter!=8)
                begin
                  permutation_value0<-permutation(lv_updated_state,Eight,counter);
                    
                    writeVReg(rg_state,permutation_value0); // 8 rounds of permutation
                    counter<=counter+1;
                   
                end
            else
                begin


                     fsm_state <=SELECECTION_MODE;
                     counter<=0;

                end 
        end 
            
endrule
rule  selection_state(fsm_state==SELECECTION_MODE) ;
          
    if(select==1)
     begin
        fsm_state <=ENCRYPTION;
        counter<=0;
     end
    else 
     begin
        fsm_state<=DECRYPTION;
        counter<=0;
     end
    
endrule

rule encryption_state(fsm_state==ENCRYPTION); 
    Vector#(5,Bit#(64))new_encrypted_lv_state;
    Vector#(5,Bit#(64))lv_encrypted_state;
        if(counter==0)
            begin
            rg_state[0]<=rg_interface[1][127:64]^rg_state[0];
            rg_state[1]<=rg_interface[1][63:0]^rg_state[1]; // xoring with first two rows to get ciphertext
            
            let encryption0=rg_interface[1][127:64]^rg_state[0]; 
            let encryption1=rg_interface[1][63:0]^rg_state[1];
            $display("encryption_result=%h%h",encryption0,encryption1);
            
            
                counter<=counter+1;             
            end
        else 
            begin
            rg_encrypted_data[0]<=rg_state[1];
            rg_encrypted_data[1]<=rg_state[0];
            ready_ciphertext<=1;

            lv_encrypted_state[4]=rg_state[0];
            lv_encrypted_state[3]=rg_state[1];
            lv_encrypted_state[2]=rg_state[2];
            lv_encrypted_state[1]=rg_state[3];
            lv_encrypted_state[0]=rg_state[4];
            
            
            let lv_updated_encrypted=pack(lv_encrypted_state);
            let lv_processed_data={319'b0, 1'b1};
            let pre_finalized_state=lv_updated_encrypted^lv_processed_data;

            new_encrypted_lv_state[0]=unpack(pre_finalized_state[319:256]);
            new_encrypted_lv_state[1]=unpack(pre_finalized_state[255:192]);
            new_encrypted_lv_state[2]=unpack(pre_finalized_state[191:128]);
            new_encrypted_lv_state[3]=unpack(pre_finalized_state[127:64]);
            new_encrypted_lv_state[4]=unpack(pre_finalized_state[63:0]);
              
            writeVReg(rg_state,new_encrypted_lv_state);
                
            fsm_state <=PERMUTATE_ENCRYPT_DECRYPT;
                
            counter<=0;
               
            end
        //local_counter2=counter+1;
        
endrule
rule decryption_state(fsm_state==DECRYPTION);
    Vector#(5,Bit#(64))new_decrypted_lv_state;
    Vector#(5,Bit#(64))lv_decrypted_state;
        if(counter==0)
            begin
            rg_decrypted_data[1]<=rg_interface[1][127:64]^rg_state[0];
            rg_decrypted_data[0]<=rg_interface[1][63:0]^rg_state[1]; // xoring with first two rows to get ciphertext
            rg_state[0]<=rg_interface[1][127:64];
            rg_state[1]<=rg_interface[1][63:0];
            let decryption0=rg_interface[1][127:64]^rg_state[0]; 
            let decryption1=rg_interface[1][63:0]^rg_state[1];
            
            $display("rg_decrypted_data=%h%h",rg_decrypted_data[0],rg_decrypted_data[1]);
            $display("decryption_result=%h%h",decryption0,decryption1);
        
                counter<=counter+1;  
                
            end
        else 
            begin   

            ready_decrypted_data<=1;

            lv_decrypted_state[4]=rg_state[0];
            lv_decrypted_state[3]=rg_state[1];
            lv_decrypted_state[2]=rg_state[2];
            lv_decrypted_state[1]=rg_state[3];
            lv_decrypted_state[0]=rg_state[4];  
            let lv_updated_decrypted=pack(lv_decrypted_state);
            let lv_processed_data2={319'b0, 1'b1};
            let pre_finalized_dec_state=lv_updated_decrypted^lv_processed_data2;

            new_decrypted_lv_state[0]=unpack(pre_finalized_dec_state[319:256]);
            new_decrypted_lv_state[1]=unpack(pre_finalized_dec_state[255:192]);
            new_decrypted_lv_state[2]=unpack(pre_finalized_dec_state[191:128]);
            new_decrypted_lv_state[3]=unpack(pre_finalized_dec_state[127:64]);
            new_decrypted_lv_state[4]=unpack(pre_finalized_dec_state[63:0]);
            writeVReg(rg_state,new_decrypted_lv_state);
            counter<=0;   
            fsm_state <=PERMUTATE_ENCRYPT_DECRYPT;
                //ready_ciphertext<=0;
            
               
            end
endrule
rule permutate_encrypt_decrypt_state(fsm_state==PERMUTATE_ENCRYPT_DECRYPT);
    if(counter!=8)
        begin

            let lv_updated_encrypted_data = readVReg(rg_state);
            let permutation_value2<-permutation(lv_updated_encrypted_data,Eight,counter);
            writeVReg(rg_state,permutation_value2); // 8 rounds of permutation
            counter<=counter+1;
        end
    else
    
        begin
            let processed_data1={1'b1,319'b0};
            $display("processed_data1%h",processed_data1);
            Vector#(5,Bit#(64))pre_finalized_lv_data;
            pre_finalized_lv_data[4]=rg_state[0];
            pre_finalized_lv_data[3]=rg_state[1];
            pre_finalized_lv_data[2]=rg_state[2];
            pre_finalized_lv_data[1]=rg_state[3];
            pre_finalized_lv_data[0]=rg_state[4];


            let packed_pre_finalized_data=pack(pre_finalized_lv_data);
            $display("packed_pre_finalized_data%h",packed_pre_finalized_data);
            let lv_updated_finalized_data=packed_pre_finalized_data^processed_data1;
            $display("lv_updated_finalized_data%h",lv_updated_finalized_data);
            let lv_finalized_key={128'b0,rg_interface[0],64'b0};
            $display("lv_finalized_key%h",lv_finalized_key);
            let finalized_out=lv_finalized_key^lv_updated_finalized_data;
            Vector#(5,Bit#(64))new_lv_finalized;
            new_lv_finalized[4]=unpack(finalized_out[63:0]);
            new_lv_finalized[3]=unpack(finalized_out[127:64]);
            new_lv_finalized[2]=unpack(finalized_out[191:128]);
            new_lv_finalized[1]=unpack(finalized_out[255:192]);
            new_lv_finalized[0]=unpack(finalized_out[319:256]);  
            writeVReg(rg_state,new_lv_finalized);



            fsm_state <=FINALIZATION;
            counter<=0;
        end

    
endrule


rule finalization_state(fsm_state==FINALIZATION);
   
    let lv_final_rg_state=readVReg(rg_state);

    if(counter<12)
        begin
            let permutation_value3<-permutation(lv_final_rg_state,Twelve,counter);
            writeVReg(rg_state,permutation_value3);
            counter<=counter+1;
        
        end

    else 

        begin
            if(select==1)
                begin
                rg_encryption_tag[1]<=rg_interface[0][127:64]^rg_state[3];
                rg_encryption_tag[0]<=rg_interface[0][63:0]^rg_state[4];
                let encryption_tag0=rg_interface[0][127:64]^rg_state[3];
                let encryption_tag1=rg_interface[0][63:0]^rg_state[4];
                $display("encryption_tag0%h",encryption_tag0);
                $display("encryption_tag1%h",encryption_tag1);
            
                fsm_state <=IDLE  ;
                ready_tag<=1;
            end    
            else
                begin
                    rg_decryption_tag[1]<=rg_interface[0][127:64]^rg_state[3];
                    rg_decryption_tag[0]<=rg_interface[0][63:0]^rg_state[4];
                    let decryption_tag0=rg_interface[0][127:64]^rg_state[3];
                    let decryption_tag1=rg_interface[0][63:0]^rg_state[4];
                     $display("encryption_tag0%h",decryption_tag0);
                     $display("encryption_tag1%h",decryption_tag1);
            
                    fsm_state <=IDLE  ;
                    ready_decrypted_tag<=1;
                end

        end


endrule

method Action input_function(Bit#(128)plaintext,Bit#(128)associated_data,Bit#(128)key,Bit#(128)nonce,Bit#(1)mode);
    
    // rg_state[0] <= iv;
    // rg_state[1] <= key[127:64];
    //rg_key <= key;
    rg_interface[0]<= key;
    rg_interface[1]<= plaintext;
    rg_interface[2]<= associated_data;
    rg_interface[3]<= nonce;
    select<=mode;
    
   
    fsm_state <= INTIALIZE;
endmethod


method Bit#(128)ciphertext()if(ready_ciphertext==1);
       
   return pack(readVReg(rg_encrypted_data));
endmethod
method Bit#(128)tag()if(ready_tag==1);
   
    return pack(readVReg(rg_encryption_tag));
endmethod
method Bit#(128)decrypted_data()if(ready_decrypted_data==1);
       
   return pack(readVReg(rg_decrypted_data));
endmethod
method Bit#(128)decrypted_tag()if(ready_decrypted_tag==1);
   
    return pack(readVReg(rg_decryption_tag));
endmethod
endmodule
endpackage
