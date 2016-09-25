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
	output vsync,
	output [7:0]led
    );
	 
   wire vga_clk;//= clk50mhz;
	wire [9:0]hcount;
	wire [9:0]vcount;
	//reg [14:0] address;
	
// synthesis attribute CLKFX_DIVIDE of vga_clock_dcm is 4
// synthesis attribute CLKFX_MULTIPLY of vga_clock_dcm is 2
	DCM vga_clock_dcm (.CLKIN(clk50mhz),.CLKFX(vga_clk));
	
	//Ducks_Rom rom(address,data);
	
	wire duck_draw;
	wire [5:0] duck_data;
	wire [10:0] duckPos_x;
	wire [9:0] duckPos_y;
	wire collision;
	Ducks_Drawer DD(vga_clk, reset,collision, hcount, vcount,duck_data, duck_draw, duckPos_x,duckPos_y);
	
	wire [5:0] gun_data;
	wire gun_drawer;
	wire [9:0] pos_x;
	wire [2:0] contador_led;
	assign led[0] = contador_led[0];
	assign led[1] = contador_led[1];
	assign led[2] = contador_led[2];
	assign led[3] = pos_x[3];
	assign led[4] = pos_x[4];
	assign led[5] = pos_x[5];
	assign led[6] = pos_x[6];
	assign led[7] = pos_x[7];
	Gun g(vga_clk, reset, hcount, vcount, izq, der, fire, gun_data, gun_drawer, pos_x);
	
	wire [5:0] shot_data; 
	wire shot_drawer;
	//Shot_Drawer SD(vga_clk, reset, fire, hcount, vcount,pos_x, shot_data, shot_drawer);
	
	wire [9:0]position_y1;
	wire [9:0]position_x1;
	wire [9:0]position_y2;
	wire [9:0]position_x2;
	wire [9:0]position_y3;
	wire [9:0]position_x3;
	wire [9:0]position_y4;
	wire [9:0]position_x4;
	wire [9:0]position_y5;
	wire [9:0]position_x5;
	wire [9:0]position_y6;
	wire [9:0]position_x6;
	wire [9:0]position_y7;
	wire [9:0]position_x7;
	wire [9:0]position_y8;
	wire [9:0]position_x8;
	Shot_Builder SB(vga_clk, fire,reset, pos_x, position_y1, position_x1,position_y2, position_x2,position_y3, position_x3,position_y4, position_x4,position_y5, position_x5,position_y6, position_x6,position_y7, position_x7,position_y8, position_x8,contador_led);
	 
	wire shot_drawer2;
	wire shot_drawer3;	 
	wire shot_drawer4; 
	wire shot_drawer5; 
	wire shot_drawer6; 
	wire shot_drawer7; 
	wire shot_drawer8;
	Bullet_Drawer BD1(vga_clk, reset, hcount, vcount, position_x1, position_y1, shot_drawer);
	Bullet_Drawer BD2(vga_clk, reset, hcount, vcount, position_x2, position_y2, shot_drawer2);
	Bullet_Drawer BD3(vga_clk, reset, hcount, vcount, position_x3, position_y3, shot_drawer3);
	Bullet_Drawer BD4(vga_clk, reset, hcount, vcount, position_x4, position_y4, shot_drawer4);
	Bullet_Drawer BD5(vga_clk, reset, hcount, vcount, position_x5, position_y5, shot_drawer5);
	Bullet_Drawer BD6(vga_clk, reset, hcount, vcount, position_x6, position_y6, shot_drawer6);
	Bullet_Drawer BD7(vga_clk, reset, hcount, vcount, position_x7, position_y7, shot_drawer7);
	Bullet_Drawer BD8(vga_clk, reset, hcount, vcount, position_x8, position_y8, shot_drawer8);
	
	
	Comparator C(duckPos_x, duckPos_y, position_y1, position_x1, collision);
	
	wire draw;
	wire [5:0]data;
	Control_Drawer CD(clk50mhz, duck_draw, gun_drawer,shot_drawer,shot_drawer2,shot_drawer3,shot_drawer4,shot_drawer5,shot_drawer6,shot_drawer7,shot_drawer8, duck_data, data, draw);
	
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
