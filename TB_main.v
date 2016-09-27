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
	wire [7:0]led;
	reg reload;
	Main main(clk, reset, izq, der,fire,reload,red_out,green_out, blue_out,hsync,vsync, led);
	
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
		#20;
		izq =1;
		#60;
		izq = 0;
		#20;
		fire = 1;
		#60;
		fire = 0;
		#20;
		fire = 1;
		#20;
		fire = 0;
		#20;
		fire = 1;
		#20;
		fire = 0;
		
		
	end
	
	always 
	begin
		clk = !clk;
		#10;
	end
endmodule
