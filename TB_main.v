`timescale 1ns / 1ps
module TB_main(
    );
	reg clk;
	reg reset;
	reg izq;
	reg der;
	reg fire;
	wire [1:0]red_out;
   wire [1:0]green_out;
   wire [1:0]blue_out;
	wire hsync;
	wire vsync;
	
	Main main(clk, reset, izq, der,fire,red_out,green_out, blue_out,hsync,vsync);
	
	initial 
	begin
		clk = 1;
		reset = 0;
		izq = 0;
		der = 0;
		fire = 0;
		#20;
		reset =1;
		#20;
		reset =0;
		
		
	end
	
	always 
	begin
		clk = !clk;
		#10;
	end
endmodule
