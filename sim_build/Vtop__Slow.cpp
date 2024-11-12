// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*2:0*/ Vtop::__Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[128];
QData/*63:0*/ Vtop::__Vtable2_mkAscon_engine__DOT__y___05Fh23211[16];
QData/*63:0*/ Vtop::__Vtable3_mkAscon_engine__DOT__y___05Fh18100[16];

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
    vlTOPp->mkAscon_engine__DOT__iv_constant_D_IN = 0ULL;
    vlTOPp->mkAscon_engine__DOT__iv_constant_EN = 0U;
    vlTOPp->mkAscon_engine__DOT__ready_ciphertext_D_IN = 1U;
    vlTOPp->mkAscon_engine__DOT__ready_tag_D_IN = 1U;
    vlTOPp->mkAscon_engine__DOT__req_associated_data_D_IN = 0U;
    vlTOPp->RDY_input_function = vlTOPp->mkAscon_engine__DOT__RDY_input_function;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp2[8];
    WData/*319:0*/ __Vtemp4[10];
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
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_permutate_encrypted_data_state 
        = (6U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_associated_data_state 
        = (2U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_encryption_state 
        = (4U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_permutate_associated_data_state 
        = (3U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_finalization_state 
        = (7U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    VL_EXTEND_WW(256,128, __Vtemp2, vlTOPp->mkAscon_engine__DOT__rg_interface_0);
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[0U] = 0U;
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[1U] = 0U;
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[2U] 
        = __Vtemp2[0U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[3U] 
        = __Vtemp2[1U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[4U] 
        = __Vtemp2[2U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[5U] 
        = __Vtemp2[3U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[6U] 
        = __Vtemp2[4U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[7U] 
        = __Vtemp2[5U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[8U] 
        = __Vtemp2[6U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[9U] 
        = __Vtemp2[7U];
    VL_EXTEND_WW(320,128, __Vtemp4, vlTOPp->mkAscon_engine__DOT__rg_interface_0);
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[0U] 
        = __Vtemp4[0U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[1U] 
        = __Vtemp4[1U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[2U] 
        = __Vtemp4[2U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[3U] 
        = __Vtemp4[3U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[4U] 
        = __Vtemp4[4U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[5U] 
        = __Vtemp4[5U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[6U] 
        = __Vtemp4[6U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[7U] 
        = __Vtemp4[7U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[8U] 
        = __Vtemp4[8U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[9U] 
        = __Vtemp4[9U];
    vlTOPp->mkAscon_engine__DOT__ciphertext[0U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0);
    vlTOPp->mkAscon_engine__DOT__ciphertext[1U] = (IData)(
                                                          (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0 
                                                           >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__ciphertext[2U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1);
    vlTOPp->mkAscon_engine__DOT__ciphertext[3U] = (IData)(
                                                          (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1 
                                                           >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1_D_IN 
        = vlTOPp->mkAscon_engine__DOT__rg_state_0;
    vlTOPp->mkAscon_engine__DOT__encryption0___05Fh16082 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[2U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh15826 = ((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkAscon_engine__DOT__rg_interface_1[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkAscon_engine__DOT__rg_interface_1[0U]))) 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__din___05Fh10413 = 
        (((QData)((IData)((1U & (~ (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_0 
                                            >> 0x3fU)))))) 
          << 0x3fU) | (0x7fffffffffffffffULL & vlTOPp->mkAscon_engine__DOT__rg_state_0));
    vlTOPp->mkAscon_engine__DOT__x___05Fh7099 = ((((QData)((IData)(
                                                                   vlTOPp->mkAscon_engine__DOT__rg_interface_2[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mkAscon_engine__DOT__rg_interface_2[2U]))) 
                                                 ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0_D_IN 
        = vlTOPp->mkAscon_engine__DOT__rg_state_1;
    vlTOPp->mkAscon_engine__DOT__encryption1___05Fh16083 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[1U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[0U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh16020 = ((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkAscon_engine__DOT__rg_interface_1[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkAscon_engine__DOT__rg_interface_1[2U]))) 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh11626 = ((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkAscon_engine__DOT__rg_interface_2[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkAscon_engine__DOT__rg_interface_2[0U]))) 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh24537 = (vlTOPp->mkAscon_engine__DOT__rg_state_1 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__encryption_tag1___05Fh26647 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[1U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[0U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_4 
        = ((0xfffffffffffffffeULL & vlTOPp->mkAscon_engine__DOT__rg_state_4) 
           | (QData)((IData)((1U & (~ (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4))))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh24428 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24540 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__encryption_tag0___05Fh26646 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[2U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24348 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__y___05Fh24213 = (vlTOPp->mkAscon_engine__DOT__rg_state_3 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh24429 = (vlTOPp->mkAscon_engine__DOT__rg_state_3 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[0U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[1U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_4 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[2U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[3U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_3 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[4U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_2);
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[5U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_2 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[6U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[7U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_1 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[8U] 
        = (IData)((((QData)((IData)((1U & (~ (IData)(
                                                     (vlTOPp->mkAscon_engine__DOT__rg_state_0 
                                                      >> 0x3fU)))))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & vlTOPp->mkAscon_engine__DOT__rg_state_0)));
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[9U] 
        = (IData)(((((QData)((IData)((1U & (~ (IData)(
                                                      (vlTOPp->mkAscon_engine__DOT__rg_state_0 
                                                       >> 0x3fU)))))) 
                     << 0x3fU) | (0x7fffffffffffffffULL 
                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0)) 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[0U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[1U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_4 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[2U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[3U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_3 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[4U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_2);
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[5U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_2 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[6U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[7U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_1 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[8U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[9U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_0 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__x___05Fh26558 = (0xfU 
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
    vlTOPp->mkAscon_engine__DOT__x___05Fh23227 = (0xfU 
                                                  & ((IData)(0xbU) 
                                                     - (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh18116 = (0xfU 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->RDY_ciphertext = vlTOPp->mkAscon_engine__DOT__RDY_ciphertext;
    vlTOPp->RDY_tag = vlTOPp->mkAscon_engine__DOT__RDY_tag;
    vlTOPp->tag[0U] = vlTOPp->mkAscon_engine__DOT__tag[0U];
    vlTOPp->tag[1U] = vlTOPp->mkAscon_engine__DOT__tag[1U];
    vlTOPp->tag[2U] = vlTOPp->mkAscon_engine__DOT__tag[2U];
    vlTOPp->tag[3U] = vlTOPp->mkAscon_engine__DOT__tag[3U];
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_intialization_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_permutate_encrypted_data_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_associated_data_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_encryption_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_permutate_associated_data_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_finalization_state;
    vlTOPp->ciphertext[0U] = vlTOPp->mkAscon_engine__DOT__ciphertext[0U];
    vlTOPp->ciphertext[1U] = vlTOPp->mkAscon_engine__DOT__ciphertext[1U];
    vlTOPp->ciphertext[2U] = vlTOPp->mkAscon_engine__DOT__ciphertext[2U];
    vlTOPp->ciphertext[3U] = vlTOPp->mkAscon_engine__DOT__ciphertext[3U];
    if ((0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5 
            = vlTOPp->mkAscon_engine__DOT__x___05Fh15826;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5 
            = vlTOPp->mkAscon_engine__DOT__x___05Fh16020;
    } else {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5 
            = vlTOPp->mkAscon_engine__DOT__rg_state_0;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5 
            = vlTOPp->mkAscon_engine__DOT__rg_state_1;
    }
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0_D_IN 
        = vlTOPp->mkAscon_engine__DOT__encryption_tag1___05Fh26647;
    vlTOPp->mkAscon_engine__DOT__x___05Fh24538 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24540 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24085 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24540 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1_D_IN 
        = vlTOPp->mkAscon_engine__DOT__encryption_tag0___05Fh26646;
    vlTOPp->mkAscon_engine__DOT__x___05Fh24346 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24348 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24426 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24428 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24429);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[0U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[0U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[0U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[1U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[1U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[1U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[2U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[2U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[2U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[3U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[3U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[3U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[4U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[4U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[4U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[5U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[5U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[5U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[6U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[6U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[6U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[7U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[7U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[7U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[8U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[8U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[8U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[9U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[9U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007[9U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[0U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[0U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[0U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[1U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[1U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[1U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[2U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[2U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[2U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[3U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[3U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[3U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[4U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[4U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[4U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[5U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[5U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[5U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[6U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[6U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[6U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[7U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[7U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[7U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[8U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[8U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[8U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[9U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335[9U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[9U]);
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_2 
        = ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? 0U : (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh26558));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5 
        = ((0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh26558)
            : 0U);
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh26558)
            : 0U);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4179 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4525 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4184 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4445 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4310 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4526 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->__Vtableidx2 = vlTOPp->mkAscon_engine__DOT__x___05Fh23227;
    vlTOPp->mkAscon_engine__DOT__y___05Fh23211 = vlTOPp->__Vtable2_mkAscon_engine__DOT__y___05Fh23211
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx3 = vlTOPp->mkAscon_engine__DOT__x___05Fh18116;
    vlTOPp->mkAscon_engine__DOT__y___05Fh18100 = vlTOPp->__Vtable3_mkAscon_engine__DOT__y___05Fh18100
        [vlTOPp->__Vtableidx3];
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_7 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
           & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__req_associated_data_EN 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
           & (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6 
        = (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
            & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
           & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
           & (0U != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
           | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
           & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
           & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__counter_EN = (((((
                                                   ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                   | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                      & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state)) 
                                                 | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state)) 
                                                | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                               | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_0_EN = ((
                                                   (((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                       & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                      | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                         & (8U 
                                                            != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                     | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                    | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_1_EN = ((
                                                   (((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                       & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                      | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                         & (8U 
                                                            != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                     | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                    | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_2_EN = ((
                                                   (((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                       & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                      | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                        & (8U 
                                                           != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                    | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                                                       & (0U 
                                                          != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_3_EN = ((
                                                   (((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                       & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                      | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                        & (8U 
                                                           != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                    | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                                                       & (0U 
                                                          != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_4_EN = ((
                                                   (((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                       & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                      | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                        & (8U 
                                                           != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                    | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                                                       & (0U 
                                                          != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state));
    vlTOPp->mkAscon_engine__DOT__fsm_state_EN = (((
                                                   (((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                       & (8U 
                                                          == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) 
                                                      | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
                                                         & (8U 
                                                            == (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                                                        & (0U 
                                                           != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                    | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                       & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) 
                                                   | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                                                      & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) 
                                                  | (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                      & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                                                     & (8U 
                                                        == (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                 | (IData)(vlTOPp->EN_input_function));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
           & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4));
    vlTOPp->mkAscon_engine__DOT__x___05Fh24536 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24538 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24424 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24426 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4635 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4184 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4182 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4184 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4443 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4445 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4523 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4525 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4526);
    vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260 
        = (vlTOPp->mkAscon_engine__DOT__rg_state_2 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh23211);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 
        = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d23 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh23211);
    vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136 
        = (vlTOPp->mkAscon_engine__DOT__rg_state_2 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh18100);
    vlTOPp->mkAscon_engine__DOT__ready_ciphertext_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4;
    vlTOPp->mkAscon_engine__DOT__ready_tag_EN = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2;
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2;
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2;
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_7) 
                             << 6U) | (((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6) 
                                        << 5U) | (((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5) 
                                                   << 4U) 
                                                  | (((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4) 
                                                      << 3U) 
                                                     | (((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3) 
                                                         << 2U) 
                                                        | (((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2) 
                                                            << 1U) 
                                                           | (IData)(vlTOPp->EN_input_function)))))));
    vlTOPp->mkAscon_engine__DOT__fsm_state_D_IN = vlTOPp->__Vtable1_mkAscon_engine__DOT__fsm_state_D_IN
        [vlTOPp->__Vtableidx1];
    vlTOPp->mkAscon_engine__DOT__counter_D_IN = ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
                                                  ? (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh26558)
                                                  : 
                                                 ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
                                                   ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_2)
                                                   : 
                                                  ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_3)
                                                    ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_2)
                                                    : 
                                                   ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                                                     ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4)
                                                     : 
                                                    ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)
                                                      ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5)
                                                      : 0U)))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh24534 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24536 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24537);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24422 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24424 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4633 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4635 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4521 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4523 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24344 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24346 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260);
    vlTOPp->mkAscon_engine__DOT__y___05Fh24209 = (vlTOPp->mkAscon_engine__DOT__rg_state_1 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260);
    vlTOPp->mkAscon_engine__DOT__y___05Fh24086 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh24217 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4441 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4443 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4306 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4183 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4314 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__x___05Fh19233 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24346 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136);
    vlTOPp->mkAscon_engine__DOT__y___05Fh19098 = (vlTOPp->mkAscon_engine__DOT__rg_state_1 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136);
    vlTOPp->mkAscon_engine__DOT__y___05Fh18975 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh19106 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh25720 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24534 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24420 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24422 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260);
    vlTOPp->mkAscon_engine__DOT__x___05Fh19309 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24422 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4631 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4633 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4179);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4519 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4521 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d278 
        = (~ (vlTOPp->mkAscon_engine__DOT__x___05Fh24344 
              ^ vlTOPp->mkAscon_engine__DOT__rg_state_1));
    vlTOPp->mkAscon_engine__DOT__x___05Fh24083 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24085 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24086);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24214 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24217);
    vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76 
        = (~ (vlTOPp->mkAscon_engine__DOT__x___05Fh4441 
              ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4180 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4182 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4183);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4311 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4314);
    vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181 
        = (~ (vlTOPp->mkAscon_engine__DOT__x___05Fh19233 
              ^ vlTOPp->mkAscon_engine__DOT__rg_state_1));
    vlTOPp->mkAscon_engine__DOT__x___05Fh18972 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24085 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh18975);
    vlTOPp->mkAscon_engine__DOT__x___05Fh19103 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh19106);
    vlTOPp->mkAscon_engine__DOT__y___05Fh25719 = ((0xffffffffff800000ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__x___05Fh25720 
                                                      << 0x17U)) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__x___05Fh25720 
                                                                                >> 0x29U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh25721 = (((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh25720)))) 
                                                   << 0x39U) 
                                                  | (0x1ffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__x___05Fh25720 
                                                        >> 7U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh24418 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24420 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh19307 = (vlTOPp->mkAscon_engine__DOT__x___05Fh19309 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4631 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4517 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4519 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__y___05Fh25237 = (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d278)))) 
                                                   << 0x3aU) 
                                                  | (0x3ffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d278 
                                                        >> 6U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh25239 = (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d278)))) 
                                                   << 0x3fU) 
                                                  | (0x7fffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d278 
                                                        >> 1U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh24081 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24083 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24212 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24214 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__y___05Fh5334 = (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76)))) 
                                                  << 0x3aU) 
                                                 | (0x3ffffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76 
                                                       >> 6U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh5336 = (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76)))) 
                                                  << 0x3fU) 
                                                 | (0x7fffffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76 
                                                       >> 1U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4178 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4180 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4309 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4311 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__y___05Fh20126 = (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181)))) 
                                                   << 0x3aU) 
                                                  | (0x3ffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181 
                                                        >> 6U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh20128 = (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181)))) 
                                                   << 0x3fU) 
                                                  | (0x7fffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181 
                                                        >> 1U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh18970 = (vlTOPp->mkAscon_engine__DOT__x___05Fh18972 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136);
    vlTOPp->mkAscon_engine__DOT__x___05Fh19101 = (vlTOPp->mkAscon_engine__DOT__x___05Fh19103 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh25718 = (vlTOPp->mkAscon_engine__DOT__x___05Fh25720 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh25721);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d281 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh24418 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh19307 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__y___05Fh5816 = ((0xffffffffff800000ULL 
                                                  & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 
                                                     << 0x17U)) 
                                                 | (QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & (IData)(
                                                                              (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 
                                                                               >> 0x29U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh5818 = (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108)))) 
                                                  << 0x39U) 
                                                 | (0x1ffffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 
                                                       >> 7U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4515 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4517 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh25236 = (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d278 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh25239);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24079 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24081 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24537);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24210 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24212 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24213);
    vlTOPp->mkAscon_engine__DOT__x___05Fh5333 = (vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5336);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4176 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4178 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4179);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4307 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4309 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4310);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20125 = (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20128);
    vlTOPp->mkAscon_engine__DOT__x___05Fh18968 = (vlTOPp->mkAscon_engine__DOT__x___05Fh18970 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24537);
    vlTOPp->mkAscon_engine__DOT__x___05Fh19099 = (vlTOPp->mkAscon_engine__DOT__x___05Fh19101 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24213);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh25718 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh25719);
    vlTOPp->mkAscon_engine__DOT__y___05Fh25478 = (((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d281)))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d281 
                                                        >> 0x11U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh25480 = (((QData)((IData)(
                                                                   (0x3ffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d281)))) 
                                                   << 0x36U) 
                                                  | (0x3fffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d281 
                                                        >> 0xaU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh20367 = (((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198)))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198 
                                                        >> 0x11U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh20369 = (((QData)((IData)(
                                                                   (0x3ffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198)))) 
                                                   << 0x36U) 
                                                  | (0x3fffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198 
                                                        >> 0xaU)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh5815 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5818);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4515 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_1 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh25236 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh25237);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24077 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24079 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24208 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24210 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260);
    vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d84 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5333 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5334);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4174 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4176 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4305 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4307 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh20125 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20126);
    vlTOPp->mkAscon_engine__DOT__x___05Fh18966 = (vlTOPp->mkAscon_engine__DOT__x___05Fh18968 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh19097 = (vlTOPp->mkAscon_engine__DOT__x___05Fh19099 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136);
    if ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__rg_state_4;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_6 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[0U])));
    } else {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_6 
            = vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219;
    }
    vlTOPp->mkAscon_engine__DOT__x___05Fh25477 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d281 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh25480);
    vlTOPp->mkAscon_engine__DOT__x___05Fh20366 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20369);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d116 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5815 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5816);
    vlTOPp->mkAscon_engine__DOT__y___05Fh5575 = (((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94)))) 
                                                  << 0x2fU) 
                                                 | (0x7fffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94 
                                                       >> 0x11U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh5577 = (((QData)((IData)(
                                                                  (0x3ffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94)))) 
                                                  << 0x36U) 
                                                 | (0x3fffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94 
                                                       >> 0xaU)));
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d266 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh24077 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24206 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24208 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24209);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d84
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[5U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[4U]))));
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4174 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4303 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4305 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4306);
    if ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__rg_state_2;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_6 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[5U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[4U])));
    } else {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_6 
            = vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189;
    }
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh18966 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh19095 = (vlTOPp->mkAscon_engine__DOT__x___05Fh19097 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh19098);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_1 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh25477 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh25478);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh20366 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20367);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d116
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[0U]))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh5574 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5577);
    vlTOPp->mkAscon_engine__DOT__y___05Fh24755 = (((QData)((IData)(
                                                                   (0xfffffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d266)))) 
                                                   << 0x24U) 
                                                  | (0xfffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d266 
                                                        >> 0x1cU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh24757 = (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d266)))) 
                                                   << 0x2dU) 
                                                  | (0x1fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d266 
                                                        >> 0x13U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh24204 = (vlTOPp->mkAscon_engine__DOT__x___05Fh24206 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4852 = (((QData)((IData)(
                                                                  (0xfffffffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37)))) 
                                                  << 0x24U) 
                                                 | (0xfffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
                                                       >> 0x1cU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh4854 = (((QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37)))) 
                                                  << 0x2dU) 
                                                 | (0x1fffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
                                                       >> 0x13U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4301 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4303 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__rg_state_2_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_1
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2
              : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2)
                  ? vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4)
                      ? vlTOPp->mkAscon_engine__DOT__rg_state_2
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_5
                          : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state)
                              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_6
                              : 0ULL))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh19644 = (((QData)((IData)(
                                                                   (0xfffffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143)))) 
                                                   << 0x24U) 
                                                  | (0xfffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143 
                                                        >> 0x1cU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh19646 = (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143)))) 
                                                   << 0x2dU) 
                                                  | (0x1fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143 
                                                        >> 0x13U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh19093 = (vlTOPp->mkAscon_engine__DOT__x___05Fh19095 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    if ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__rg_state_3;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_6 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[2U])));
    } else {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_6 
            = vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206;
    }
    vlTOPp->mkAscon_engine__DOT__rg_state_4_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
          ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2
              : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2)
                  ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4)
                      ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_4
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_5
                          : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state)
                              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_6
                              : 0ULL))))));
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d102 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5574 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5575);
    vlTOPp->mkAscon_engine__DOT__x___05Fh24754 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d266 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24757);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d275 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh24204 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4851 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4854);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4301 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh19643 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh19646);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh19093 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d102
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[2U]))));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_1 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh24754 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24755);
    vlTOPp->mkAscon_engine__DOT__y___05Fh24996 = ((0xfffffffffe000000ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d275 
                                                      << 0x19U)) 
                                                  | (QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d275 
                                                                                >> 0x27U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh24998 = ((0xfffffffffffffff8ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d275 
                                                      << 3U)) 
                                                  | (QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d275 
                                                                                >> 0x3dU))))));
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4851 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4852);
    vlTOPp->mkAscon_engine__DOT__y___05Fh5093 = ((0xfffffffffe000000ULL 
                                                  & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
                                                     << 0x19U)) 
                                                 | (QData)((IData)(
                                                                   (0x1ffffffU 
                                                                    & (IData)(
                                                                              (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
                                                                               >> 0x27U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh5095 = ((0xfffffffffffffff8ULL 
                                                  & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
                                                     << 3U)) 
                                                 | (QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
                                                                               >> 0x3dU))))));
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh19643 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh19644);
    vlTOPp->mkAscon_engine__DOT__y___05Fh19885 = ((0xfffffffffe000000ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 
                                                      << 0x19U)) 
                                                  | (QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 
                                                                                >> 0x27U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh19887 = ((0xfffffffffffffff8ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 
                                                      << 3U)) 
                                                  | (QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 
                                                                                >> 0x3dU))))));
    vlTOPp->mkAscon_engine__DOT__rg_state_3_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_1
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_2
              : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2)
                  ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4)
                      ? vlTOPp->mkAscon_engine__DOT__rg_state_3
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_5
                          : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state)
                              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_6
                              : 0ULL))))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh24995 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d275 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24998);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[9U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[8U]))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh5092 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5095);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_6 
        = ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? (((QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[9U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[8U])))
            : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)
            ? vlTOPp->mkAscon_engine__DOT__x___05Fh7099
            : ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
                ? vlTOPp->mkAscon_engine__DOT__din___05Fh10413
                : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151));
    vlTOPp->mkAscon_engine__DOT__x___05Fh19884 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh19887);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_1 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh24995 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24996);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d69 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5092 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5093);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_1
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2)
              ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151
              : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                  ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)
                      ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_4
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5
                          : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state)
                              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_6
                              : 0ULL))))));
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh19884 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh19885);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d69
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[7U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[6U]))));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_6 
        = ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? (((QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[7U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248[6U])))
            : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)
            ? vlTOPp->mkAscon_engine__DOT__x___05Fh11626
            : ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
                ? vlTOPp->mkAscon_engine__DOT__rg_state_1
                : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173));
    vlTOPp->mkAscon_engine__DOT__rg_state_1_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_1
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2)
              ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173
              : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                  ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)
                      ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_4
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5
                          : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state)
                              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_6
                              : 0ULL))))));
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
    mkAscon_engine__DOT__CAN_FIRE_RL_permutate_encrypted_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_input_function = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_input_function = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_1 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_4 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_6 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_1 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_4 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_6 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_1 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_5 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_6 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_1 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_2 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_5 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_6 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_4 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_5 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_6 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_2 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_3 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_7 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__y___05Fh18100 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh23211 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_44_XOR___05FETC___05F_d248);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__lv_finalized_key___05Fh22041);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__padded_key___05Fh1252);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d23 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d102 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d116 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d69 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d84 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d278 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__din___05Fh10413 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__encryption0___05Fh16082 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__encryption1___05Fh16083 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__encryption_tag0___05Fh26646 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__encryption_tag1___05Fh26647 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d281 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d266 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d275 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh11626 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh15826 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh16020 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh18966 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh18968 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh18970 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh18972 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19093 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19095 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19097 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19099 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19101 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19103 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19233 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19307 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19309 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19643 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh19884 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20125 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20366 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24077 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24079 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24081 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24083 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24085 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24204 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24206 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24208 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24210 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24212 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24214 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24344 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24346 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24348 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24418 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24420 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24422 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24424 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24426 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24428 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24534 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24536 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24538 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24540 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24754 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh24995 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh25236 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh25477 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh25718 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh25720 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4174 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4176 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4178 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4180 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4182 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4184 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4301 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4303 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4305 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4307 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4309 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4311 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4441 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4443 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4445 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4515 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4517 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4519 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4521 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4523 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4525 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4631 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4633 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4635 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4851 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5092 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5333 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5574 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5815 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh7099 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh18975 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh19098 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh19106 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh19644 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh19646 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh19885 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh19887 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20126 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20128 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20367 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh20369 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh24086 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh24209 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh24213 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh24217 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh24429 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh24537 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh24755 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh24757 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh24996 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh24998 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh25237 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh25239 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh25478 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh25480 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh25719 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh25721 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4179 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4183 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4306 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4310 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4314 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4526 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4852 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4854 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5093 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5095 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5334 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5336 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5575 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5577 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5816 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5818 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh18116 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__x___05Fh23227 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__x___05Fh26558 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__counter_ULT_12___05F_d4 = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[0] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[1] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[2] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[3] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[4] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[5] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[6] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[7] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[8] = 6U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[9] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[10] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[11] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[12] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[13] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[14] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[15] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[16] = 4U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[17] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[18] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[19] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[20] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[21] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[22] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[23] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[24] = 6U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[25] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[26] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[27] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[28] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[29] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[30] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[31] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[32] = 3U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[33] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[34] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[35] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[36] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[37] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[38] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[39] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[40] = 6U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[41] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[42] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[43] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[44] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[45] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[46] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[47] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[48] = 4U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[49] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[50] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[51] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[52] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[53] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[54] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[55] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[56] = 6U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[57] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[58] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[59] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[60] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[61] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[62] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[63] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[64] = 2U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[65] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[66] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[67] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[68] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[69] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[70] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[71] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[72] = 6U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[73] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[74] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[75] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[76] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[77] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[78] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[79] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[80] = 4U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[81] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[82] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[83] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[84] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[85] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[86] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[87] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[88] = 6U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[89] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[90] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[91] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[92] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[93] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[94] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[95] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[96] = 3U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[97] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[98] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[99] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[100] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[101] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[102] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[103] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[104] = 6U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[105] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[106] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[107] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[108] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[109] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[110] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[111] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[112] = 4U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[113] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[114] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[115] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[116] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[117] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[118] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[119] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[120] = 6U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[121] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[122] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[123] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[124] = 7U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[125] = 1U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[126] = 0U;
    __Vtable1_mkAscon_engine__DOT__fsm_state_D_IN[127] = 1U;
    __Vtableidx2 = 0;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[0] = 0x4bULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[1] = 0x5aULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[2] = 0x69ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[3] = 0x78ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[4] = 0x87ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[5] = 0x96ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[6] = 0xa5ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[7] = 0xb4ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[8] = 0xc3ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[9] = 0xd2ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[10] = 0xe1ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[11] = 0xf0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[12] = 0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[13] = 0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[14] = 0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh23211[15] = 0ULL;
    __Vtableidx3 = 0;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[0] = 0x4bULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[1] = 0x5aULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[2] = 0x69ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[3] = 0x78ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[4] = 0x87ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[5] = 0x96ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[6] = 0xa5ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[7] = 0xb4ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[8] = 0xc3ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[9] = 0xd2ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[10] = 0xe1ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[11] = 0xf0ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[12] = 0ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[13] = 0ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[14] = 0ULL;
    __Vtable3_mkAscon_engine__DOT__y___05Fh18100[15] = 0ULL;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
