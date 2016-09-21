`timescale 1ns / 1ps
module Shot_Drawer(
	input clk,
	input reset,
	input fire,
	input [9:0] hcount, 
	input [9:0] vcount,
	input [9:0] pos_x,
	output reg [5:0] data, 
	output reg draw
    );
	
	reg fire_up;
	reg out;
	reg signed [9:0]pos_y = 424;
	reg [15:0] contador;
	reg [9:0] position_x; 
	always @(posedge clk) begin
		draw = 0;
		if(fire)begin
			fire_up=1;
		end else begin
			if(!out) begin
				position_x = pos_x;
			end
		end
		
		if(fire_up) begin
			out = 1;
			contador = contador +1;
			if(contador >= 60000) begin
				contador = 0;
				if(pos_y >=-10) begin
					pos_y = pos_y -1;
				end
			end
		end
		if($signed(vcount) >=pos_y && $signed(vcount)<=pos_y + 10) begin
			if(hcount>=position_x && hcount < position_x +8) begin
				data = 6'b101010;
				if (fire_up) begin
					draw = 1;
				end
			end
		end
		
		if (reset) begin
			draw = 0;
			out = 0;
			pos_y = 424;
			fire_up=0;
		end
	end

endmodule
