module state_to_7seg(bin,dout1,dout2);

input [5:0] bin;
reg [5:0] D0;
reg [5:0] D1;

output [6:0] dout1;
output [6:0] dout2;

decoder d0(.din(D0[3:0]),.dout(dout1));
decoder d1(.din(D1[3:0]),.dout(dout2));

always@(bin)
begin
	if (bin<10)
		begin
		D0= bin;
		D1=5'd0;
		end 
	else	
		if(bin<20)
			begin 
			D0 = bin-10;
			D1 = 5'd1;
			end
		else
			if(bin<30)
				begin
				D0 = bin -20;
				D1 = 5'd2;
				end
			else
				if(bin<40)
					begin
					D0 = bin-30;
					D1 = 5'd3;
					end
end
endmodule