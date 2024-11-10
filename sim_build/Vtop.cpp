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
    WData/*319:0*/ __Vtemp26[10];
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__ready_tag_EN) {
            vlTOPp->mkAscon_engine__DOT__ready_tag 
                = vlTOPp->mkAscon_engine__DOT__ready_tag_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__ready_tag = 0U;
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
        if (vlTOPp->mkAscon_engine__DOT__ready_ciphertext_EN) {
            vlTOPp->mkAscon_engine__DOT__ready_ciphertext 
                = vlTOPp->mkAscon_engine__DOT__ready_ciphertext_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__ready_ciphertext = 0U;
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
        if (vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0 
                = vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0 = 0ULL;
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
        if (vlTOPp->mkAscon_engine__DOT__rg_state_4_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_state_4 
                = vlTOPp->mkAscon_engine__DOT__rg_state_4_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_state_4 = 0ULL;
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
    vlTOPp->mkAscon_engine__DOT__RDY_tag = vlTOPp->mkAscon_engine__DOT__ready_tag;
    vlTOPp->mkAscon_engine__DOT__ciphertext[0U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0);
    vlTOPp->mkAscon_engine__DOT__ciphertext[1U] = (IData)(
                                                          (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0 
                                                           >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__ciphertext[2U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1);
    vlTOPp->mkAscon_engine__DOT__ciphertext[3U] = (IData)(
                                                          (vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1 
                                                           >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__RDY_ciphertext = vlTOPp->mkAscon_engine__DOT__ready_ciphertext;
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
    VL_EXTEND_WW(320,128, __Vtemp26, vlTOPp->mkAscon_engine__DOT__rg_interface_0);
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[0U] 
        = __Vtemp26[0U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[1U] 
        = __Vtemp26[1U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[2U] 
        = __Vtemp26[2U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[3U] 
        = __Vtemp26[3U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[4U] 
        = __Vtemp26[4U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[5U] 
        = __Vtemp26[5U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[6U] 
        = __Vtemp26[6U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[7U] 
        = __Vtemp26[7U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[8U] 
        = __Vtemp26[8U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735[9U] 
        = __Vtemp26[9U];
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
    vlTOPp->RDY_tag = vlTOPp->mkAscon_engine__DOT__RDY_tag;
    vlTOPp->ciphertext[0U] = vlTOPp->mkAscon_engine__DOT__ciphertext[0U];
    vlTOPp->ciphertext[1U] = vlTOPp->mkAscon_engine__DOT__ciphertext[1U];
    vlTOPp->ciphertext[2U] = vlTOPp->mkAscon_engine__DOT__ciphertext[2U];
    vlTOPp->ciphertext[3U] = vlTOPp->mkAscon_engine__DOT__ciphertext[3U];
    vlTOPp->RDY_ciphertext = vlTOPp->mkAscon_engine__DOT__RDY_ciphertext;
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

VL_INLINE_OPT void Vtop::_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*319:0*/ __Vtemp42[10];
    // Body
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                          & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)) 
                         & (0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("local_state=%x,%x,%x,%x,%x\n",
                      64,vlTOPp->mkAscon_engine__DOT__iv_constant,
                      64,(((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->mkAscon_engine__DOT__rg_interface_0[2U]))),
                      64,(((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_0[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->mkAscon_engine__DOT__rg_interface_0[0U]))),
                      64,(((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_3[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->mkAscon_engine__DOT__rg_interface_3[2U]))),
                      64,(((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_3[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->mkAscon_engine__DOT__rg_interface_3[0U]))));
        }
    }
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
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d62,
                      64,vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d77,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d95,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d109);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - After diffusion: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d45,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d70,
                      64,vlTOPp->mkAscon_engine__DOT__INV_IF_counter_EQ_0_THEN_rg_interface_3_BITS_6_ETC___05F_d85,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d103,
                      64,vlTOPp->mkAscon_engine__DOT__IF_counter_EQ_0_THEN_rg_interface_3_BITS_63_TO_ETC___05F_d117);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))))) {
            VL_WRITEF("newstate ,%x\n",320,vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))))) {
            VL_WRITEF("packed_rg_state %x\n",320,vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))))) {
            VL_WRITEF("padded_key %x\n",320,vlTOPp->mkAscon_engine__DOT__padded_key___05Fh6735);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))))) {
            VL_WRITEF("intialization_output %x\n",320,
                      vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_intialization_state) 
                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))))) {
            VL_WRITEF("new_rg_state %x %x \n",64,(((QData)((IData)(
                                                                   vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[9U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[8U]))),
                      64,(((QData)((IData)(vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[7U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->mkAscon_engine__DOT__intialization_output___05Fh6775[6U]))));
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) {
            VL_WRITEF("rg_interface[2][127:64] %x\n",
                      64,(((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_2[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->mkAscon_engine__DOT__rg_interface_2[2U]))));
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data)))) {
            VL_WRITEF("rg_interface[2][63:0] %x\n",
                      64,(((QData)((IData)(vlTOPp->mkAscon_engine__DOT__rg_interface_2[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->mkAscon_engine__DOT__rg_interface_2[0U]))));
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("processed_data,80000000000000000000000000000000000000000000000000000000000000000000000000000000\n");
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("packed_associated_data %x\n",
                      320,vlTOPp->mkAscon_engine__DOT__packed_associated_data___05Fh11523);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("lv_updated_asso_data %x\n",320,
                      vlTOPp->mkAscon_engine__DOT__lv_updated_asso_data___05Fh12195);
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
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138,
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
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d145,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d167,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d183,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d200,
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh21813);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_associated_data_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__req_associated_data))) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After diffusion: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d153,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d175,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d191,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d208,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d221);
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
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d138,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After sbox: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d145,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d167,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d183,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d200,
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh21813);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_associated_data_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After diffusion: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d153,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d175,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d191,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d208,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d221);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                         & (0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("rg_encrypted_data=%x %x\n",64,
                      vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_encrypted_data_1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                         & (0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("encryption_result %x %x\n",64,
                      vlTOPp->mkAscon_engine__DOT__encryption0___05Fh16813,
                      64,vlTOPp->mkAscon_engine__DOT__encryption1___05Fh16814);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                         & (0U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("lv_padded_key_state%x\n",320,
                      vlTOPp->mkAscon_engine__DOT__padded_key_state___05Fh16617);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_encryption_state) 
                         & (0U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("pre_finalized state%x\n",320,
                      vlTOPp->mkAscon_engine__DOT__pre_finalized_state___05Fh17084);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state)) {
            __Vtemp42[0U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_0);
            __Vtemp42[1U] = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_0 
                                     >> 0x20U));
            __Vtemp42[2U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_1);
            __Vtemp42[3U] = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_1 
                                     >> 0x20U));
            __Vtemp42[4U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_2);
            __Vtemp42[5U] = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_2 
                                     >> 0x20U));
            __Vtemp42[6U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_3);
            __Vtemp42[7U] = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_3 
                                     >> 0x20U));
            __Vtemp42[8U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_state_4);
            __Vtemp42[9U] = (IData)((vlTOPp->mkAscon_engine__DOT__rg_state_4 
                                     >> 0x20U));
            VL_WRITEF("lv_final_rg_state%x\n",320,__Vtemp42);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state)) {
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
        if (VL_UNLIKELY(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state)) {
            VL_WRITEF("Iteration %0# - After add_constant: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_1,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d251,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state)) {
            VL_WRITEF("Iteration %0# - After sbox: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d257,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d266,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_79_XOR_rg_st_ETC___05F_d269,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_93_XOR_rg_state___05FETC___05F_d272,
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh21813);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state)) {
            VL_WRITEF("Iteration %0# - After diffusion: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh20847 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh20848),
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh21088 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21089),
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh21329 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21330),
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh21570 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh21571),
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_34_XOR_rg_state___05FETC___05F_d221);
        }
    }
}

VL_INLINE_OPT void Vtop::_combo__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
