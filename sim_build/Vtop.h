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
        CData/*0:0*/ mkAscon_engine__DOT__CAN_FIRE_input_function;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state;
        CData/*0:0*/ mkAscon_engine__DOT__WILL_FIRE_input_function;
        CData/*3:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_1;
        CData/*3:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4;
        CData/*3:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6;
        CData/*0:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_1;
        CData/*3:0*/ mkAscon_engine__DOT__x___05Fh13372;
        CData/*3:0*/ mkAscon_engine__DOT__x___05Fh19320;
        CData/*3:0*/ mkAscon_engine__DOT__x___05Fh22665;
        CData/*0:0*/ mkAscon_engine__DOT__counter_ULT_12___05F_d4;
        WData/*127:0*/ mkAscon_engine__DOT__input_function_plaintext[4];
        WData/*127:0*/ mkAscon_engine__DOT__input_function_associated_data[4];
    };
    struct {
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
        WData/*319:0*/ mkAscon_engine__DOT__intialization_output___05Fh6775[10];
        WData/*319:0*/ mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[10];
        WData/*319:0*/ mkAscon_engine__DOT__packed_associated_data___05Fh11523[10];
        WData/*319:0*/ mkAscon_engine__DOT__padded_key___05Fh6735[10];
        WData/*319:0*/ mkAscon_engine__DOT__padded_key_state___05Fh16617[10];
        WData/*319:0*/ mkAscon_engine__DOT__pre_finalized_state___05Fh17084[10];
        WData/*127:0*/ mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[4];
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
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_2;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_4;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_2;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_4;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_4;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_5;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_2;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_4;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_5;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2;
        QData/*63:0*/ mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_5;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh13356;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh19304;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d23;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d103;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d109;
    };
    struct {
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d117;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d62;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d70;
        QData/*63:0*/ mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d95;
        QData/*63:0*/ mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d77;
        QData/*63:0*/ mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d85;
        QData/*63:0*/ mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d183;
        QData/*63:0*/ mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d191;
        QData/*63:0*/ mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d269;
        QData/*63:0*/ mkAscon_engine__DOT__din___05Fh12423;
        QData/*63:0*/ mkAscon_engine__DOT__encryption0___05Fh16813;
        QData/*63:0*/ mkAscon_engine__DOT__encryption1___05Fh16814;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d200;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d208;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d272;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d145;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d153;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d221;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d257;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d167;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d175;
        QData/*63:0*/ mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d266;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh10893;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh10982;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14222;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14224;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14226;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14228;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14349;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14351;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14353;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14355;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14357;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14359;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14489;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14563;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14565;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh14899;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh15140;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh15381;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh15622;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20170;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20172;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20174;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20176;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20178;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20297;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20299;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20301;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20303;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20305;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20307;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20437;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20439;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20441;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20511;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20513;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20515;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20517;
    };
    struct {
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20519;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20521;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20627;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20629;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20631;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20633;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh20847;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21088;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21329;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21570;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21811;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh21813;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh3980;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh3982;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh3984;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh3986;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh3988;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh3990;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4107;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4109;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4111;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4113;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4115;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4117;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4247;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4249;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4251;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4321;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4323;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4325;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4327;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4329;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4331;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4437;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4439;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4441;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4657;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh4898;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5139;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5380;
        QData/*63:0*/ mkAscon_engine__DOT__x___05Fh5621;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh14231;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh14354;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh14362;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh14900;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh14902;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh15141;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh15143;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh15382;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh15384;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh15623;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh15625;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20179;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20302;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20306;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20310;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20522;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20630;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20848;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh20850;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21089;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21091;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21330;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21332;
    };
    struct {
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21571;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21573;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21812;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh21814;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh3985;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh3989;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4112;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4116;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4120;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4332;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4658;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4660;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4899;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh4901;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5140;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5142;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5381;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5383;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5622;
        QData/*63:0*/ mkAscon_engine__DOT__y___05Fh5624;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vm_traceActivity[1];
    static QData/*63:0*/ __Vtable1_mkAscon_engine__DOT__y___05Fh19304[16];
    static QData/*63:0*/ __Vtable2_mkAscon_engine__DOT__y___05Fh13356[16];
    
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