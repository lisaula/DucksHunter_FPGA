`timescale 1ns / 1ps
module Ducks_Drawer(
	input clk,
	input reset,
	input[9:0]hcount,
	input[9:0]vcount,
	output [5:0]data,
	output reg draw
    );
	 
	reg [11:0] address;
	Ducks_Rom rom(address, data);
	always @(posedge clk)
	begin
		draw = 0;
		
		if(vcount< 59)
		begin
			if(hcount < 68)
			begin
				draw = 1;
				address = address +1;
			end
		end
		else 
		begin
			address=0;
		end
		
		if(reset)begin
			address=0;
			draw = 0;
		end
	end

endmodule
