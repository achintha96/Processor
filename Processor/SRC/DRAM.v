module DRAM (
input wire [15:0] address,
input clock,
input wire [7:0] data,
input wren,
output reg [7:0] q);
reg [7:0] DRAM[7:0];

initial begin
    DRAM[0] = 8'b10100001;
    DRAM[1] = 8'b10100001;
    DRAM[2] = 8'b10011101;
    DRAM[3] = 8'b10100001;
    DRAM[4] = 8'b10100001;
    DRAM[5] = 8'b10011111;
    DRAM[6] = 8'b10100011;
    DRAM[7] = 8'b10011011;
end

always @ (posedge clock)
begin
    if(wren == 0)
        q <= DRAM[address];
    else
        DRAM[address] <= data;
end
endmodule