`timescale 1ns / 1ps
module Control_Drawer(
	input clk, 
	input duck_drawer,
	input duck_draw2,
	input duck_draw3,
	input duck_draw4, 
	input gun_drawer,
	input shot_drawer1,
	input shot_drawer2,
	input shot_drawer3,
	input shot_drawer4,
	input shot_drawer5,
	input shot_drawer6,
	input shot_drawer7,
	input shot_drawer8,
	input [5:0]duck_data,
	input [5:0]duck_data2,
	input [5:0]duck_data3,
	input [5:0]duck_data4, 
	input [5:0]gun_data,
	output reg [5:0]data,
	output reg draw
    );
	 
	always @(posedge clk)
	begin
		if(duck_drawer) begin
			draw = 1;
			data = duck_data;
		end else if(duck_draw2) begin
			draw = 1;
			data = duck_data2;
		end else if(duck_draw3) begin
			draw = 1;
			data = duck_data3;
		end else if(duck_draw4) begin
			draw = 1;
			data = duck_data4;
		end 
		else if (gun_drawer) begin
			draw = 1;
			data = gun_data;
		end else if(shot_drawer1 ||shot_drawer2 ||shot_drawer3 ||shot_drawer4 ||shot_drawer5 ||shot_drawer6 ||shot_drawer7 ||shot_drawer8)begin
			draw = 1;
			data = 6'b101010;
		end else begin
			draw = 0;
		end
	end
endmodule
