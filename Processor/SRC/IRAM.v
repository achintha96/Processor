module IRAM (address,
             clock,
	         data,
	         wren,
	         q);

input [7:0] address;
input clock;
input [15:0] data;
input wren;
output [15:0] q;

//reg [] IRAM [];

initial begin
    //IRAM[0] = 16'b0000000000000000;
    //IRAM[1] = 16'b0000000000000001;
end

always @ (posedge clock)
begin
    //if MEM
end
endmodule
