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
    VL_IN8(EN_input_function,0,0);
    VL_OUT8(RDY_input_function,0,0);
    VL_OUT8(RDY_ciphertext,0,0);
    VL_OUT8(RDY_tag,0,0);
    VL_INW(input_function_plaintext,127,0,4);
    VL_INW(input_function_associated_data,127,0,4);
    VL_INW(input_function_key,127,0,4);
    VL_INW(input_function_nonce,127,0,4);
    VL_OUTW(ciphertext,127,0,4);
    VL_OUTW(tag,127,0,4);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mkAscon_engine__DOT__CLK;
        CData/*0:0*/ mkAscon_engine__DOT__RST_N;
        CData/*0:0*/ mkAscon_engine__DOT__EN_input_function;
        CData/*0:0*/ mkAscon_engine__DOT__RDY_input_function;
        CData/*0:0*/ mkAscon_engine__DOT__RDY_ciphertext;
        CData/*0:0*/ mkAscon_engine__DOT__RDY_tag;
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
        CData/*0:0*/ mkAscon_engine__DOT__ready_tag;
        CData/*0:0*/ mkAscon_engine__DOT__ready_tag_D_IN;
        CData/*0:0*/ mkAscon_engine__DOT__ready_tag_EN;
        CData/*0:0*/ mkAscon_engine__DOT__req_associated_data;
        CData/*0:0*/ mkAscon_engine__DOT__req_associated_data_D_IN;
        CData/*0:0*/ mkAscon_engine__DOT__req_associated_data_EN;
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
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_associated_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_encryption_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_finalization_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_intialization_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_permutate_associated_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_RL_permutate_encrypted_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_input_function;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_input_function;
        CData/*3:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_2;
        CData/*3:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4;
        CData/*3:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_3;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_7;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2;
        CData/*3:0*/ mkAscon_engine__DOT__x___05Fh18116;
        CData/*3:0*/ mkAscon_engine__DOT__x___05Fh23227;
    };
    struct {
        CData/*3:0*/ mkAscon_engine__DOT__x___05Fh26558;
        CData/*0:0*/ mkAscon_engine__DOT__counter_ULT_12___05F_d4;
        WData/*127:0*/ mkAscon_engine__DOT__input_function_plaintext[4];
        WData/*127:0*/ mkAscon_engine__DOT__input_function_associated_data[4];
        WData/*127:0*/ mkAscon_engine__DOT__input_function_key[4];
        WData/*127:0*/ mkAscon_engine__DOT__input_function_nonce[4];
        WData/*127:0*/ mkAscon_engine__DOT__ciphertext[4];
        WData/*127:0*/ mkAscon_engine__DOT__tag[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_0[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_0_D_IN[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_1[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_1_D_IN[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_2[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_2_D_IN[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_3[4];
        WData/*127:0*/ mkAscon_engine__DOT__rg_interface_3_D_IN[4];
        WData/*319:0*/ mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[10];
        WData/*319:0*/ mkAscon_engine__DOT__lv_finalized_key___05Fh22041[10];
        WData/*319:0*/ mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[10];
        WData/*319:0*/ mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[10];
        WData/*319:0*/ mkAscon_engine__DOT__padded_key___05Fh1252[10];
        WData/*319:0*/ mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[10];
        QData/*63:0*/ mkAscon_engine__DOT__iv_constant;
        QData/*63:0*/ mkAscon_engine__DOT__iv_constant_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encrypted_data_0;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encrypted_data_0_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encrypted_data_1;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encrypted_data_1_D_IN;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encryption_tag_0;
        QData/*63:0*/ mkAscon_engine__DOT__rg_encryption_tag_0_D_IN;
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
    };
    struct {
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh18100;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh23211;
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
        QData/*63:0*/ mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d278;
        QData/*63:0*/ mkAscon_engine__DOT__din___05Fh10413;
        QData/*63:0*/ mkAscon_engine__DOT__encryption0___05Fh16082;
        QData/*63:0*/ mkAscon_engine__DOT__encryption1___05Fh16083;
        QData/*63:0*/ mkAscon_engine__DOT__encryption_tag0___05Fh26646;
        QData/*63:0*/ mkAscon_engine__DOT__encryption_tag1___05Fh26647;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d281;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d266;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d275;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh11626;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh15826;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh16020;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh18966;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh18968;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh18970;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh18972;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19093;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19095;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19097;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19099;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19101;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19103;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19233;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19307;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19309;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19643;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh19884;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20125;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20366;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24077;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24079;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24081;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24083;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24085;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24204;
    };
    struct {
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24206;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24208;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24210;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24212;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24214;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24344;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24346;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24348;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24418;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24420;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24422;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24424;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24426;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24428;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24534;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24536;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24538;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24540;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24754;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh24995;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh25236;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh25477;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh25718;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh25720;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4174;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4176;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4178;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4180;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4182;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4184;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4301;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4303;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4305;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4307;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4309;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4311;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4441;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4443;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4445;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4515;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4517;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4519;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4521;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4523;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4525;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4631;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4633;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4635;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4851;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5092;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5333;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5574;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5815;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh7099;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh18975;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh19098;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh19106;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh19644;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh19646;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh19885;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh19887;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20126;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20128;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20367;
    };
    struct {
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20369;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh24086;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh24209;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh24213;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh24217;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh24429;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh24537;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh24755;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh24757;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh24996;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh24998;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh25237;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh25239;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh25478;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh25480;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh25719;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh25721;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4179;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4183;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4306;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4310;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4314;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4526;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4852;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4854;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5093;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5095;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5334;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5336;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5575;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5577;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5816;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5818;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vm_traceActivity[1];
    static CData/*2:0*/ __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[128];
    static QData/*63:0*/ __Vtable2_mkAscon_engine__DOT__y___05Fh23211[16];
    static QData/*63:0*/ __Vtable3_mkAscon_engine__DOT__y___05Fh18100[16];
    
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
