`timescale 1ns / 1ps
module Ducks_Drawer(
	input clk,
	input reset,
	input collision,
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
	reg shouldStop;
	parameter 
		counterY_limit = 260000,
		counterX_limit =  60000,
		shouldIntercalate=0,
		initial_posY= 10'sd150,
		initial_posX=11'sd594,
		uPOrDown=1;
	
	always @(posedge clk)
	begin
		draw = 0;
		
		contadorY = contadorY +1;
		if(contadorY >= counterY_limit) begin
			contadorY = 0;
			cont = cont +1;
			if(shouldIntercalate) begin
				if(cont == 30)begin
					offset_y = -1*offset_y;
					cont = 0;
				end
			end
			if(shouldStop)begin
				offset_y = -1*offset_y;
				shouldStop=0;
			end
			pos_y = pos_y+offset_y;
		end
		
		if(pos_y>= 10'sd200 ||pos_y<= -10'sd40)begin//compare if the ducks has not gone too low
			//offset_y = -1*offset_y;
			shouldStop=1;
		end
		
		contadorX = contadorX +1;
		if(contadorX > counterX_limit)begin
			contadorX=0;
			pos_x = pos_x-1;
		end
		if(pos_x<-11'sd46 || collision) begin
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
			pos_x = initial_posX;
			pos_y =initial_posY;
			offset_y=uPOrDown;
			contadorY=0;
			contadorX=0;
			cont =0;
			shouldStop=0;
		end
	end

endmodule
