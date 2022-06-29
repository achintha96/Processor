module DRAM (
input wire [15:0] address,
input clock,
input wire [7:0] data,
input wren,
output reg [7:0] q);
reg [7:0] DRAM[65535:0];

initial begin
    DRAM[0] = 16'b0000000000000000;
    DRAM[1] = 16'b0000000000000001;
end

always @ (posedge clock)
begin
    if(wren == 0)
        q <= DRAM[address];
    else
        DRAM[address] <= data;
end
endmodule