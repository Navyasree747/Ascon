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
            VL_FATAL_MT("/home/navya/Ascon/Ascon/verilog/mkAscon_engine.v", 44, "",
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
            VL_FATAL_MT("/home/navya/Ascon/Ascon/verilog/mkAscon_engine.v", 44, "",
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
    vlTOPp->mkAscon_engine__DOT__input_function_mode 
        = vlTOPp->input_function_mode;
    vlTOPp->mkAscon_engine__DOT__EN_input_function 
        = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__WILL_FIRE_input_function 
        = vlTOPp->EN_input_function;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp22[8];
    WData/*319:0*/ __Vtemp24[10];
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
        if (vlTOPp->mkAscon_engine__DOT__ready_decrypted_data_EN) {
            vlTOPp->mkAscon_engine__DOT__ready_decrypted_data 
                = vlTOPp->mkAscon_engine__DOT__ready_decrypted_data_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__ready_decrypted_data = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__ready_decrypted_tag_EN) {
            vlTOPp->mkAscon_engine__DOT__ready_decrypted_tag 
                = vlTOPp->mkAscon_engine__DOT__ready_decrypted_tag_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__ready_decrypted_tag = 0U;
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
        if (vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_1_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_1 
                = vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_1_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_1 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_0_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_0 
                = vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_0_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_0 = 0ULL;
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
        if (vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_0_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_0 
                = vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_0_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_0 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_1_EN) {
            vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_1 
                = vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_1_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__rg_decryption_tag_1 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAscon_engine__DOT__select_EN) {
            vlTOPp->mkAscon_engine__DOT__select = vlTOPp->mkAscon_engine__DOT__select_D_IN;
        }
    } else {
        vlTOPp->mkAscon_engine__DOT__select = 0U;
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
    vlTOPp->mkAscon_engine__DOT__RDY_decrypted_data 
        = vlTOPp->mkAscon_engine__DOT__ready_decrypted_data;
    vlTOPp->mkAscon_engine__DOT__RDY_decrypted_tag 
        = vlTOPp->mkAscon_engine__DOT__ready_decrypted_tag;
    vlTOPp->mkAscon_engine__DOT__RDY_tag = vlTOPp->mkAscon_engine__DOT__ready_tag;
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
    vlTOPp->mkAscon_engine__DOT__tag[0U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0);
    vlTOPp->mkAscon_engine__DOT__tag[1U] = (IData)(
                                                   (vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_0 
                                                    >> 0x20U));
    vlTOPp->mkAscon_engine__DOT__tag[2U] = (IData)(vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1);
    vlTOPp->mkAscon_engine__DOT__tag[3U] = (IData)(
                                                   (vlTOPp->mkAscon_engine__DOT__rg_encryption_tag_1 
                                                    >> 0x20U));
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
    vlTOPp->mkAscon_engine__DOT__MUX_fsm_state_write_1___05FVAL_6 
        = ((IData)(vlTOPp->mkAscon_engine__DOT__select)
            ? 4U : 5U);
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
    VL_EXTEND_WW(256,128, __Vtemp22, vlTOPp->mkAscon_engine__DOT__rg_interface_0);
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[0U] = 0U;
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[1U] = 0U;
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[2U] 
        = __Vtemp22[0U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[3U] 
        = __Vtemp22[1U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[4U] 
        = __Vtemp22[2U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[5U] 
        = __Vtemp22[3U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[6U] 
        = __Vtemp22[4U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[7U] 
        = __Vtemp22[5U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[8U] 
        = __Vtemp22[6U];
    vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489[9U] 
        = __Vtemp22[7U];
    VL_EXTEND_WW(320,128, __Vtemp24, vlTOPp->mkAscon_engine__DOT__rg_interface_0);
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[0U] 
        = __Vtemp24[0U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[1U] 
        = __Vtemp24[1U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[2U] 
        = __Vtemp24[2U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[3U] 
        = __Vtemp24[3U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[4U] 
        = __Vtemp24[4U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[5U] 
        = __Vtemp24[5U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[6U] 
        = __Vtemp24[6U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[7U] 
        = __Vtemp24[7U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[8U] 
        = __Vtemp24[8U];
    vlTOPp->mkAscon_engine__DOT__padded_key___05Fh1678[9U] 
        = __Vtemp24[9U];
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
    vlTOPp->decrypted_data[0U] = vlTOPp->mkAscon_engine__DOT__decrypted_data[0U];
    vlTOPp->decrypted_data[1U] = vlTOPp->mkAscon_engine__DOT__decrypted_data[1U];
    vlTOPp->decrypted_data[2U] = vlTOPp->mkAscon_engine__DOT__decrypted_data[2U];
    vlTOPp->decrypted_data[3U] = vlTOPp->mkAscon_engine__DOT__decrypted_data[3U];
    vlTOPp->ciphertext[0U] = vlTOPp->mkAscon_engine__DOT__ciphertext[0U];
    vlTOPp->ciphertext[1U] = vlTOPp->mkAscon_engine__DOT__ciphertext[1U];
    vlTOPp->ciphertext[2U] = vlTOPp->mkAscon_engine__DOT__ciphertext[2U];
    vlTOPp->ciphertext[3U] = vlTOPp->mkAscon_engine__DOT__ciphertext[3U];
    vlTOPp->tag[0U] = vlTOPp->mkAscon_engine__DOT__tag[0U];
    vlTOPp->tag[1U] = vlTOPp->mkAscon_engine__DOT__tag[1U];
    vlTOPp->tag[2U] = vlTOPp->mkAscon_engine__DOT__tag[2U];
    vlTOPp->tag[3U] = vlTOPp->mkAscon_engine__DOT__tag[3U];
    vlTOPp->decrypted_tag[0U] = vlTOPp->mkAscon_engine__DOT__decrypted_tag[0U];
    vlTOPp->decrypted_tag[1U] = vlTOPp->mkAscon_engine__DOT__decrypted_tag[1U];
    vlTOPp->decrypted_tag[2U] = vlTOPp->mkAscon_engine__DOT__decrypted_tag[2U];
    vlTOPp->decrypted_tag[3U] = vlTOPp->mkAscon_engine__DOT__decrypted_tag[3U];
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
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh28180);
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
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh28180);
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
                      vlTOPp->mkAscon_engine__DOT__encryption0___05Fh16560,
                      64,vlTOPp->mkAscon_engine__DOT__encryption1___05Fh16561);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state) 
                         & (0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("rg_encrypted_data=%x%x\n",64,
                      vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_0,
                      64,vlTOPp->mkAscon_engine__DOT__rg_decrypted_data_1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_decryption_state) 
                         & (0U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("encryption_result=%x%x\n",64,
                      vlTOPp->mkAscon_engine__DOT__encryption0___05Fh16560,
                      64,vlTOPp->mkAscon_engine__DOT__encryption1___05Fh16561);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("processed_data180000000000000000000000000000000000000000000000000000000000000000000000000000000\n");
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("packed_pre_finalized_data%x\n",
                      320,vlTOPp->mkAscon_engine__DOT__packed_pre_finalized_data___05Fh23783);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("lv_updated_finalized_data%x\n",
                      320,vlTOPp->mkAscon_engine__DOT__lv_updated_finalized_data___05Fh24455);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
                         & (8U == (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("lv_finalized_key%x\n",320,vlTOPp->mkAscon_engine__DOT__lv_finalized_key___05Fh24489);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
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
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
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
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
                         & (8U != (IData)(vlTOPp->mkAscon_engine__DOT__counter))))) {
            VL_WRITEF("Iteration %0# - After sbox: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d143,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d165,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d181,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d198,
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh28180);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_permutate_encrypt_decrypt_state) 
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
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_2_2_XOR_SEL_ARR_75_90_105_120_135_150_ETC___05F_d263,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_3,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - After sbox: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d269,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_XOR_rg_state_2_2_XOR_SEL_ARR_75_9_ETC___05F_d278,
                      64,vlTOPp->mkAscon_engine__DOT__INV_rg_state_4_0_AND_rg_state_3_8_77_XOR_rg_st_ETC___05F_d281,
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_0_2_91_XOR_rg_state___05FETC___05F_d284,
                      64,vlTOPp->mkAscon_engine__DOT__x___05Fh28180);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4)))) {
            VL_WRITEF("Iteration %0# - After diffusion: %x %x %x %x %x\n",
                      4,vlTOPp->mkAscon_engine__DOT__counter,
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh27214 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27215),
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh27455 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27456),
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh27696 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27697),
                      64,(vlTOPp->mkAscon_engine__DOT__x___05Fh27937 
                          ^ vlTOPp->mkAscon_engine__DOT__y___05Fh27938),
                      64,vlTOPp->mkAscon_engine__DOT__rg_state_4_0_AND_rg_state_1_4_32_XOR_rg_state___05FETC___05F_d219);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__select)))) {
            VL_WRITEF("encryption_tag0%x\n",64,vlTOPp->mkAscon_engine__DOT__encryption_tag0___05Fh29252);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))) 
                         & (IData)(vlTOPp->mkAscon_engine__DOT__select)))) {
            VL_WRITEF("encryption_tag1%x\n",64,vlTOPp->mkAscon_engine__DOT__encryption_tag1___05Fh29253);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))) 
                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__select))))) {
            VL_WRITEF("encryption_tag0%x\n",64,vlTOPp->mkAscon_engine__DOT__encryption_tag0___05Fh29252);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkAscon_engine__DOT__WILL_FIRE_RL_finalization_state) 
                          & (~ (IData)(vlTOPp->mkAscon_engine__DOT__counter_ULT_12___05F_d4))) 
                         & (~ (IData)(vlTOPp->mkAscon_engine__DOT__select))))) {
            VL_WRITEF("encryption_tag1%x\n",64,vlTOPp->mkAscon_engine__DOT__encryption_tag1___05Fh29253);
        }
    }
}

VL_INLINE_OPT void Vtop::_combo__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkAscon_engine__DOT__select_EN = vlTOPp->EN_input_function;
    vlTOPp->mkAscon_engine__DOT__select_D_IN = vlTOPp->input_function_mode;
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
    if (VL_UNLIKELY((input_function_mode & 0xfeU))) {
        Verilated::overWidthError("input_function_mode");}
    if (VL_UNLIKELY((EN_input_function & 0xfeU))) {
        Verilated::overWidthError("EN_input_function");}
}
#endif  // VL_DEBUG
