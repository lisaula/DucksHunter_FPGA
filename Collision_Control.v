`timescale 1ns / 1ps
module Collision_Control(
	input clk,
	input reset,
	input signed [9:0]bulletPosition_y1,
	input signed [10:0] bulletPosition_x1,
	input signed [9:0]bulletPosition_y2,
	input signed [10:0] bulletPosition_x2,
	input signed [9:0]bulletPosition_y3,
	input signed [10:0] bulletPosition_x3,
	input signed [9:0]bulletPosition_y4,
	input signed [10:0] bulletPosition_x4,
	input signed [9:0]bulletPosition_y5,
	input signed [10:0] bulletPosition_x5,
	input signed [9:0]bulletPosition_y6,
	input signed [10:0] bulletPosition_x6,
	input signed [9:0]bulletPosition_y7,
	input signed [10:0] bulletPosition_x7,
	input signed [9:0]bulletPosition_y8,
	input signed [10:0] bulletPosition_x8,
	output reg signed [9:0]bulletPosition_y,
	output reg signed [10:0] bulletPosition_x
    );
	 
	 reg [2:0]contador;
	 always @(posedge clk)begin
		 contador = contador +1;
		 case(contador)
					3'd0:begin
						bulletPosition_y = bulletPosition_y1;
						bulletPosition_x = bulletPosition_x1;
					end
					3'd1:begin
						bulletPosition_y = bulletPosition_y2;
						bulletPosition_x = bulletPosition_x2;
					end
					3'd2:begin
						bulletPosition_y = bulletPosition_y3;
						bulletPosition_x = bulletPosition_x3;
					end
					3'd3:begin
						bulletPosition_y = bulletPosition_y4;
						bulletPosition_x = bulletPosition_x4;
					end
					3'd4:begin
						bulletPosition_y = bulletPosition_y5;
						bulletPosition_x = bulletPosition_x5;
					end
					3'd5:begin
						bulletPosition_y = bulletPosition_y6;
						bulletPosition_x = bulletPosition_x6;
					end
					3'd6:begin
						bulletPosition_y = bulletPosition_y7;
						bulletPosition_x = bulletPosition_x7;
					end
					3'd7:begin
						bulletPosition_y = bulletPosition_y8;
						bulletPosition_x = bulletPosition_x8;
					end
					default:
						begin
						bulletPosition_y = 0;
						bulletPosition_x = 0;
					end
		 endcase
		 if(reset) begin
			contador = 0;
		 end
	 end


endmodule
