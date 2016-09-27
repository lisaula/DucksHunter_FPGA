`timescale 1ns / 1ps
module Comparator(
	input signed[10:0]duckPos_x,
	input signed[9:0]duckPos_y,
	input signed [9:0]bulletPosition_y,
	input signed [10:0] bulletPosition_x,
	output reg collision
    );
	 
	 always @(*) begin
		if(duckPos_x >= bulletPosition_x && duckPos_x <= bulletPosition_x+8 &&//validate collision
			duckPos_y >= bulletPosition_y && duckPos_y <= bulletPosition_y+10)
		begin
			collision <= 1'b1;
		end
		else if(bulletPosition_x>=duckPos_x && bulletPosition_x <= duckPos_x+46&&
				bulletPosition_y >=duckPos_y && bulletPosition_y <=duckPos_y +40)
		begin
			collision <= 1'b1;
		end else begin
			collision <= 1'b0;
		end
	 end


endmodule
