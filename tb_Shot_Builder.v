`timescale 1ns / 1ps
module tb_Shot_Builder(
    );

	reg clk;
	reg fire; 
	reg reset;
	reg[9:0] pos_x; 
	reg[9:0] vcount;
	reg[9:0] hcount;
	reg peticion;
	wire[9:0]position_y;
	wire[9:0] position_x;
	wire [5:0]conta;
	Shot_Builder SB(clk, fire, reset, pos_x, vcount, hcount,peticion, position_y, position_x, conta);
	
	initial 
	begin
		clk = 0;
		fire= 0;
		reset = 1;
		pos_x = 0;
		vcount = 0;
		hcount = 0;
		peticion = 0;
		#10;
		reset= 0;
		#10
		fire = 1;
		pos_x = 200;
		#10
		fire = 0;
		#10
		fire = 1;
		#10
		pos_x = 300;
		#10
		fire = 0;
		#10
		fire = 1;
		#10
		pos_x = 250;
		#10;
		fire = 0;
		peticion=1;
		#20
		peticion=0;
		#10;
		peticion=1;
		
	end
	
	always
	begin
		#5;
		clk = !clk;
	end
	
	always @(posedge clk) begin
		hcount = hcount +1;
		if(hcount == 640)begin
			vcount =vcount+1;
		end
		if(hcount > 640)begin
			hcount =0;
		end
		
		if(vcount > 480)begin
			vcount = 0;
		end
	end
endmodule
