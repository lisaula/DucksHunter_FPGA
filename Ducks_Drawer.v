`timescale 1ns / 1ps
module Ducks_Drawer(
	input clk,
	input reset,
	input[9:0]hcount,
	input[9:0]vcount,
	output [5:0]data,
	output reg draw,
	output reg signed[10:0]pos_x,
	output reg signed[9:0]pos_y
    );
	reg [10:0] address;
	reg [17:0]contadorY;
	reg [16:0]contadorX;
	reg signed [4:0] offset_y;
	Ducks_Rom rom(address, data);
	wire signed [11:0]sHcount  = {3'b000,hcount};
	wire signed [9:0]sVcount = {3'b0,vcount};
	reg [4:0]cont;
	always @(posedge clk)
	begin
		draw = 0;
		
		contadorY = contadorY +1;
		if(contadorY >= 260000) begin
			contadorY = 0;
			cont = cont +1;
			if(cont == 30)begin
				offset_y = -1*offset_y;
				cont = 0;
			end
			pos_y = pos_y+offset_y;
		end
		
		contadorX = contadorX +1;
		if(contadorX > 60000)begin
			contadorX=0;
			pos_x = pos_x-1;
		end
		if(pos_x<-11'sd46) begin
			pos_x = 11'sd640;
		end
		if( sVcount >=pos_y && sVcount < (pos_y+40))
		begin
			if(sHcount>= pos_x && sHcount < $signed(pos_x +46))
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
			pos_x = 11'sd594;
			pos_y =10'sd150;
			offset_y=1;
			contadorY=0;
			contadorX=0;
			cont =0;
		end
	end

endmodule
