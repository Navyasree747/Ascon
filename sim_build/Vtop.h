// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);
    VL_IN8(input_function_mode,0,0);
    VL_IN8(EN_input_function,0,0);
    VL_OUT8(RDY_input_function,0,0);
    VL_OUT8(RDY_ciphertext,0,0);
    VL_OUT8(RDY_decrypted_data,0,0);
    VL_OUT8(RDY_tag,0,0);
    VL_OUT8(RDY_decrypted_tag,0,0);
    VL_INW(input_function_plaintext,127,0,4);
    VL_INW(input_function_associated_data,127,0,4);
    VL_INW(input_function_key,127,0,4);
    VL_INW(input_function_nonce,127,0,4);
    VL_OUTW(ciphertext,127,0,4);
    VL_OUTW(decrypted_data,127,0,4);
    VL_OUTW(tag,127,0,4);
    VL_OUTW(decrypted_tag,127,0,4);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mkAscon_engine__DOT__CLK;
        CData/*0:0*/ mkAscon_engine__DOT__RST_N;
        CData/*0:0*/ mkAscon_engine__DOT__input_function_mode;
        CData/*0:0*/ mkAscon_engine__DOT__EN_input_function;
        CData/*0:0*/ mkAscon_engine__DOT__RDY_input_function;
        CData/*0:0*/ mkAscon_engine__DOT__RDY_ciphertext;
        CData/*0:0*/ mkAscon_engine__DOT__RDY_decrypted_data;
        CData/*0:0*/ mkAscon_engine__DOT__RDY_tag;
        CData/*0:0*/ mkAscon_engine__DOT__RDY_decrypted_tag;
        CData/*3:0*/ mkAscon_engine__DOT__counter;
        CData/*3:0*/ mkAscon_engine__DOT__counter_D_IN;
        CData/*0:0*/ mkAscon_engine__DOT__counter_EN;
        CData/*2:0*/ mkAscon_engine__DOT__fsm_state;
        CData/*2:0*/ mkAscon_engine__DOT__fsm_state_D_IN;
        CData/*0:0*/ mkAscon_engine__DOT__fsm_state_EN;
        CData/*0:0*/ mkAscon_engine__DOT__iv_constant_EN;
        CData/*0:0*/ mkAscon_engine__DOT__ready_ciphertext;
        CData/*0:0*/ mkAscon_engine__DOT__ready_ciphertext_D_IN;
        CData/*0:0*/ mkAscon_engine__DOT__ready_ciphertext_EN;
        CData/*0:0*/ mkAscon_engine__DOT__ready_decrypted_data;
        CData/*0:0*/ mkAscon_engine__DOT__ready_decrypted_data_D_IN;
        CData/*0:0*/ mkAscon_engine__DOT__ready_decrypted_data_EN;
        CData/*0:0*/ mkAscon_engine__DOT__ready_decrypted_tag;
        CData/*0:0*/ mkAscon_engine__DOT__ready_decrypted_tag_D_IN;
        CData/*0:0*/ mkAscon_engine__DOT__ready_decrypted_tag_EN;
        CData/*0:0*/ mkAscon_engine__DOT__ready_tag;
        CData/*0:0*/ mkAscon_engine__DOT__ready_tag_D_IN;
        CData/*0:0*/ mkAscon_engine__DOT__ready_tag_EN;
        CData/*0:0*/ mkAscon_engine__DOT__req_associated_data;
        CData/*0:0*/ mkAscon_engine__DOT__req_associated_data_D_IN;
        CData/*0:0*/ mkAscon_engine__DOT__req_associated_data_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_decrypted_data_0_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_decrypted_data_1_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_decryption_tag_0_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_decryption_tag_1_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_encrypted_data_0_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_encrypted_data_1_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_encryption_tag_0_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_encryption_tag_1_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_interface_0_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_interface_1_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_interface_2_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_interface_3_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_state_0_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_state_1_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_state_2_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_state_3_EN;
        CData/*0:0*/ mkAscon_engine__DOT__rg_state_4_EN;
        CData/*0:0*/ mkAscon_engine__DOT__select;
        CData/*0:0*/ mkAscon_engine__DOT__select_D_IN;
        CData/*0:0*/ mkAscon_engine__DOT__select_EN;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_associated_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_decryption_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_encryption_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_finalization_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_intialization_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_permutate_associated_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_permutate_encrypt_decrypt_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_input_function;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state;
    };
    struct {
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_input_function;
        CData/*3:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_2;
        CData/*3:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4;
        CData/*3:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5;
        CData/*2:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FVAL_6;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_3;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_7;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_8;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FPSEL_4;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FSEL_4;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FSEL_4;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FSEL_4;
        CData/*3:0*/ mkAscon_engine__DOT__x___05Fh20564;
        CData/*3:0*/ mkAscon_engine__DOT__x___05Fh25687;
        CData/*3:0*/ mkAscon_engine__DOT__x___05Fh29164;
        CData/*0:0*/ mkAscon_engine__DOT__counter_ULT_12___05F_d4;
        WData/*127:0*/ mkAscon_engine__DOT__input_function_plaintext[4];
        WData/*127:0*/ mkAscon_engine__DOT__input_function_associated_data[4];
        WData/*127:0*/ mkAscon_engine__DOT__input_function_key[4];
        WData/*127:0*/ mkAscon_engine__DOT__input_function_nonce[4];
        WData/*127:0*/ mkAscon_engine__DOT__ciphertext[4];
        WData/*127:0*/ mkAscon_engine__DOT__decrypted_data[4];
        WData/*127:0*/ mkAscon_engine__DOT__tag[4];
        WData/*127:0*/ mkAscon_engine__DOT__decrypted_tag[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_0[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_0_D_IN[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_1[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_1_D_IN[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_2[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_2_D_IN[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_3[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_3_D_IN[4];
        WData/*319:0*/ mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[10];
        WData/*319:0*/ mkAscon_engine__DOT__lv_finalized_key___05Fh24489[10];
        WData/*319:0*/ mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[10];
        WData/*319:0*/ mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[10];
        WData/*319:0*/ mkAscon_engine__DOT__padded_key___05Fh1678[10];
        WData/*319:0*/ mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[10];
        QData/*63:0*/ mkAscon_engine__DOT__iv_constant;
        QData/*63:0*/ mkAscon_engine__DOT__iv_constant_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_decrypted_data_0;
        QData/*63:0*/ mkAscon_engine__DOT__rg_decrypted_data_0_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_decrypted_data_1;
        QData/*63:0*/ mkAscon_engine__DOT__rg_decrypted_data_1_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_decryption_tag_0;
        QData/*63:0*/ mkAscon_engine__DOT__rg_decryption_tag_0_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_decryption_tag_1;
        QData/*63:0*/ mkAscon_engine__DOT__rg_decryption_tag_1_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encrypted_data_0;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encrypted_data_0_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encrypted_data_1;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encrypted_data_1_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encryption_tag_0;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encryption_tag_0_D_IN;
    };
    struct {
        QData/*63:0*/ mkAscon_engine__DOT__rg_encryption_tag_1;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encryption_tag_1_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_0;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_0_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_1;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_1_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_2;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_2_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_3;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_3_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_1;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_4;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_6;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_1;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_4;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_6;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_1;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_5;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_6;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_1;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_2;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_5;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_6;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_4;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_5;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_6;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20548;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh25671;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d23;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d102;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d116;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d69;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94;
        QData/*63:0*/ mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76;
        QData/*63:0*/ mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d84;
        QData/*63:0*/ mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181;
        QData/*63:0*/ mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189;
        QData/*63:0*/ mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d281;
        QData/*63:0*/ mkAscon_engine__DOT__din___05Fh10845;
        QData/*63:0*/ mkAscon_engine__DOT__encryption0___05Fh16560;
        QData/*63:0*/ mkAscon_engine__DOT__encryption1___05Fh16561;
        QData/*63:0*/ mkAscon_engine__DOT__encryption_tag0___05Fh29252;
        QData/*63:0*/ mkAscon_engine__DOT__encryption_tag1___05Fh29253;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206;
    };
    struct {
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d284;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d269;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d278;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh12058;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21414;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21416;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21418;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21420;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21541;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21543;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21545;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21547;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21549;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21551;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21681;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21755;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21757;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh22091;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh22332;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh22573;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh22814;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26537;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26539;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26541;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26543;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26545;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26664;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26666;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26668;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26670;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26672;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26674;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26804;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26806;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26808;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26878;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26880;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26882;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26884;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26886;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26888;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26994;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26996;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh26998;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh27000;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh27214;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh27455;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh27696;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh27937;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh28178;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh28180;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4600;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4602;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4604;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4606;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4608;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4610;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4727;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4729;
    };
    struct {
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4731;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4733;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4735;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4737;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4867;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4869;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4871;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4941;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4943;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4945;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4947;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4949;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4951;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5057;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5059;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5061;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5277;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5518;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5759;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh6000;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh6241;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh7531;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21423;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21546;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21554;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh22092;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh22094;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh22333;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh22335;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh22574;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh22576;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh22815;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh22817;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh26546;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh26669;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh26673;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh26677;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh26889;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh26997;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh27215;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh27217;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh27456;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh27458;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh27697;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh27699;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh27938;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh27940;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh28179;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh28181;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4605;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4609;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4732;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4736;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4740;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4952;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5278;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5280;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5519;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5521;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5760;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5762;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh6001;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh6003;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh6242;
    };
    struct {
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh6244;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vm_traceActivity[1];
    static QData/*63:0*/ __Vtable1_mkAscon_engine__DOT__y___05Fh25671[16];
    static QData/*63:0*/ __Vtable2_mkAscon_engine__DOT__y___05Fh20548[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__6(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedFst* tracep);
    static void traceChgTop0(void* userp, VerilatedFst* tracep);
    static void traceCleanup(void* userp, VerilatedFst* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
