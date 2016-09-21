`timescale 1ns / 1ps
module Ducks_Drawer(
	input clk,
	input reset,
	input[9:0]hcount,
	input[9:0]vcount,
	output [5:0]data,
	output reg draw
    );
	 
	reg [14:0] address;
	//Ducks_Rom rom(address, data);
	always @(posedge clk)
	begin
		draw = 0;
		
		if(vcount< 162)
		begin
			if(hcount < 124)
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
