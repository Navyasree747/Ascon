// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========
QData/*63:0*/ Vtop::__Vtable1_mkAscon_engine__DOT__y___05Fh25671[16];
QData/*63:0*/ Vtop::__Vtable2_mkAscon_engine__DOT__y___05Fh20548[16];

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
    vlTOPp->mkAscon_engine__DOT__ready_decrypted_data = 0U;
    vlTOPp->mkAscon_engine__DOT__ready_decrypted_tag = 0U;
    vlTOPp->mkAscon_engine__DOT__ready_tag = 0U;
    vlTOPp->mkAscon_engine__DOT__req_associated_data = 0U;
    vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_0 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_1 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_0 = 0xaaaaaaaaaaaaaaaaULL;
    vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_1 = 0xaaaaaaaaaaaaaaaaULL;
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
    vlTOPp->mkAscon_engine__DOT__select = 0U;
    vlTOPp->mkAscon_engine__DOT__iv_constant_D_IN = 0ULL;
    vlTOPp->mkAscon_engine__DOT__iv_constant_EN = 0U;
    vlTOPp->mkAscon_engine__DOT__ready_ciphertext_D_IN = 1U;
    vlTOPp->mkAscon_engine__DOT__ready_decrypted_data_D_IN = 1U;
    vlTOPp->mkAscon_engine__DOT__ready_decrypted_tag_D_IN = 1U;
    vlTOPp->mkAscon_engine__DOT__ready_tag_D_IN = 1U;
    vlTOPp->mkAscon_engine__DOT__req_associated_data_D_IN = 0U;
    vlTOPp->RDY_input_function = vlTOPp->mkAscon_engine__DOT__RDY_input_function;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp3[8];
    WData/*319:0*/ __Vtemp5[10];
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
    vlTOPp->mkAscon_engine__DOT__input_function_mode 
        = vlTOPp->input_function_mode;
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
    vlTOPp->mkAscon_engine__DOT__select_D_IN = vlTOPp->input_function_mode;
    vlTOPp->mkAscon_engine__DOT__select_EN = vlTOPp->EN_input_function;
    vlTOPp->RDY_input_function = vlTOPp->mkAscon_engine__DOT__RDY_input_function;
    vlTOPp->mkAscon_engine__DOT__RDY_ciphertext = vlTOPp->mkAscon_engine__DOT__ready_ciphertext;
    vlTOPp->mkAscon_engine__DOT__RDY_decrypted_data 
        = vlTOPp->mkAscon_engine__DOT__ready_decrypted_data;
    vlTOPp->mkAscon_engine__DOT__RDY_decrypted_tag 
        = vlTOPp->mkAscon_engine__DOT__ready_decrypted_tag;
    vlTOPp->mkAscon_engine__DOT__RDY_tag = vlTOPp->mkAscon_engine__DOT__ready_tag;
    vlTOPp->mkAscon_engine__DOT__decrypted_tag[0U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_0);
    vlTOPp->mkAscon_engine__DOT__decrypted_tag[1U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_0 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__decrypted_tag[2U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_1);
    vlTOPp->mkAscon_engine__DOT__decrypted_tag[3U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_1 
                   >> 0x20U));
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
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_permutate_encrypt_decrypt_state 
        = (6U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_associated_data_state 
        = (2U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_permutate_associated_data_state 
        = (3U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_finalization_state 
        = (7U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_encryption_state 
        = (4U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_decryption_state 
        = (5U == (IData)(vlTOPp->mkAscon_engine__DOT__fsm_state));
    VL_EXTEND_WW(256,128, __Vtemp3, vlTOPp->mkAscon_engine__DOT__rg_interface_0);
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[0U] = 0U;
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[1U] = 0U;
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[2U] 
        = __Vtemp3[0U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[3U] 
        = __Vtemp3[1U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[4U] 
        = __Vtemp3[2U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[5U] 
        = __Vtemp3[3U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[6U] 
        = __Vtemp3[4U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[7U] 
        = __Vtemp3[5U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[8U] 
        = __Vtemp3[6U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[9U] 
        = __Vtemp3[7U];
    VL_EXTEND_WW(320,128, __Vtemp5, vlTOPp->mkAscon_engine__DOT__rg_interface_0);
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[0U] 
        = __Vtemp5[0U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[1U] 
        = __Vtemp5[1U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[2U] 
        = __Vtemp5[2U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[3U] 
        = __Vtemp5[3U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[4U] 
        = __Vtemp5[4U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[5U] 
        = __Vtemp5[5U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[6U] 
        = __Vtemp5[6U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[7U] 
        = __Vtemp5[7U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[8U] 
        = __Vtemp5[8U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[9U] 
        = __Vtemp5[9U];
    vlTOPp->mkAscon_engine__DOT__decrypted_data[0U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_0);
    vlTOPp->mkAscon_engine__DOT__decrypted_data[1U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_0 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__decrypted_data[2U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_1);
    vlTOPp->mkAscon_engine__DOT__decrypted_data[3U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_1 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__ciphertext[0U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0);
    vlTOPp->mkAscon_engine__DOT__ciphertext[1U] = (IData)(
                                                          (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0 
                                                           >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__ciphertext[2U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1);
    vlTOPp->mkAscon_engine__DOT__ciphertext[3U] = (IData)(
                                                          (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1 
                                                           >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FVAL_6 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__select)
            ? 4U : 5U);
    vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_1_D_IN 
        = vlTOPp->mkAscon_engine__DOT__rg_state_0;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1_D_IN 
        = vlTOPp->mkAscon_engine__DOT__rg_state_0;
    vlTOPp->mkAscon_engine__DOT__encryption0___05Fh16560 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[2U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__din___05Fh10845 = 
        (((QData)((IData)((1U & (~ (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_0 
                                            >> 0x3fU)))))) 
          << 0x3fU) | (0x7fffffffffffffffULL & vlTOPp->mkAscon_engine__DOT__rg_state_0));
    vlTOPp->mkAscon_engine__DOT__x___05Fh7531 = ((((QData)((IData)(
                                                                   vlTOPp->mkAscon_engine__DOT__rg_interface_2[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mkAscon_engine__DOT__rg_interface_2[2U]))) 
                                                 ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_0_D_IN 
        = vlTOPp->mkAscon_engine__DOT__rg_state_1;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0_D_IN 
        = vlTOPp->mkAscon_engine__DOT__rg_state_1;
    vlTOPp->mkAscon_engine__DOT__encryption1___05Fh16561 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[1U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_1[0U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh12058 = ((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkAscon_engine__DOT__rg_interface_2[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkAscon_engine__DOT__rg_interface_2[0U]))) 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh26997 = (vlTOPp->mkAscon_engine__DOT__rg_state_1 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__encryption_tag1___05Fh29253 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[1U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[0U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_4 
        = ((0xfffffffffffffffeULL & vlTOPp->mkAscon_engine__DOT__rg_state_4) 
           | (QData)((IData)((1U & (~ (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4))))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh26888 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh27000 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__encryption_tag0___05Fh29252 
        = ((((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[2U]))) 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26808 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__y___05Fh26673 = (vlTOPp->mkAscon_engine__DOT__rg_state_3 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh26889 = (vlTOPp->mkAscon_engine__DOT__rg_state_3 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[0U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[1U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_4 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[2U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[3U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_3 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[4U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_2);
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[5U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_2 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[6U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[7U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_1 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[8U] 
        = (IData)((((QData)((IData)((1U & (~ (IData)(
                                                     (vlTOPp->mkAscon_engine__DOT__rg_state_0 
                                                      >> 0x3fU)))))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & vlTOPp->mkAscon_engine__DOT__rg_state_0)));
    vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[9U] 
        = (IData)(((((QData)((IData)((1U & (~ (IData)(
                                                      (vlTOPp->mkAscon_engine__DOT__rg_state_0 
                                                       >> 0x3fU)))))) 
                     << 0x3fU) | (0x7fffffffffffffffULL 
                                  & vlTOPp->mkAscon_engine__DOT__rg_state_0)) 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[0U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[1U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_4 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[2U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[3U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_3 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[4U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_2);
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[5U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_2 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[6U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[7U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_1 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[8U] 
        = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[9U] 
        = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_0 
                   >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__x___05Fh29164 = (0xfU 
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
    vlTOPp->mkAscon_engine__DOT__x___05Fh25687 = (0xfU 
                                                  & ((IData)(0xbU) 
                                                     - (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh20564 = (0xfU 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->RDY_ciphertext = vlTOPp->mkAscon_engine__DOT__RDY_ciphertext;
    vlTOPp->RDY_decrypted_data = vlTOPp->mkAscon_engine__DOT__RDY_decrypted_data;
    vlTOPp->RDY_decrypted_tag = vlTOPp->mkAscon_engine__DOT__RDY_decrypted_tag;
    vlTOPp->RDY_tag = vlTOPp->mkAscon_engine__DOT__RDY_tag;
    vlTOPp->decrypted_tag[0U] = vlTOPp->mkAscon_engine__DOT__decrypted_tag[0U];
    vlTOPp->decrypted_tag[1U] = vlTOPp->mkAscon_engine__DOT__decrypted_tag[1U];
    vlTOPp->decrypted_tag[2U] = vlTOPp->mkAscon_engine__DOT__decrypted_tag[2U];
    vlTOPp->decrypted_tag[3U] = vlTOPp->mkAscon_engine__DOT__decrypted_tag[3U];
    vlTOPp->tag[0U] = vlTOPp->mkAscon_engine__DOT__tag[0U];
    vlTOPp->tag[1U] = vlTOPp->mkAscon_engine__DOT__tag[1U];
    vlTOPp->tag[2U] = vlTOPp->mkAscon_engine__DOT__tag[2U];
    vlTOPp->tag[3U] = vlTOPp->mkAscon_engine__DOT__tag[3U];
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_intialization_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_permutate_encrypt_decrypt_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_associated_data_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_permutate_associated_data_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_finalization_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_encryption_state;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state 
        = vlTOPp->mkAscon_engine__DOT__CAN_FIRE_RL_decryption_state;
    vlTOPp->decrypted_data[0U] = vlTOPp->mkAscon_engine__DOT__decrypted_data[0U];
    vlTOPp->decrypted_data[1U] = vlTOPp->mkAscon_engine__DOT__decrypted_data[1U];
    vlTOPp->decrypted_data[2U] = vlTOPp->mkAscon_engine__DOT__decrypted_data[2U];
    vlTOPp->decrypted_data[3U] = vlTOPp->mkAscon_engine__DOT__decrypted_data[3U];
    vlTOPp->ciphertext[0U] = vlTOPp->mkAscon_engine__DOT__ciphertext[0U];
    vlTOPp->ciphertext[1U] = vlTOPp->mkAscon_engine__DOT__ciphertext[1U];
    vlTOPp->ciphertext[2U] = vlTOPp->mkAscon_engine__DOT__ciphertext[2U];
    vlTOPp->ciphertext[3U] = vlTOPp->mkAscon_engine__DOT__ciphertext[3U];
    if ((0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3 
            = vlTOPp->mkAscon_engine__DOT__encryption0___05Fh16560;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3 
            = vlTOPp->mkAscon_engine__DOT__encryption1___05Fh16561;
    } else {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3 
            = vlTOPp->mkAscon_engine__DOT__rg_state_0;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3 
            = vlTOPp->mkAscon_engine__DOT__rg_state_1;
    }
    vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_0_D_IN 
        = vlTOPp->mkAscon_engine__DOT__encryption_tag1___05Fh29253;
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0_D_IN 
        = vlTOPp->mkAscon_engine__DOT__encryption_tag1___05Fh29253;
    vlTOPp->mkAscon_engine__DOT__x___05Fh26998 = (vlTOPp->mkAscon_engine__DOT__x___05Fh27000 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26545 = (vlTOPp->mkAscon_engine__DOT__x___05Fh27000 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_1_D_IN 
        = vlTOPp->mkAscon_engine__DOT__encryption_tag0___05Fh29252;
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1_D_IN 
        = vlTOPp->mkAscon_engine__DOT__encryption_tag0___05Fh29252;
    vlTOPp->mkAscon_engine__DOT__x___05Fh26806 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26808 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26886 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26888 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh26889);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[0U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[0U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[0U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[1U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[1U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[1U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[2U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[2U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[2U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[3U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[3U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[3U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[4U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[4U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[4U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[5U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[5U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[5U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[6U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[6U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[6U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[7U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[7U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[7U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[8U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[8U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[8U]);
    vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[9U] 
        = (vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[9U] 
           ^ vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455[9U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[0U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[0U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[0U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[1U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[1U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[1U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[2U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[2U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[2U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[3U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[3U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[3U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[4U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[4U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[4U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[5U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[5U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[5U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[6U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[6U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[6U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[7U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[7U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[7U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[8U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[8U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[8U]);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[9U] 
        = (vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783[9U] 
           ^ vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[9U]);
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_2 
        = ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? 0U : (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh29164));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4 
        = ((0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh29164)
            : 0U);
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh29164)
            : 0U);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4605 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4951 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4610 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4871 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4736 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4952 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->__Vtableidx1 = vlTOPp->mkAscon_engine__DOT__x___05Fh25687;
    vlTOPp->mkAscon_engine__DOT__y___05Fh25671 = vlTOPp->__Vtable1_mkAscon_engine__DOT__y___05Fh25671
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = vlTOPp->mkAscon_engine__DOT__x___05Fh20564;
    vlTOPp->mkAscon_engine__DOT__y___05Fh20548 = vlTOPp->__Vtable2_mkAscon_engine__DOT__y___05Fh20548
        [vlTOPp->__Vtableidx2];
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_8 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
           & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__req_associated_data_EN 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
           & (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_7 
        = (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
            & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
           & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
           | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
           & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
           & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__ready_decrypted_tag_EN 
        = (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
            & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__select)));
    vlTOPp->mkAscon_engine__DOT__ready_tag_EN = (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                  & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))) 
                                                 & (IData)(vlTOPp->mkAscon_engine__DOT__select));
    vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_0_EN 
        = (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
            & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__select)));
    vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_1_EN 
        = (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
            & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__select)));
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0_EN 
        = (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
            & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))) 
           & (IData)(vlTOPp->mkAscon_engine__DOT__select));
    vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1_EN 
        = (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
            & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))) 
           & (IData)(vlTOPp->mkAscon_engine__DOT__select));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
           & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)));
    vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
           & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
           & (0U != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__counter_EN = (((((
                                                   (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                     & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                    | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                       & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state)) 
                                                 | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state)) 
                                                | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)) 
                                               | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_0_EN = ((
                                                   ((((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                        & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                       | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                          & (8U 
                                                             != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                      | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state)) 
                                                     | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)) 
                                                    | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_1_EN = ((
                                                   ((((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                        & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                       | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                          & (8U 
                                                             != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                      | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state)) 
                                                     | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)) 
                                                    | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_2_EN = ((
                                                   (((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                       & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                      | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                        & (8U 
                                                           != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                    | (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state) 
                                                        | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)) 
                                                       & (0U 
                                                          != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_3_EN = ((
                                                   (((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                       & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                      | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                        & (8U 
                                                           != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                    | (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state) 
                                                        | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)) 
                                                       & (0U 
                                                          != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state));
    vlTOPp->mkAscon_engine__DOT__rg_state_4_EN = ((
                                                   (((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                       & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                                                      | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                        & (8U 
                                                           != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                    | (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state) 
                                                        | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)) 
                                                       & (0U 
                                                          != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                   | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)) 
                                                  | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state));
    vlTOPp->mkAscon_engine__DOT__fsm_state_EN = (((
                                                   (((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                                                       & (8U 
                                                          == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) 
                                                      | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
                                                         & (8U 
                                                            == (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                     | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                                                        & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) 
                                                    | ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                                                       & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) 
                                                   | (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state) 
                                                       | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state)) 
                                                      & (0U 
                                                         != (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                  | (((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                                                      & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                                                     & (8U 
                                                        == (IData)(vlTOPp->mkAscon_engine__DOT__counter)))) 
                                                 | (IData)(vlTOPp->EN_input_function));
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state) 
           & (0U != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FPSEL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state) 
           | (IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state));
    vlTOPp->mkAscon_engine__DOT__x___05Fh26996 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26998 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26884 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26886 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_4);
    vlTOPp->mkAscon_engine__DOT__x___05Fh5061 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4610 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4608 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4610 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4869 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4871 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4949 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4951 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4952);
    vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263 
        = (vlTOPp->mkAscon_engine__DOT__rg_state_2 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh25671);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 
        = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d23 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh25671);
    vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136 
        = (vlTOPp->mkAscon_engine__DOT__rg_state_2 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20548);
    vlTOPp->mkAscon_engine__DOT__ready_ciphertext_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5;
    vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5;
    vlTOPp->mkAscon_engine__DOT__ready_decrypted_data_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4;
    vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_0_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4;
    vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_1_EN 
        = vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4;
    vlTOPp->mkAscon_engine__DOT__fsm_state_D_IN = ((IData)(vlTOPp->EN_input_function)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3)
                                                      ? 7U
                                                      : 
                                                     (((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4) 
                                                       | (IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5))
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6)
                                                        ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FVAL_6)
                                                        : 
                                                       ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_7)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_8)
                                                          ? 2U
                                                          : 0U)))))));
    vlTOPp->mkAscon_engine__DOT__counter_D_IN = ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
                                                  ? (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh29164)
                                                  : 
                                                 ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
                                                   ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_2)
                                                   : 
                                                  ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_3)
                                                    ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_2)
                                                    : 
                                                   ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FPSEL_4)
                                                     ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_4)
                                                     : 
                                                    ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                                                      ? (IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FVAL_5)
                                                      : 0U)))));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FSEL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FPSEL_4) 
           & (0U != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FSEL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FPSEL_4) 
           & (0U != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FSEL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FPSEL_4) 
           & (0U != (IData)(vlTOPp->mkAscon_engine__DOT__counter)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh26994 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26996 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh26997);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26882 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26884 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh5059 = (vlTOPp->mkAscon_engine__DOT__x___05Fh5061 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4947 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4949 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26804 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26806 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263);
    vlTOPp->mkAscon_engine__DOT__y___05Fh26669 = (vlTOPp->mkAscon_engine__DOT__rg_state_1 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263);
    vlTOPp->mkAscon_engine__DOT__y___05Fh26546 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh26677 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4867 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4869 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4732 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4609 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__y___05Fh4740 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27 
                                                 & vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21681 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26806 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136);
    vlTOPp->mkAscon_engine__DOT__y___05Fh21546 = (vlTOPp->mkAscon_engine__DOT__rg_state_1 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136);
    vlTOPp->mkAscon_engine__DOT__y___05Fh21423 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh21554 = (vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136 
                                                  & vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh28180 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26994 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26880 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26882 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21757 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26882 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136);
    vlTOPp->mkAscon_engine__DOT__x___05Fh5057 = (vlTOPp->mkAscon_engine__DOT__x___05Fh5059 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4605);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4945 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4947 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d281 
        = (~ (vlTOPp->mkAscon_engine__DOT__x___05Fh26804 
              ^ vlTOPp->mkAscon_engine__DOT__rg_state_1));
    vlTOPp->mkAscon_engine__DOT__x___05Fh26543 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26545 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh26546);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26674 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh26677);
    vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76 
        = (~ (vlTOPp->mkAscon_engine__DOT__x___05Fh4867 
              ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4606 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4608 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4609);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4737 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4740);
    vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181 
        = (~ (vlTOPp->mkAscon_engine__DOT__x___05Fh21681 
              ^ vlTOPp->mkAscon_engine__DOT__rg_state_1));
    vlTOPp->mkAscon_engine__DOT__x___05Fh21420 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26545 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21423);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21551 = (vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21554);
    vlTOPp->mkAscon_engine__DOT__y___05Fh28179 = ((0xffffffffff800000ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__x___05Fh28180 
                                                      << 0x17U)) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__x___05Fh28180 
                                                                                >> 0x29U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh28181 = (((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__x___05Fh28180)))) 
                                                   << 0x39U) 
                                                  | (0x1ffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__x___05Fh28180 
                                                        >> 7U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh26878 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26880 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21755 = (vlTOPp->mkAscon_engine__DOT__x___05Fh21757 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5057 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4943 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4945 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__y___05Fh27697 = (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d281)))) 
                                                   << 0x3aU) 
                                                  | (0x3ffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d281 
                                                        >> 6U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh27699 = (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d281)))) 
                                                   << 0x3fU) 
                                                  | (0x7fffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d281 
                                                        >> 1U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh26541 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26543 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26672 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26674 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__y___05Fh5760 = (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76)))) 
                                                  << 0x3aU) 
                                                 | (0x3ffffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76 
                                                       >> 6U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh5762 = (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76)))) 
                                                  << 0x3fU) 
                                                 | (0x7fffffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76 
                                                       >> 1U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4604 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4606 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4735 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4737 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19);
    vlTOPp->mkAscon_engine__DOT__y___05Fh22574 = (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181)))) 
                                                   << 0x3aU) 
                                                  | (0x3ffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181 
                                                        >> 6U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh22576 = (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181)))) 
                                                   << 0x3fU) 
                                                  | (0x7fffffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181 
                                                        >> 1U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh21418 = (vlTOPp->mkAscon_engine__DOT__x___05Fh21420 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21549 = (vlTOPp->mkAscon_engine__DOT__x___05Fh21551 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_3);
    vlTOPp->mkAscon_engine__DOT__x___05Fh28178 = (vlTOPp->mkAscon_engine__DOT__x___05Fh28180 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh28181);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d284 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh26878 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh21755 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__y___05Fh6242 = ((0xffffffffff800000ULL 
                                                  & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 
                                                     << 0x17U)) 
                                                 | (QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & (IData)(
                                                                              (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 
                                                                               >> 0x29U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh6244 = (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108)))) 
                                                  << 0x39U) 
                                                 | (0x1ffffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 
                                                       >> 7U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4941 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4943 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh27696 = (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d281 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27699);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26539 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26541 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh26997);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26670 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26672 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh26673);
    vlTOPp->mkAscon_engine__DOT__x___05Fh5759 = (vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5762);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4602 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4604 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4605);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4733 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4735 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4736);
    vlTOPp->mkAscon_engine__DOT__x___05Fh22573 = (vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh22576);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21416 = (vlTOPp->mkAscon_engine__DOT__x___05Fh21418 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh26997);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21547 = (vlTOPp->mkAscon_engine__DOT__x___05Fh21549 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh26673);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh28178 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh28179);
    vlTOPp->mkAscon_engine__DOT__y___05Fh27938 = (((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d284)))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d284 
                                                        >> 0x11U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh27940 = (((QData)((IData)(
                                                                   (0x3ffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d284)))) 
                                                   << 0x36U) 
                                                  | (0x3fffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d284 
                                                        >> 0xaU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh22815 = (((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198)))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198 
                                                        >> 0x11U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh22817 = (((QData)((IData)(
                                                                   (0x3ffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198)))) 
                                                   << 0x36U) 
                                                  | (0x3fffffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198 
                                                        >> 0xaU)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh6241 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh6244);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4941 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_1 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh27696 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27697);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26537 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26539 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26668 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26670 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263);
    vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d84 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5759 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5760);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4600 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4602 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4731 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4733 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27);
    vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh22573 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh22574);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21414 = (vlTOPp->mkAscon_engine__DOT__x___05Fh21416 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21545 = (vlTOPp->mkAscon_engine__DOT__x___05Fh21547 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136);
    if ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__rg_state_4;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_6 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[0U])));
    } else {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_6 
            = vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219;
    }
    vlTOPp->mkAscon_engine__DOT__x___05Fh27937 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d284 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27940);
    vlTOPp->mkAscon_engine__DOT__x___05Fh22814 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh22817);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d116 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh6241 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh6242);
    vlTOPp->mkAscon_engine__DOT__y___05Fh6001 = (((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94)))) 
                                                  << 0x2fU) 
                                                 | (0x7fffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94 
                                                       >> 0x11U)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh6003 = (((QData)((IData)(
                                                                  (0x3ffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94)))) 
                                                  << 0x36U) 
                                                 | (0x3fffffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94 
                                                       >> 0xaU)));
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d269 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh26537 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh26666 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26668 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh26669);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d84
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[5U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[4U]))));
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4600 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh4729 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4731 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh4732);
    if ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__rg_state_2;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_6 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[5U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[4U])));
    } else {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_6 
            = vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189;
    }
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh21414 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh21543 = (vlTOPp->mkAscon_engine__DOT__x___05Fh21545 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21546);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_1 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh27937 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27938);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh22814 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh22815);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d116
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[0U]))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh6000 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh6003);
    vlTOPp->mkAscon_engine__DOT__y___05Fh27215 = (((QData)((IData)(
                                                                   (0xfffffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d269)))) 
                                                   << 0x24U) 
                                                  | (0xfffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d269 
                                                        >> 0x1cU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh27217 = (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d269)))) 
                                                   << 0x2dU) 
                                                  | (0x1fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d269 
                                                        >> 0x13U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh26664 = (vlTOPp->mkAscon_engine__DOT__x___05Fh26666 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    vlTOPp->mkAscon_engine__DOT__y___05Fh5278 = (((QData)((IData)(
                                                                  (0xfffffffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37)))) 
                                                  << 0x24U) 
                                                 | (0xfffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
                                                       >> 0x1cU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh5280 = (((QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & (IData)(vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37)))) 
                                                  << 0x2dU) 
                                                 | (0x1fffffffffffULL 
                                                    & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
                                                       >> 0x13U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh4727 = (vlTOPp->mkAscon_engine__DOT__x___05Fh4729 
                                                 ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15);
    vlTOPp->mkAscon_engine__DOT__rg_state_2_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_1
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2)
              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_2
              : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2)
                  ? vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FSEL_4)
                      ? vlTOPp->mkAscon_engine__DOT__rg_state_2
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_5
                          : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state)
                              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FVAL_6
                              : 0ULL))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh22092 = (((QData)((IData)(
                                                                   (0xfffffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143)))) 
                                                   << 0x24U) 
                                                  | (0xfffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143 
                                                        >> 0x1cU)));
    vlTOPp->mkAscon_engine__DOT__y___05Fh22094 = (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143)))) 
                                                   << 0x2dU) 
                                                  | (0x1fffffffffffULL 
                                                     & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143 
                                                        >> 0x13U)));
    vlTOPp->mkAscon_engine__DOT__x___05Fh21541 = (vlTOPp->mkAscon_engine__DOT__x___05Fh21543 
                                                  ^ vlTOPp->mkAscon_engine__DOT__rg_state_1);
    if ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))) {
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_2 
            = vlTOPp->mkAscon_engine__DOT__rg_state_3;
        vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_6 
            = (((QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[2U])));
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
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FSEL_4)
                      ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_4
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_5
                          : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state)
                              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FVAL_6
                              : 0ULL))))));
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d102 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh6000 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh6001);
    vlTOPp->mkAscon_engine__DOT__x___05Fh27214 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d269 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27217);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d278 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh26664 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__x___05Fh5277 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5280);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh4727 
           ^ vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33);
    vlTOPp->mkAscon_engine__DOT__x___05Fh22091 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh22094);
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh21541 
           ^ vlTOPp->mkAscon_engine__DOT__rg_state_0);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d102
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[2U]))));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_1 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh27214 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27215);
    vlTOPp->mkAscon_engine__DOT__y___05Fh27456 = ((0xfffffffffe000000ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d278 
                                                      << 0x19U)) 
                                                  | (QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d278 
                                                                                >> 0x27U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh27458 = ((0xfffffffffffffff8ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d278 
                                                      << 3U)) 
                                                  | (QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d278 
                                                                                >> 0x3dU))))));
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5277 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5278);
    vlTOPp->mkAscon_engine__DOT__y___05Fh5519 = ((0xfffffffffe000000ULL 
                                                  & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
                                                     << 0x19U)) 
                                                 | (QData)((IData)(
                                                                   (0x1ffffffU 
                                                                    & (IData)(
                                                                              (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
                                                                               >> 0x27U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh5521 = ((0xfffffffffffffff8ULL 
                                                  & (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
                                                     << 3U)) 
                                                 | (QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
                                                                               >> 0x3dU))))));
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh22091 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh22092);
    vlTOPp->mkAscon_engine__DOT__y___05Fh22333 = ((0xfffffffffe000000ULL 
                                                   & (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 
                                                      << 0x19U)) 
                                                  | (QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & (IData)(
                                                                               (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 
                                                                                >> 0x27U))))));
    vlTOPp->mkAscon_engine__DOT__y___05Fh22335 = ((0xfffffffffffffff8ULL 
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
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FSEL_4)
                      ? vlTOPp->mkAscon_engine__DOT__rg_state_3
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_5
                          : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state)
                              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FVAL_6
                              : 0ULL))))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh27455 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d278 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27458);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[9U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[8U]))));
    vlTOPp->mkAscon_engine__DOT__x___05Fh5518 = (vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61 
                                                 ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5521);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_6 
        = ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? (((QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[9U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[8U])))
            : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)
            ? vlTOPp->mkAscon_engine__DOT__x___05Fh7531
            : ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
                ? vlTOPp->mkAscon_engine__DOT__din___05Fh10845
                : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151));
    vlTOPp->mkAscon_engine__DOT__x___05Fh22332 = (vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 
                                                  ^ vlTOPp->mkAscon_engine__DOT__y___05Fh22335);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_1 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh27455 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27456);
    vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d69 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh5518 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh5519);
    vlTOPp->mkAscon_engine__DOT__rg_state_0_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_1
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2)
              ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151
              : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FPSEL_4)
                  ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_3
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                      ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_4
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_5
                          : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state)
                              ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FVAL_6
                              : 0ULL))))));
    vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173 
        = (vlTOPp->mkAscon_engine__DOT__x___05Fh22332 
           ^ vlTOPp->mkAscon_engine__DOT__y___05Fh22333);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_4 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)
            ? vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d69
            : (((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[7U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[6U]))));
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_6 
        = ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
            ? (((QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[7U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251[6U])))
            : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173);
    vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)
            ? vlTOPp->mkAscon_engine__DOT__x___05Fh12058
            : ((8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))
                ? vlTOPp->mkAscon_engine__DOT__rg_state_1
                : vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173));
    vlTOPp->mkAscon_engine__DOT__rg_state_1_D_IN = 
        ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1)
          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_1
          : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2)
              ? vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173
              : ((IData)(vlTOPp->mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FPSEL_4)
                  ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_3
                  : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state)
                      ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_4
                      : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state)
                          ? vlTOPp->mkAscon_engine__DOT__MUX_rg_state_1_write_1___05FVAL_5
                          : ((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state)
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
    input_function_mode = VL_RAND_RESET_I(1);
    EN_input_function = VL_RAND_RESET_I(1);
    RDY_input_function = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, ciphertext);
    RDY_ciphertext = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, decrypted_data);
    RDY_decrypted_data = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, tag);
    RDY_tag = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, decrypted_tag);
    RDY_decrypted_tag = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CLK = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__RST_N = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__input_function_plaintext);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__input_function_associated_data);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__input_function_key);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__input_function_nonce);
    mkAscon_engine__DOT__input_function_mode = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__EN_input_function = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__RDY_input_function = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__ciphertext);
    mkAscon_engine__DOT__RDY_ciphertext = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__decrypted_data);
    mkAscon_engine__DOT__RDY_decrypted_data = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__tag);
    mkAscon_engine__DOT__RDY_tag = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, mkAscon_engine__DOT__decrypted_tag);
    mkAscon_engine__DOT__RDY_decrypted_tag = VL_RAND_RESET_I(1);
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
    mkAscon_engine__DOT__ready_decrypted_data = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_decrypted_data_D_IN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_decrypted_data_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_decrypted_tag = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_decrypted_tag_D_IN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_decrypted_tag_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_tag = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_tag_D_IN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__ready_tag_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__req_associated_data = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__req_associated_data_D_IN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__req_associated_data_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_decrypted_data_0 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_decrypted_data_0_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_decrypted_data_0_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_decrypted_data_1 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_decrypted_data_1_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_decrypted_data_1_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_decryption_tag_0 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_decryption_tag_0_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_decryption_tag_0_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__rg_decryption_tag_1 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_decryption_tag_1_D_IN = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_decryption_tag_1_EN = VL_RAND_RESET_I(1);
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
    mkAscon_engine__DOT__select = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__select_D_IN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__select_EN = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_associated_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_decryption_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_encryption_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_finalization_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_intialization_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_permutate_associated_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_RL_permutate_encrypt_decrypt_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__CAN_FIRE_input_function = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state = VL_RAND_RESET_I(1);
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
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FVAL_6 = VL_RAND_RESET_I(3);
    mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_counter_write_1___05FSEL_3 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_3 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_4 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_5 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_6 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_7 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_fsm_state_write_1___05FSEL_8 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_rg_state_0_write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FPSEL_4 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_rg_state_2_write_1___05FSEL_4 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_rg_state_3_write_1___05FSEL_4 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__MUX_rg_state_4_write_1___05FSEL_4 = VL_RAND_RESET_I(1);
    mkAscon_engine__DOT__y___05Fh20548 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh25671 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT___0b0_CONCAT_rg_interface_0_2_CONCAT_0b0_47_XOR___05FETC___05F_d251);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__lv_finalized_key___05Fh24489);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783);
    VL_RAND_RESET_W(320, mkAscon_engine__DOT__padded_key___05Fh1678);
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
    mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d281 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__din___05Fh10845 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__encryption0___05Fh16560 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__encryption1___05Fh16561 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__encryption_tag0___05Fh29252 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__encryption_tag1___05Fh29253 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d284 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d269 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d278 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh12058 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21414 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21416 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21418 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21420 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21541 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21543 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21545 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21547 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21549 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21551 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21681 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21755 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh21757 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh22091 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh22332 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh22573 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh22814 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26537 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26539 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26541 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26543 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26545 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26664 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26666 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26668 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26670 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26672 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26674 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26804 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26806 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26808 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26878 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26880 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26882 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26884 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26886 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26888 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26994 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26996 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh26998 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh27000 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh27214 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh27455 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh27696 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh27937 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh28178 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh28180 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4600 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4602 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4604 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4606 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4608 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4610 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4727 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4729 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4731 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4733 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4735 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4737 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4867 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4869 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4871 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4941 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4943 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4945 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4947 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4949 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh4951 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5057 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5059 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5061 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5277 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5518 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh5759 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh6000 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh6241 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh7531 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21423 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21546 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh21554 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh22092 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh22094 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh22333 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh22335 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh22574 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh22576 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh22815 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh22817 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh26546 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh26669 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh26673 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh26677 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh26889 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh26997 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh27215 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh27217 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh27456 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh27458 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh27697 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh27699 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh27938 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh27940 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh28179 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh28181 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4605 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4609 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4732 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4736 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4740 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh4952 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5278 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5280 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5519 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5521 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5760 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh5762 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh6001 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh6003 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh6242 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__y___05Fh6244 = VL_RAND_RESET_Q(64);
    mkAscon_engine__DOT__x___05Fh20564 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__x___05Fh25687 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__x___05Fh29164 = VL_RAND_RESET_I(4);
    mkAscon_engine__DOT__counter_ULT_12___05F_d4 = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[0] = 0x4bULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[1] = 0x5aULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[2] = 0x69ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[3] = 0x78ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[4] = 0x87ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[5] = 0x96ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[6] = 0xa5ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[7] = 0xb4ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[8] = 0xc3ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[9] = 0xd2ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[10] = 0xe1ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[11] = 0xf0ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[12] = 0ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[13] = 0ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[14] = 0ULL;
    __Vtable1_mkAscon_engine__DOT__y___05Fh25671[15] = 0ULL;
    __Vtableidx2 = 0;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[0] = 0x4bULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[1] = 0x5aULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[2] = 0x69ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[3] = 0x78ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[4] = 0x87ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[5] = 0x96ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[6] = 0xa5ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[7] = 0xb4ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[8] = 0xc3ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[9] = 0xd2ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[10] = 0xe1ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[11] = 0xf0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[12] = 0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[13] = 0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[14] = 0ULL;
    __Vtable2_mkAscon_engine__DOT__y___05Fh20548[15] = 0ULL;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
