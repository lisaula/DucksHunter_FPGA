`timescale 1ns / 1ps

module Control_Peticiones(
    input clk,
	 input reset,
	 input peticion1,
	 input peticion2,
	 input [9:0]pos_x,
	 input signed [9:0]pos_y,
	 output peticion,
	 output reg [9:0]pos_x1,
	 output reg [9:0]pos_x2,
	 output reg signed [9:0]pos_y1,
	 output reg signed [9:0]pos_y2
	 );

	assign peticion = (peticion1 || peticion2);
	always @(posedge clk) begin
		if(peticion1) begin
			pos_x1 = pos_x;
			pos_y1 = pos_y;
		end
		
		if(peticion2) begin
			pos_x2 = pos_x;
			pos_y2 = pos_y;
		end
		
		if(reset) begin
			pos_y2=-10'sd10;
			pos_y1=-10'sd10;
		end
	end
endmodule
