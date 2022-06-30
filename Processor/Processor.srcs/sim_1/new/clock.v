module clock();
    reg clk;
    Top_Level_Module clock(
    .clk(clk)
    );

    initial 
        begin
        clk = 0;
        end
    always 
    begin
    #10 clk = ~clk;    
    end
endmodule