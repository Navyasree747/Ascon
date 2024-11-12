// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/navya/Ascon/Ascon/verilog/mkAscon_engine.v", 39, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/navya/Ascon/Ascon/verilog/mkAscon_engine.v", 39, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp18[8];
    WData/*319:0*/ __Vtemp20[10];
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__ready_ciphertext_EN) {
            vlTOPp->mkAscon_engine__DOT__ready_ciphertext 
                = vlTOPp->mkAscon_engine__DOT__ready_ciphertext_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__ready_ciphertext = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__ready_tag_EN) {
            vlTOPp->mkAscon_engine__DOT__ready_tag 
                = vlTOPp->mkAscon_engine__DOT__ready_tag_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__ready_tag = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1 
                = vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0 
                = vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1 
                = vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0 
                = vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_interface_2_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_interface_2[0U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[0U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_2[1U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[1U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_2[2U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[2U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_2[3U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[3U];
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_interface_2[0U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_2[1U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_2[2U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_2[3U] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_interface_1_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_interface_1[0U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[0U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_1[1U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[1U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_1[2U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[2U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_1[3U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[3U];
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_interface_1[0U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_1[1U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_1[2U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_1[3U] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__req_associated_data_EN) {
            vlTOPp->mkAscon_engine__DOT__req_associated_data 
                = vlTOPp->mkAscon_engine__DOT__req_associated_data_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__req_associated_data = 1U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__fsm_state_EN) {
            vlTOPp->mkAscon_engine__DOT__fsm_state 
                = vlTOPp->mkAscon_engine__DOT__fsm_state_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__fsm_state = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__iv_constant_EN) {
            vlTOPp->mkAscon_engine__DOT__iv_constant 
                = vlTOPp->mkAscon_engine__DOT__iv_constant_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__iv_constant = 0x80800c0800000000ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_state_0_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_state_0 
                = vlTOPp->mkAscon_engine__DOT__rg_state_0_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_state_0 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_state_1_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_state_1 
                = vlTOPp->mkAscon_engine__DOT__rg_state_1_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_state_1 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_interface_3_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_interface_3[0U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[0U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_3[1U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[1U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_3[2U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[2U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_3[3U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[3U];
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_interface_3[0U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_3[1U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_3[2U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_3[3U] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_interface_0_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_interface_0[0U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[0U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_0[1U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[1U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_0[2U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[2U];
            vlTOPp->mkAscon_engine__DOT__rg_interface_0[3U] 
                = vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[3U];
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_interface_0[0U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_0[1U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_0[2U] = 0U;
        vlTOPp->mkAscon_engine__DOT__rg_interface_0[3U] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_state_4_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_state_4 
                = vlTOPp->mkAscon_engine__DOT__rg_state_4_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_state_4 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_state_3_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_state_3 
                = vlTOPp->mkAscon_engine__DOT__rg_state_3_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_state_3 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_state_2_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_state_2 
                = vlTOPp->mkAscon_engine__DOT__rg_state_2_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_state_2 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__counter_EN) {
            vlTOPp->mkAscon_engine__DOT__counter = vlTOPp->mkAscon_engine__DOT__counter_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__counter = 0U;
    }
    vlTOPp->mkAscon_engine__DOT__RDY_ciphertext = vlTOPp->mkAscon_engine__DOT__ready_ciphertext;
    vlTOPp->mkAscon_engine__DOT__RDY_tag = vlTOPp->mkAscon_engine__DOT__ready_tag;
    vlTOPp->mkAscon_engine__DOT__ciphertext[0U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0);
    vlTOPp->mkAscon_engine__DOT__ciphertext[1U] = (IData)(
                                                          (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0 
                                                           >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__ciphertext[2U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1);
    vlTOPp->mkAscon_engine__DOT__ciphertext[3U] = (IData)(
                                                          (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1 
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
    VL_EXTEND_WW(256,128, __Vtemp18, vlTOPp->mkAscon_engine__DOT__rg_interface_0);
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[0U] = 0U;
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[1U] = 0U;
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[2U] 
        = __Vtemp18[0U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[3U] 
        = __Vtemp18[1U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[4U] 
        = __Vtemp18[2U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[5U] 
        = __Vtemp18[3U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[6U] 
        = __Vtemp18[4U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[7U] 
        = __Vtemp18[5U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[8U] 
        = __Vtemp18[6U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041[9U] 
        = __Vtemp18[7U];
    VL_EXTEND_WW(320,128, __Vtemp20, vlTOPp->mkAscon_engine__DOT__rg_interface_0);
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[0U] 
        = __Vtemp20[0U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[1U] 
        = __Vtemp20[1U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[2U] 
        = __Vtemp20[2U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[3U] 
        = __Vtemp20[3U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[4U] 
        = __Vtemp20[4U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[5U] 
        = __Vtemp20[5U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[6U] 
        = __Vtemp20[6U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[7U] 
        = __Vtemp20[7U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[8U] 
        = __Vtemp20[8U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1252[9U] 
        = __Vtemp20[9U];
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
    vlTOPp->ciphertext[0U] = vlTOPp->mkAscon_engine__DOT__ciphertext[0U];
    vlTOPp->ciphertext[1U] = vlTOPp->mkAscon_engine__DOT__ciphertext[1U];
    vlTOPp->ciphertext[2U] = vlTOPp->mkAscon_engine__DOT__ciphertext[2U];
    vlTOPp->ciphertext[3U] = vlTOPp->mkAscon_engine__DOT__ciphertext[3U];
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

VL_INLINE_OPT void Vtop::_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                          & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                         & (0U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("local_state=%x,%x,%x,%x,%x\n",
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_1,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - Before add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d23,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - After add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_iv_constant_1_ELSE_rg_sta_ETC___05F_d33,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_127_ETC___05F_d15,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_0_2_BITS_63___05FETC___05F_d27,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_127_T_ETC___05F_d19,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d11);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - After sbox: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d37,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d61,
                      64,vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d76,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d94,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d108);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - After diffusion: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d69,
                      64,vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d84,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d102,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d116);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))))) {
            VL_WRITEF("new_rg_state %x %x\n",64,(((QData)((IData)(
                                                                  vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[9U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[8U]))),
                      64,(((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[7U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->mkAscon_engine__DOT__rg_state_0_2_CONCAT_rg_state_1_4_CONCAT_rg_sta_ETC___05F_d49[6U]))));
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - Before add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_1,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_1,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After sbox: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198,
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh25720);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After diffusion: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - Before add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_1,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_1,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After sbox: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198,
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh25720);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After diffusion: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                         & (0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("rg_encrypted_data=%x%x\n",64,
                      vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                         & (0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("encryption_result=%x%x\n",64,
                      vlTOPp->mkAscon_engine__DOT__encryption0___05Fh16082,
                      64,vlTOPp->mkAscon_engine__DOT__encryption1___05Fh16083);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("processed_data180000000000000000000000000000000000000000000000000000000000000000000000000000000\n");
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("packed_pre_finalized_data%x\n",
                      320,vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh21335);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("lv_updated_finalized_data%x\n",
                      320,vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh22007);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("lv_finalized_key%x\n",320,vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh22041);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - Before add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_1,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_1,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d136,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After sbox: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198,
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh25720);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypted_data_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After diffusion: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d151,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d173,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d189,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d206,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - Before add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_1,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - After add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_1,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d260,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - After sbox: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d266,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d275,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d278,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d281,
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh25720);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - After diffusion: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh24754 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24755),
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh24995 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh24996),
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh25236 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh25237),
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh25477 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh25478),
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))))) {
            VL_WRITEF("encryption_tag0%x\n",64,vlTOPp->mkAscon_engine__DOT__encryption_tag0___05Fh26646);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))))) {
            VL_WRITEF("encryption_tag1%x\n",64,vlTOPp->mkAscon_engine__DOT__encryption_tag1___05Fh26647);
        }
    }
}

VL_INLINE_OPT void Vtop::_combo__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkAscon_engine__DOT__rg_interface_2_EN 
        = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[0U] 
        = vlTOPp->input_function_associated_data[0U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[1U] 
        = vlTOPp->input_function_associated_data[1U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[2U] 
        = vlTOPp->input_function_associated_data[2U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_2_D_IN[3U] 
        = vlTOPp->input_function_associated_data[3U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_1_EN 
        = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[0U] 
        = vlTOPp->input_function_plaintext[0U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[1U] 
        = vlTOPp->input_function_plaintext[1U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[2U] 
        = vlTOPp->input_function_plaintext[2U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_1_D_IN[3U] 
        = vlTOPp->input_function_plaintext[3U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_3_EN 
        = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[0U] 
        = vlTOPp->input_function_nonce[0U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[1U] 
        = vlTOPp->input_function_nonce[1U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[2U] 
        = vlTOPp->input_function_nonce[2U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_3_D_IN[3U] 
        = vlTOPp->input_function_nonce[3U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_0_EN 
        = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[0U] 
        = vlTOPp->input_function_key[0U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[1U] 
        = vlTOPp->input_function_key[1U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[2U] 
        = vlTOPp->input_function_key[2U];
    vlTOPp->mkAscon_engine__DOT__rg_interface_0_D_IN[3U] 
        = vlTOPp->input_function_key[3U];
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
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->CLK)) & (IData)(vlTOPp->__Vclklast__TOP__CLK))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((EN_input_function & 0xfeU))) {
        Verilated::overWidthError("EN_input_function");}
}
#endif  // VL_DEBUG
