 module DRAM_write_enable_mux(output wire outputmux,
										input wire inputmux1,
										input wire inputmux2,
										input wire select);
													 
assign outputmux = select ? inputmux1:0;

endmodule