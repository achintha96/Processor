module DRAM (address,
             clock,
	         data,
	         wren,
	         q);

input [15:0] address;
input clock;
input [7:0] data;
input wren;
output [7:0] q;


wire [7:0] sub_wire0;
wire [7:0] q = sub_wire0[7:0];


initial begin
    //DRAM[0] = 16'b0000000000000000;
    //DRAM[1] = 16'b0000000000000001;
end

always @ (posedge clock)
begin
    //if MEM
end
endmodule
