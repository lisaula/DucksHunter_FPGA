`timescale 1ns / 1ps

module Main(
	input clk50mhz,
	input reset,
	input izq,
	input der,
	input fire,
	output [1:0]red_out,
   output [1:0]green_out,
   output [1:0]blue_out,
	output hsync,
	output vsync
    );
	 
   wire vga_clk;// = clk50mhz;
	wire [9:0]hcount;
	wire [9:0]vcount;
	//reg [14:0] address;
	
// synthesis attribute CLKFX_DIVIDE of vga_clock_dcm is 4
// synthesis attribute CLKFX_MULTIPLY of vga_clock_dcm is 2
	DCM vga_clock_dcm (.CLKIN(clk50mhz),.CLKFX(vga_clk));
	
	//Ducks_Rom rom(address,data);
	
	wire duck_draw;
	wire [5:0] duck_data;
	Ducks_Drawer DD(vga_clk, reset, hcount, vcount,duck_data, duck_draw);
	
	wire [5:0] gun_data;
	wire gun_drawer;
	Gun g(vga_clk, reset, hcount, vcount, izq, der, fire, gun_data, gun_drawer);
	
	wire draw;
	wire [5:0]data;
	Control_Drawer CD(vga_clk, duck_draw, gun_drawer, duck_data, data, draw);
	
	VGA_LOGIC vga(vga_clk,data,draw,red_out,green_out,blue_out,hsync,vsync,hcount, vcount);
	
	always @(posedge vga_clk)
	begin
		/*if(reset)begin
			address=0;
		end
		
		if(vcount< 162)
		begin
			if(hcount < 124)
			begin
				address = address +1;
			end
		end
		else 
		begin
			address=0;
		end*/
	end
endmodule
