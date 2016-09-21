`timescale 1ns / 1ps
module Control_Drawer(
	input clk, 
	input duck_drawer,
	input gun_drawer,
	input shot_drawer,
	input [5:0]duck_data,
	input [5:0] shot_data,
	output reg [5:0]data,
	output reg draw
    );
	 
	always @(posedge clk)
	begin
		if(duck_drawer) begin
			draw = 1;
			data = duck_data;
		end else if (gun_drawer) begin
			draw = 1;
			data = 0;
		end else if(shot_drawer)begin
			draw = 1;
			data = shot_data;
		end else begin
			draw = 0;
		end
	end
endmodule
