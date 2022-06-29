module IRAM (
input wire [7:0] address,
input clock,
output reg [15:0] q);

reg [15:0] IRAM [4095:0];

initial begin
    IRAM[0] = 16'b0000000000000000;
    IRAM[1] = 16'b0000000000000001;
end

always @(posedge clock)
begin
	q <= IRAM[address];
end
endmodule