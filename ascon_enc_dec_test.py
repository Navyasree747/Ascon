import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge,FallingEdge

@cocotb.test()
async def ascon_test(dut):
    in_plaintext=0x34eeee7993005ad8f43fcf7d6ecf2329
    in_nonce=0x3a18d9f831fe71cd203602f0cc00dfde
    in_key=0x8ead53800481879583d9b6e920276b4a
    in_associated_data=0xa7f4c3e1d2b9f6e8075c9d3b2f1e6a80
    in_mode=0
    cocotb.start_soon(Clock(dut.CLK, 10, units='ns').start())
    await RST_N(dut)
    await RisingEdge(dut.CLK)
    dut.EN_input_function.value =1
    
    dut.input_function_plaintext.value = in_plaintext
    dut.input_function_key.value =in_key
    dut.input_function_nonce.value =in_nonce
    dut.input_function_associated_data.value =in_associated_data
    dut.input_function_mode =in_mode
    await RisingEdge(dut.CLK)
    dut.EN_input_function.value =0
    #for i in range(39):
    #    await RisingEdge(dut.CLK)
    if in_mode == 1:
        await RisingEdge(dut.RDY_ciphertext)
        dut_ciphertext_data = dut.ciphertext.value
        await RisingEdge(dut.RDY_tag)
        dut_encrypted_tag = dut.tag.value
        print(f"dut ciphertext: {hex(dut_ciphertext_data)}")
        print(f"dut encryption_tag:{hex(dut_encrypted_tag)}")
        await RisingEdge(dut.CLK)
        #in_mode=0
    else:
        await RisingEdge(dut.CLK)
        await RisingEdge(dut.RDY_decrypted_data)

        dut_decrypted_info=dut.decrypted_data.value
        await RisingEdge(dut.RDY_decrypted_tag   )
        dut_decrypted_tag_info=dut.decrypted_tag.value
    
        print(f"dut decrypted_data: {hex(dut_decrypted_info)}")
        print(f"dut decryption_tag:{hex(dut_decrypted_tag_info)}")
    

async def RST_N(dut):
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1