`timescale 1ns / 1ps

module Bullet_Drawer(
	input clk,
	input reset,
	input [9:0] hcount, 
	input [9:0] vcount,
	input [9:0] pos_x,
	input signed [9:0] pos_y,
	output reg [5:0] data, 
	output reg draw
	 );
	 
	 always @(posedge clk) begin
		draw = 0;
		
		if($signed(vcount) >=pos_y && $signed(vcount)<=pos_y + 10) begin
			if(hcount>=pos_x && hcount < pos_x +8) begin
				data = 6'b101010;
				draw = 1;
			end
		end
		
		if (reset) begin
			draw = 0;
		end
	 end


endmodule
