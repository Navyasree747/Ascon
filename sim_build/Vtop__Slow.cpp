// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========
QData/*63:0*/ Vtop::__Vtable1_mkAscon_engine__DOT__y___05Fh19304[16];
QData/*63:0*/ Vtop::__Vtable2_mkAscon_engine__DOT__y___05Fh13356[16];

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_input_function = 1U;
    vlTOPp->mkAscon_engine__DOT__RDY_input_function = 1U;
    vlTOPp->mkAscon_engine__DOT__counter = 0xaU;
    vlTOPp->mkAscon_engine__DOT__fsm_state = 2U;
    vlTOPp->mkAscon_engine__DOT__iv_constant = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__ready_ciphertext = 0U;
    vlTOPp->mkAscon_engine__DOT__ready_tag = 0U;
    vlTOPp->mkAscon_engine__DOT__req_associated_data = 0U;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_interface_0[0U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_0[1U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_0[2U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_0[3U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_1[0U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_1[1U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_1[2U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_1[3U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_2[0U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_2[1U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_2[2U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_2[3U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_3[0U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_3[1U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_3[2U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_interface_3[3U] = 0xaaaaaaaaU;
    vlTOPp->mkAscon_engine__DOT__rg_state_0 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_state_1 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_state_2 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_state_3 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_state_4 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__ready_ciphertext_D_IN = 1U;
    vlTOPp->mkAscon_engine__DOT__ready_tag_D_IN = 1U;
    vlTOPp->mkAscon_engine__DOT__iv_constant_D_IN = 0ULL;
    vlTOPp->mkAscon_engine__DOT__iv_constant_EN = 0U;
    vlTOPp->mkAscon_engine__DOT__req_associated_data_D_IN = 0U;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0_D_IN = 0ULL;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0_EN = 0U;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1_D_IN = 0ULL;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1_EN = 0U;
    vlTOPp->RDY_input_function = vlTOPp->mkAscon_engine__DOT__RDY_input_function;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*319:0*/ __Vtemp7[10];
    // Body
    vlTOPp->mkAscon_engine__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mkAscon_engine__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mkAscon_engine__DOT__input_function_plaintext[0U] 
        = vlTOPp->input_function_plaintext[0U];
    vlTOPp->mkAscon_engine__DOT__input_function_plaintext[1U] 
        = vlTOPp->input_function_plaintext[1U];
    vlTOPp->mkAscon_engine__DOT__input_function_plaintext[2U] 
        = vlTOPp->input_function_plaintext[2U];
    vlTOPp->mkAscon_engine__DOT__input_function_plaintext[3U] 
        = vlTOPp->input_function_plaintext[3U];
    vlTOPp->mkAscon_engine__DOT__input_function_associated_data[0U] 
        = vlTOPp->input_function_associated_data[0U];
    vlTOPp->mkAscon_engine__DOT__input_function_associated_data[1U] 
        = vlTOPp->input_function_associated_data[1U];
    vlTOPp->mkAscon_engine__DOT__input_function_associated_data[2U] 
        = vlTOPp->input_function_associated_data[2U];
    vlTOPp->mkAscon_engine__DOT__input_function_associated_data[3U] 
        = vlTOPp->input_function_associated_data[3U];
    vlTOPp->mkAscon_engine__DOT__input_function_key[0U] 
        = vlTOPp->input_function_key[0U];
    vlTOPp->mkAscon_engine__DOT__input_function_key[1U] 
        = vlTOPp->input_function_key[1U];
    vlTOPp->mkAscon_engine__DOT__input_function_key[2U] 
        = vlTOPp->input_function_key[2U];
    vlTOPp->mkAscon_engine__DOT__input_function_key[3U] 
        = vlTOPp->input_function_key[3U];
    vlTOPp->mkAscon_engine__DOT__input_function_nonce[0U] 
        = vlTOPp->input_function_nonce[0U];
    vlTOPp->mkAscon_engine__DOT__input_function_nonce[1U] 
        = vlTOPp->input_function_nonce[1U];
    vlTOPp->mkAscon_engine__DOT__input_function_nonce[2U] 
        = vlTOPp->input_function_nonce[2U];
    vlTOPp->mkAscon_engine__DOT__input_function_nonce[3U] 
        = vlTOPp->input_function_nonce[3U];
    vlTOPp->mkAscon_engine__DOT__EN_input_function 
        = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_input_function 
        = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[0U] 
        = vlTOPp->input_function_plaintext[0U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[1U] 
        = vlTOPp->input_function_plaintext[1U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[2U] 
        = vlTOPp->input_function_plaintext[2U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[3U] 
        = vlTOPp->input_function_plaintext[3U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_1_EN 
        = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[0U] 
        = vlTOPp->input_function_key[0U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[1U] 
        = vlTOPp->input_function_key[1U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[2U] 
        = vlTOPp->input_function_key[2U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[3U] 
        = vlTOPp->input_function_key[3U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_0_EN 
        = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[0U] 
        = vlTOPp->input_function_associated_data[0U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[1U] 
        = vlTOPp->input_function_associated_data[1U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[2U] 
        = vlTOPp->input_function_associated_data[2U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[3U] 
        = vlTOPp->input_function_associated_data[3U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_2_EN 
        = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[0U] 
        = vlTOPp->input_function_nonce[0U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[1U] 
        = vlTOPp->input_function_nonce[1U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[2U] 
        = vlTOPp->input_function_nonce[2U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[3U] 
        = vlTOPp->input_function_nonce[3U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_3_EN 
        = vlTOPp->EN_input_function;
    vlTOPp->RDY_input_function = vlTOPp->mkAscon_engine__DOT__RDY_input_function;
    vlTOPp->mkAscon_engine__DOT__RDY_ciphertext = vlTOPp->mkAscon_engine__DOT__ready_ciphertext;
    vlTOPp->mkAscon_engine__DOT__RDY_tag = vlTOPp->mkAscon_engine__DOT__ready_tag;
    vlTOPp->mkAscon_engine__DOT__tag[0U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0);
    vlTOPp->mkAscon_engine__DOT__tag[1U] = (IData)(
                                                   (vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0 
                                                    >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__tag[2U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1);
    vlTOPp->mkAscon_engine__DOT__tag[3U] = (IData)(
                                                   (vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1 
                                                    >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_intialization_state 
        = (1U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_encryption_state 
        = (4U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_associated_data_state 
        = (2U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_permutate_associated_data_state 
        = (3U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_finalization_state 
        = (5U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__ciphertext[0U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0);
    vlTOPp->mkAscon_engine__DOT__ciphertext[1U] = (IData)(
                                                          (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0 
                                                           >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__ciphertext[2U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1);
    vlTOPp->mkAscon_engine__DOT__ciphertext[3U] = (IData)(
                                                          (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1 
                                                           >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__encryption0___05Fh16813 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[2U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__din___05Fh12423 = 
        (((QData)((IData)((1U & (~ (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_0 
                                            >> 0x3fU)))))) 
          << 0x3fU) | (0x7fffffffffffffffULL & vlTOPp->mkAscon_engine__DOT__rg_state_0));
    vlTOPp->mkAscon_engine__DOT__x___05Fh10893 = ((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkAscon_engine__DOT__rg_interface_2[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkAscon_engine__DOT__rg_interface_2[2U]))) 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__encryption1___05Fh16814 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[1U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[0U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh10982 = ((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkAscon_engine__DOT__rg_interface_2[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkAscon_engine__DOT__rg_interface_2[0U]))) 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh20630 = (vlTOPp->mkAscon_engine__DOT__rg_state_1 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20521 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20633 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617[0U] = 0U;
    vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617[1U] = 0U;
    vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617[2U] = 0U;
    vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617[3U] = 0U;
    vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617[4U] = 0U;
    vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617[5U] = 0U;
    vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617[6U] 
        = vlTOPp->mkAscon_engine__DOT__rg_interface_0[0U];
    vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617[7U] 
        = vlTOPp->mkAscon_engine__DOT__rg_interface_0[1U];
    vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617[8U] 
        = vlTOPp->mkAscon_engine__DOT__rg_interface_0[2U];
    vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617[9U] 
        = vlTOPp->mkAscon_engine__DOT__rg_interface_0[3U];
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0_D_IN 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[2U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1_D_IN 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[1U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[0U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[0U] 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_1) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_interface_0[0U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[1U] 
        = ((IData)((vlTOPp->mkAscon_engine__DOT__rg_state_1 
                    >> 0x20U)) ^ vlTOPp->mkAscon_engine__DOT__rg_interface_0[1U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[2U] 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_interface_0[2U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[3U] 
        = ((IData)((vlTOPp->mkAscon_engine__DOT__rg_state_0 
                    >> 0x20U)) ^ vlTOPp->mkAscon_engine__DOT__rg_interface_0[3U]);
    VL_EXTEND_WW(320,128, __Vtemp7, vlTOPp->mkAscon_engine__DOT__rg_interface_0);
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[0U] 
        = __Vtemp7[0U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[1U] 
        = __Vtemp7[1U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[2U] 
        = __Vtemp7[2U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[3U] 
        = __Vtemp7[3U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[4U] 
        = __Vtemp7[4U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[5U] 
        = __Vtemp7[5U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[6U] 
        = __Vtemp7[6U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[7U] 
        = __Vtemp7[7U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[8U] 
        = __Vtemp7[8U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[9U] 
        = __Vtemp7[9U];
    vlTOPp->mkAscon_engine__DOT__x___05Fh20441 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__y___05Fh20306 = (vlTOPp->mkAscon_engine__DOT__rg_state_3 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh20522 = (vlTOPp->mkAscon_engine__DOT__rg_state_3 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[0U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[1U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_4 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[2U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[3U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_3 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[4U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_2);
    vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[5U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_2 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[6U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[7U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_1 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[8U] 
        = (IData)((((QData)((IData)((1U & (~ (IData)(
                                                     (vlTOPp->mkAscon_engine__DOT__rg_state_0 
                                                      >> 0x3fU)))))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & vlTOPp->mkAscon_engine__DOT__rg_state_0)));
    vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195[9U] 
        = (IData)(((((QData)((IData)((1U & (~ (IData)(
                                                      (vlTOPp->mkAscon_engine__DOT__rg_state_0 
                                                       >> 0x3fU)))))) 
                     << 0x3fU) | (0x7fffffffffffffffULL 
                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0)) 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[0U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[1U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_4 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[2U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[3U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_3 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[4U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_2);
    vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[5U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_2 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[6U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[7U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_1 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[8U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[9U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_0 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__x___05Fh22665 = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4 
        = (0xcU > (IData)(vlTOPp->mkAscon_engine__DOT__counter));
    if ((0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) {
        vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33 
            = vlTOPp->mkAscon_engine__DOT__iv_constant;
        vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[2U])));
        vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_3[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_3[0U])));
        vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_3[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_3[2U])));
        vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d23 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[0U])));
    } else {
        vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33 
            = vlTOPp->mkAscon_engine__DOT__rg_state_0;
        vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15 
            = vlTOPp->mkAscon_engine__DOT__rg_state_1;
        vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
            = vlTOPp->mkAscon_engine__DOT__rg_state_4;
        vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19 
            = vlTOPp->mkAscon_engine__DOT__rg_state_3;
        vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d23 
            = vlTOPp->mkAscon_engine__DOT__rg_state_2;
    }
    vlTOPp->mkAscon_engine__DOT__x___05Fh13372 = (0xfU 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh19320 = (0xfU 
                                                  & ((IData)(0xbU) 
                                                     - (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->RDY_ciphertext = vlTOPp->mkAscon_engine__DOT__RDY_ciphertext;
    vlTOPp->RDY_tag = vlTOPp->mkAscon_engine__DOT__RDY_tag;
    vlTOPp->tag[0U] = vlTOPp->mkAscon_engine__DOT__tag[0U];
    vlTOPp->tag[1U] = vlTOPp->mkAscon_engine__DOT__tag[1U];
    vlTOPp->tag[2U] = vlTOPp->mkAscon_engine__DOT__tag[2U];
    vlTOPp->tag[3U] = vlTOPp->mkAscon_engine__DOT__tag[3U];
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_intialization_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_encryption_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_associated_data_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_permutate_associated_data_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_finalization_state;
    vlTOPp->ciphertext[0U] = vlTOPp->mkAscon_engine__DOT__ciphertext[0U];
    vlTOPp->ciphertext[1U] = vlTOPp->mkAscon_engine__DOT__ciphertext[1U];
    vlTOPp->ciphertext[2U] = vlTOPp->mkAscon_engine__DOT__ciphertext[2U];
    vlTOPp->ciphertext[3U] = vlTOPp->mkAscon_engine__DOT__ciphertext[3U];
    vlTOPp->mkAscon_engine__DOT__x___05Fh20631 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20633 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20178 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20633 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084[0U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084[1U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_4 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084[2U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084[3U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_3 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084[4U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_2);
    vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084[5U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_2 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084[6U] 
        = vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[0U];
    vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084[7U] 
        = vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[1U];
    vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084[8U] 
        = vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[2U];
    vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084[9U] 
        = vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[3U];
    if ((0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5 
            = vlTOPp->mkAscon_engine__DOT__encryption0___05Fh16813;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5 
            = vlTOPp->mkAscon_engine__DOT__encryption1___05Fh16814;
    } else {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[2U])));
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235[0U])));
    }
    vlTOPp->mkAscon_engine__DOT__x___05Fh20439 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20441 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20519 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20521 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20522);
    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[0U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[0U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[0U]);
    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[1U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[1U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[1U]);
    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[2U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[2U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[2U]);
    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[3U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[3U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[3U]);
    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[4U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[4U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[4U]);
    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[5U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[5U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[5U]);
    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[6U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[6U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[6U]);
    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[7U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[7U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[7U]);
    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[8U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[8U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[8U]);
    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[9U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523[9U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[9U]);
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_1 
        = ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? 0U : (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh22665));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5 
        = ((0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh22665)
            : 0U);
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh22665)
            : 0U);
    vlTOPp->mkAscon_engine__DOT__y___05Fh3985 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4331 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh3990 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4251 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4116 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4332 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->__Vtableidx2 = vlTOPp->mkAscon_engine__DOT__x___05Fh13372;
    vlTOPp->mkAscon_engine__DOT__y___05Fh13356 = vlTOPp->__Vtable2_mkAscon_engine__DOT__y___05Fh13356
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx1 = vlTOPp->mkAscon_engine__DOT__x___05Fh19320;
    vlTOPp->mkAscon_engine__DOT__y___05Fh19304 = vlTOPp->__Vtable1_mkAscon_engine__DOT__y___05Fh19304
        [vlTOPp->__Vtableidx1];
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)));
    vlTOPp->mkAscon_engine__DOT__ready_ciphertext_EN 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
           & (0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
           & (0U != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__req_associated_data_EN 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
           & (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5 
        = (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
            & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
           & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
           & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
           & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__rg_state_0_EN = ((
                                                   ((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                      & (8U 
                                                         != (IData)(vlTOPp->mkAscon_engine__DOT__counter))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                        & (0xcU 
                                                           != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                    | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_1_EN = ((
                                                   ((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                      & (8U 
                                                         != (IData)(vlTOPp->mkAscon_engine__DOT__counter))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                        & (0xcU 
                                                           != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                    | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state));
    vlTOPp->mkAscon_engine__DOT__counter_EN = ((((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                   & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                                                  | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                     & (0xcU 
                                                        != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                 | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state)) 
                                                | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                               | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_2_EN = ((
                                                   ((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                                                      & (0U 
                                                         != (IData)(vlTOPp->mkAscon_engine__DOT__counter))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                        & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                    | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                       & (8U 
                                                          != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                   | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                      & (0xcU 
                                                         != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_3_EN = ((
                                                   ((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                                                      & (0U 
                                                         != (IData)(vlTOPp->mkAscon_engine__DOT__counter))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                        & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                    | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                       & (8U 
                                                          != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                   | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                      & (0xcU 
                                                         != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_4_EN = ((
                                                   ((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                                                      & (0U 
                                                         != (IData)(vlTOPp->mkAscon_engine__DOT__counter))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                        & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                    | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                       & (8U 
                                                          != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                   | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                      & (0xcU 
                                                         != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state));
    vlTOPp->mkAscon_engine__DOT__fsm_state_EN = (((
                                                   ((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                                                      & (0U 
                                                         != (IData)(vlTOPp->mkAscon_engine__DOT__counter))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                        & (8U 
                                                           == (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                    | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                       & (0xcU 
                                                          == (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                   | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                                                      & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) 
                                                  | (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                      & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                                                     & (8U 
                                                        == (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                 | (IData)(vlTOPp->EN_input_function));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
           & (0xcU == (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
           & (0xcU != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh20629 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20631 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20517 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20519 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4441 = (vlTOPp->mkAscon_engine__DOT__x___05Fh3990 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
    vlTOPp->mkAscon_engine__DOT__x___05Fh3988 = (vlTOPp->mkAscon_engine__DOT__x___05Fh3990 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4249 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4251 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4329 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4331 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4332);
    vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138 
        = (vlTOPp->mkAscon_engine__DOT__rg_state_2 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh13356);
    vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251 
        = (vlTOPp->mkAscon_engine__DOT__rg_state_2 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh19304);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 
        = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d23 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh19304);
    vlTOPp->mkAscon_engine__DOT__ready_tag_EN = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2;
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2;
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2;
    vlTOPp->mkAscon_engine__DOT__fsm_state_D_IN = ((IData)(vlTOPp->EN_input_function)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3)
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4)
                                                       ? 4U
                                                       : 
                                                      ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5)
                                                        ? 3U
                                                        : 
                                                       ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6)
                                                         ? 2U
                                                         : 0U))))));
    vlTOPp->mkAscon_engine__DOT__counter_D_IN = ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
                                                  ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_1)
                                                  : 
                                                 ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
                                                   ? (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh22665)
                                                   : 
                                                  ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state)
                                                    ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_1)
                                                    : 
                                                   ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                                                     ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4)
                                                     : 
                                                    ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)
                                                      ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5)
                                                      : 0U)))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh20627 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20629 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20630);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20515 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20517 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4439 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4441 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4327 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4329 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14489 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20439 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138);
    vlTOPp->mkAscon_engine__DOT__y___05Fh14354 = (vlTOPp->mkAscon_engine__DOT__rg_state_1 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138);
    vlTOPp->mkAscon_engine__DOT__y___05Fh14231 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh14362 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20437 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20439 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251);
    vlTOPp->mkAscon_engine__DOT__y___05Fh20302 = (vlTOPp->mkAscon_engine__DOT__rg_state_1 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251);
    vlTOPp->mkAscon_engine__DOT__y___05Fh20179 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh20310 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4247 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4249 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4112 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__y___05Fh3989 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4120 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21813 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20627 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20513 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20515 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14565 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20515 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4437 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4439 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh3985);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4325 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4327 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d183 
        = (~ (vlTOPp->mkAscon_engine__DOT__x___05Fh14489 
              ^ vlTOPp->mkAscon_engine__DOT__rg_state_1));
    vlTOPp->mkAscon_engine__DOT__x___05Fh14228 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20178 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh14231);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14359 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh14362);
    vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d269 
        = (~ (vlTOPp->mkAscon_engine__DOT__x___05Fh20437 
              ^ vlTOPp->mkAscon_engine__DOT__rg_state_1));
    vlTOPp->mkAscon_engine__DOT__x___05Fh20176 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20178 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20179);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20307 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20310);
    vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d77 
        = (~ (vlTOPp->mkAscon_engine__DOT__x___05Fh4247 
              ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15));
    vlTOPp->mkAscon_engine__DOT__x___05Fh3986 = (vlTOPp->mkAscon_engine__DOT__x___05Fh3988 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh3989);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4117 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4120);
    vlTOPp->mkAscon_engine__DOT__y___05Fh21812 = ((0xffffffffff800000ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__x___05Fh21813 
                                                      << 0x17U)) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__x___05Fh21813 
                                                                                >> 0x29U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh21814 = (((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh21813)))) 
                                                   << 0x39U) 
                                                  | (0x1ffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__x___05Fh21813 
                                                        >> 7U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh20511 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20513 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14563 = (vlTOPp->mkAscon_engine__DOT__x___05Fh14565 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d109 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4437 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4323 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4325 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__y___05Fh15382 = (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d183)))) 
                                                   << 0x3aU) 
                                                  | (0x3ffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d183 
                                                        >> 6U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh15384 = (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d183)))) 
                                                   << 0x3fU) 
                                                  | (0x7fffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d183 
                                                        >> 1U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh14226 = (vlTOPp->mkAscon_engine__DOT__x___05Fh14228 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14357 = (vlTOPp->mkAscon_engine__DOT__x___05Fh14359 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__y___05Fh21330 = (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d269)))) 
                                                   << 0x3aU) 
                                                  | (0x3ffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d269 
                                                        >> 6U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh21332 = (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d269)))) 
                                                   << 0x3fU) 
                                                  | (0x7fffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d269 
                                                        >> 1U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh20174 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20176 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20305 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20307 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__y___05Fh5140 = (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d77)))) 
                                                  << 0x3aU) 
                                                 | (0x3ffffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d77 
                                                       >> 6U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh5142 = (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d77)))) 
                                                  << 0x3fU) 
                                                 | (0x7fffffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d77 
                                                       >> 1U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh3984 = (vlTOPp->mkAscon_engine__DOT__x___05Fh3986 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4115 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4117 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21811 = (vlTOPp->mkAscon_engine__DOT__x___05Fh21813 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21814);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d272 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh20511 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d200 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh14563 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__y___05Fh5622 = ((0xffffffffff800000ULL 
                                                  & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d109 
                                                     << 0x17U)) 
                                                 | (QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & (IData)(
                                                                              (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d109 
                                                                               >> 0x29U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh5624 = (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d109)))) 
                                                  << 0x39U) 
                                                 | (0x1ffffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d109 
                                                       >> 7U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4321 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4323 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh15381 = (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d183 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh15384);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14224 = (vlTOPp->mkAscon_engine__DOT__x___05Fh14226 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20630);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14355 = (vlTOPp->mkAscon_engine__DOT__x___05Fh14357 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20306);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21329 = (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d269 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21332);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20172 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20174 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20630);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20303 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20305 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20306);
    vlTOPp->mkAscon_engine__DOT__x___05Fh5139 = (vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d77 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5142);
    vlTOPp->mkAscon_engine__DOT__x___05Fh3982 = (vlTOPp->mkAscon_engine__DOT__x___05Fh3984 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh3985);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4113 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4115 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4116);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d221 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh21811 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21812);
    vlTOPp->mkAscon_engine__DOT__y___05Fh21571 = (((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d272)))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d272 
                                                        >> 0x11U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh21573 = (((QData)((IData)(
                                                                   (0x3ffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d272)))) 
                                                   << 0x36U) 
                                                  | (0x3fffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d272 
                                                        >> 0xaU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh15623 = (((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d200)))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d200 
                                                        >> 0x11U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh15625 = (((QData)((IData)(
                                                                   (0x3ffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d200)))) 
                                                   << 0x36U) 
                                                  | (0x3fffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d200 
                                                        >> 0xaU)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh5621 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d109 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5624);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d95 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4321 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d191 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh15381 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh15382);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14222 = (vlTOPp->mkAscon_engine__DOT__x___05Fh14224 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14353 = (vlTOPp->mkAscon_engine__DOT__x___05Fh14355 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_4 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh21329 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21330);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20170 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20172 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20301 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20303 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251);
    vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d85 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5139 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5140);
    vlTOPp->mkAscon_engine__DOT__x___05Fh3980 = (vlTOPp->mkAscon_engine__DOT__x___05Fh3982 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4111 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4113 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2 
        = ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? vlTOPp->mkAscon_engine__DOT__rg_state_4
            : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d221);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21570 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d272 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21573);
    vlTOPp->mkAscon_engine__DOT__x___05Fh15622 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d200 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh15625);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d117 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5621 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5622);
    vlTOPp->mkAscon_engine__DOT__y___05Fh5381 = (((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d95)))) 
                                                  << 0x2fU) 
                                                 | (0x7fffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d95 
                                                       >> 0x11U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh5383 = (((QData)((IData)(
                                                                  (0x3ffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d95)))) 
                                                  << 0x36U) 
                                                 | (0x3fffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d95 
                                                       >> 0xaU)));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2 
        = ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? vlTOPp->mkAscon_engine__DOT__rg_state_2
            : vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d191);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d145 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh14222 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14351 = (vlTOPp->mkAscon_engine__DOT__x___05Fh14353 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh14354);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d257 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh20170 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20299 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20301 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20302);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d85
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[5U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[4U]))));
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh3980 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4109 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4111 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4112);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_4 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh21570 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21571);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d208 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh15622 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh15623);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d117
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[0U]))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh5380 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d95 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5383);
    vlTOPp->mkAscon_engine__DOT__y___05Fh14900 = (((QData)((IData)(
                                                                   (0xfffffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d145)))) 
                                                   << 0x24U) 
                                                  | (0xfffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d145 
                                                        >> 0x1cU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh14902 = (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d145)))) 
                                                   << 0x2dU) 
                                                  | (0x1fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d145 
                                                        >> 0x13U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh14349 = (vlTOPp->mkAscon_engine__DOT__x___05Fh14351 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh20848 = (((QData)((IData)(
                                                                   (0xfffffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d257)))) 
                                                   << 0x24U) 
                                                  | (0xfffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d257 
                                                        >> 0x1cU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh20850 = (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d257)))) 
                                                   << 0x2dU) 
                                                  | (0x1fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d257 
                                                        >> 0x13U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh20297 = (vlTOPp->mkAscon_engine__DOT__x___05Fh20299 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__rg_state_2_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3)
          ? vlTOPp->mkAscon_engine__DOT__rg_state_2
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2
              : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_1)
                  ? vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d191
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
                      ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_4
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_5
                          : 0ULL)))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh4658 = (((QData)((IData)(
                                                                  (0xfffffffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37)))) 
                                                  << 0x24U) 
                                                 | (0xfffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
                                                       >> 0x1cU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh4660 = (((QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37)))) 
                                                  << 0x2dU) 
                                                 | (0x1fffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
                                                       >> 0x13U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4107 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4109 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_2 
        = ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? vlTOPp->mkAscon_engine__DOT__rg_state_3
            : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d208);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3)
          ? vlTOPp->mkAscon_engine__DOT__rg_state_4
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2
              : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_1)
                  ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d221
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
                      ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d221
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_5
                          : 0ULL)))));
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d103 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5380 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5381);
    vlTOPp->mkAscon_engine__DOT__x___05Fh14899 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d145 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh14902);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d167 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh14349 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20847 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d257 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20850);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d266 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh20297 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4657 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4660);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d62 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4107 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d103
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[2U]))));
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d153 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh14899 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh14900);
    vlTOPp->mkAscon_engine__DOT__y___05Fh15141 = ((0xfffffffffe000000ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d167 
                                                      << 0x19U)) 
                                                  | (QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d167 
                                                                                >> 0x27U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh15143 = ((0xfffffffffffffff8ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d167 
                                                      << 3U)) 
                                                  | (QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d167 
                                                                                >> 0x3dU))))));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_2 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh20847 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20848);
    vlTOPp->mkAscon_engine__DOT__y___05Fh21089 = ((0xfffffffffe000000ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d266 
                                                      << 0x19U)) 
                                                  | (QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d266 
                                                                                >> 0x27U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh21091 = ((0xfffffffffffffff8ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d266 
                                                      << 3U)) 
                                                  | (QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d266 
                                                                                >> 0x3dU))))));
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4657 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4658);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4899 = ((0xfffffffffe000000ULL 
                                                  & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d62 
                                                     << 0x19U)) 
                                                 | (QData)((IData)(
                                                                   (0x1ffffffU 
                                                                    & (IData)(
                                                                              (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d62 
                                                                               >> 0x27U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh4901 = ((0xfffffffffffffff8ULL 
                                                  & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d62 
                                                     << 3U)) 
                                                 | (QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d62 
                                                                               >> 0x3dU))))));
    vlTOPp->mkAscon_engine__DOT__rg_state_3_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3)
          ? vlTOPp->mkAscon_engine__DOT__rg_state_3
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_2
              : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_1)
                  ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d208
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
                      ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_4
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_5
                          : 0ULL)))));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)
            ? vlTOPp->mkAscon_engine__DOT__x___05Fh10893
            : ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
                ? vlTOPp->mkAscon_engine__DOT__din___05Fh12423
                : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d153));
    vlTOPp->mkAscon_engine__DOT__x___05Fh15140 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d167 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh15143);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21088 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d266 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21091);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[9U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[8U]))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4898 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d62 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4901);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d175 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh15140 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh15141);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_2 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh21088 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21089);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_1)
          ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d153
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_2
              : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                  ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)
                      ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_4
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5
                          : 0ULL)))));
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d70 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4898 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4899);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)
            ? vlTOPp->mkAscon_engine__DOT__x___05Fh10982
            : ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
                ? vlTOPp->mkAscon_engine__DOT__rg_state_1
                : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d175));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d70
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[7U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[6U]))));
    vlTOPp->mkAscon_engine__DOT__rg_state_1_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_1)
          ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d175
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_2
              : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                  ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)
                      ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_4
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5
                          : 0ULL)))));
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RST_N = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, input_function_plaintext);
    VL_RAND_RESET_W(128, input_function_associated_data);
    VL_RAND_RESET_W(128, input_function_key);
    VL_RAND_RESET_W(128, input_function_nonce);
    EN_input_function = VL_RAND_RESET_I(1);
    RDY_input_function = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, ciphertext);
    RDY_ciphertext = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tag);
    RDY_tag = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CLK = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__RST_N = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__input_function_plaintext);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__input_function_associated_data);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__input_function_key);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__input_function_nonce);
    mkAscon_engine__DOT__EN_input_function = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__RDY_input_function = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__ciphertext);
    mkAscon_engine__DOT__RDY_ciphertext = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__tag);
    mkAscon_engine__DOT__RDY_tag = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__counter = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__counter_D_IN = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__counter_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__fsm_state = VL_RAND_RESET_I(3);
    mkAscon_engine__DOT__fsm_state_D_IN = VL_RAND_RESET_I(3);
    mkAscon_engine__DOT__fsm_state_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__iv_constant = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__iv_constant_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__iv_constant_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_ciphertext = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_ciphertext_D_IN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_ciphertext_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_tag = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_tag_D_IN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_tag_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__req_associated_data = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__req_associated_data_D_IN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__req_associated_data_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_encrypted_data_0 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_encrypted_data_0_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_encrypted_data_0_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_encrypted_data_1 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_encrypted_data_1_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_encrypted_data_1_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_encryption_tag_0 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_encryption_tag_0_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_encryption_tag_0_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_encryption_tag_1 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_encryption_tag_1_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_encryption_tag_1_EN = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__rg_interface_0);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__rg_interface_0_D_IN);
    mkAscon_engine__DOT__rg_interface_0_EN = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__rg_interface_1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__rg_interface_1_D_IN);
    mkAscon_engine__DOT__rg_interface_1_EN = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__rg_interface_2);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__rg_interface_2_D_IN);
    mkAscon_engine__DOT__rg_interface_2_EN = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__rg_interface_3);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__rg_interface_3_D_IN);
    mkAscon_engine__DOT__rg_interface_3_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_state_0 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_0_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_0_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_state_1 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_1_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_1_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_state_2 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_2_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_2_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_state_3 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_3_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_3_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_state_4 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_associated_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_encryption_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_finalization_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_intialization_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_permutate_associated_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_input_function = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_input_function = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_2 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_4 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_2 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_4 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_4 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_5 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_2 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_4 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_5 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_5 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_1 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__y___05Fh13356 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh19304 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__intialization_output___05Fh6775);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__packed_associated_data___05Fh11523);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__padded_key___05Fh6735);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__padded_key_state___05Fh16617);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__pre_finalized_state___05Fh17084);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_6_XOR_rg_inte_ETC___05F_d235);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d23 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d103 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d109 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d117 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d62 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d70 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d95 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d77 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d85 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d183 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d191 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d269 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__din___05Fh12423 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__encryption0___05Fh16813 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__encryption1___05Fh16814 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d200 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d208 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d272 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d145 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d153 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d221 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d257 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d167 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d175 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d266 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh10893 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh10982 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14222 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14224 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14226 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14228 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14349 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14351 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14353 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14355 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14357 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14359 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14489 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14563 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14565 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh14899 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh15140 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh15381 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh15622 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20170 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20172 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20174 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20176 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20178 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20297 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20299 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20301 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20303 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20305 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20307 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20437 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20439 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20441 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20511 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20513 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20515 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20517 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20519 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20521 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20627 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20629 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20631 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20633 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20847 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21088 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21329 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21570 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21811 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21813 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh3980 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh3982 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh3984 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh3986 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh3988 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh3990 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4107 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4109 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4111 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4113 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4115 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4117 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4247 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4249 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4251 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4321 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4323 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4325 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4327 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4329 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4331 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4437 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4439 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4441 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4657 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4898 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5139 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5380 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5621 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh14231 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh14354 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh14362 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh14900 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh14902 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh15141 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh15143 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh15382 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh15384 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh15623 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh15625 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20179 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20302 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20306 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20310 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20522 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20630 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20848 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20850 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21089 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21091 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21330 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21332 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21571 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21573 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21812 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21814 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh3985 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh3989 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4112 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4116 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4120 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4332 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4658 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4660 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4899 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4901 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5140 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5142 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5381 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5383 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5622 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5624 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh13372 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__x___05Fh19320 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__x___05Fh22665 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__counter_ULT_12___05F_d4 = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[0] = 0x4bULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[1] = 0x5aULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[2] = 0x69ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[3] = 0x78ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[4] = 0x87ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[5] = 0x96ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[6] = 0xa5ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[7] = 0xb4ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[8] = 0xc3ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[9] = 0xd2ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[10] = 0xe1ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[11] = 0xf0ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[12] = 0ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[13] = 0ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[14] = 0ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh19304[15] = 0ULL;
    __Vtableidx2 = 0;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[0] = 0x4bULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[1] = 0x5aULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[2] = 0x69ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[3] = 0x78ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[4] = 0x87ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[5] = 0x96ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[6] = 0xa5ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[7] = 0xb4ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[8] = 0xc3ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[9] = 0xd2ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[10] = 0xe1ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[11] = 0xf0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[12] = 0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[13] = 0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[14] = 0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh13356[15] = 0ULL;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
