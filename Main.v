`timescale 1ns / 1ps

module Main(
	input clk50mhz,
	input reset,
	input izq,
	input der,
	input fire,
	input reload,
	output [1:0]red_out,
   output [1:0]green_out,
   output [1:0]blue_out,
	output hsync,
	output vsync,
	output reg [7:0]led
    );
	 
   wire vga_clk;//= clk50mhz;
	wire [9:0]hcount;
	wire [9:0]vcount;
	//reg [14:0] address;
	
// synthesis attribute CLKFX_DIVIDE of vga_clock_dcm is 4
// synthesis attribute CLKFX_MULTIPLY of vga_clock_dcm is 2
	DCM vga_clock_dcm (.CLKIN(clk50mhz),.CLKFX(vga_clk));
	
	reg [24:0]contador;
	reg [4:0]segs;
	wire shouldFinish = segs == 30? 1:0;
	wire logicClk = shouldFinish? 0: vga_clk;
	//Ducks_Rom rom(address,data);
	
	wire duck_draw;
	wire [5:0] duck_data;
	wire [10:0] duckPos_x;
	wire [9:0] duckPos_y;
	wire collision;
	Ducks_Drawer #(
		.counterY_limit(260000),
		.counterX_limit(60000),
		.shouldIntercalate(0),
		.initial_posY(10'sd0),
		.initial_posX(-11'sd100),
		.uPOrDown(1)
		)DD(logicClk, reset,collision, hcount, vcount,duck_data, duck_draw, duckPos_x,duckPos_y);
	
	wire duck_draw2;
	wire [5:0] duck_data2;
	wire [10:0] duckPos_x2;
	wire [9:0] duckPos_y2;
	wire collision2;
	Ducks_Drawer #(
		.counterY_limit(260000),
		.counterX_limit(60000),
		.shouldIntercalate(0),
		.initial_posY(10'sd180),
		.initial_posX(-11'sd200),
		.uPOrDown(-1'sd1)
		)DD2(logicClk, reset,collision2, hcount, vcount,duck_data2, duck_draw2, duckPos_x2,duckPos_y2);
	
	wire duck_draw3;
	wire [5:0] duck_data3;
	wire [10:0] duckPos_x3;
	wire [9:0] duckPos_y3;
	wire collision3;
	Ducks_Drawer #(
		.counterY_limit(260000),
		.counterX_limit(70000),
		.shouldIntercalate(1),
		.initial_posY(10'sd110),
		.initial_posX(-11'sd50),
		.uPOrDown(1'sd1)
		)DD3(logicClk, reset,collision3, hcount, vcount,duck_data3, duck_draw3, duckPos_x3,duckPos_y3);
	
	wire duck_draw4;
	wire [5:0] duck_data4;
	wire [10:0] duckPos_x4;
	wire [9:0] duckPos_y4;
	wire collision4;
	Ducks_Drawer #(
		.counterY_limit(260000),
		.counterX_limit(80000),
		.shouldIntercalate(1),
		.initial_posY(10'sd70),
		.initial_posX(-11'sd400),
		.uPOrDown(1'sd1)
		)DD4(logicClk, reset,collision4, hcount, vcount,duck_data4, duck_draw4, duckPos_x4,duckPos_y4);
	
	wire [5:0] gun_data;
	wire gun_drawer;
	wire [9:0] pos_x;
	wire [2:0] contador_led;
	reg [2:0]bullet_counter;
	Gun g(logicClk, reset, hcount, vcount, izq, der,bullet_counter, gun_data, gun_drawer, pos_x);
	
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
	wire fire_up= bullet_counter==0? 0: fire;
	Shot_Builder SB(logicClk, fire_up,reset, pos_x, position_y1, position_x1,position_y2, position_x2,position_y3, position_x3,position_y4, position_x4,position_y5, position_x5,position_y6, position_x6,position_y7, position_x7,position_y8, position_x8,contador_led);
	 
	wire shot_drawer2;
	wire shot_drawer3;	 
	wire shot_drawer4; 
	wire shot_drawer5; 
	wire shot_drawer6; 
	wire shot_drawer7; 
	wire shot_drawer8;
	Bullet_Drawer BD1(logicClk, reset, hcount, vcount, position_x1, position_y1, shot_drawer);
	Bullet_Drawer BD2(logicClk, reset, hcount, vcount, position_x2, position_y2, shot_drawer2);
	Bullet_Drawer BD3(logicClk, reset, hcount, vcount, position_x3, position_y3, shot_drawer3);
	Bullet_Drawer BD4(logicClk, reset, hcount, vcount, position_x4, position_y4, shot_drawer4);
	Bullet_Drawer BD5(logicClk, reset, hcount, vcount, position_x5, position_y5, shot_drawer5);
	Bullet_Drawer BD6(logicClk, reset, hcount, vcount, position_x6, position_y6, shot_drawer6);
	Bullet_Drawer BD7(logicClk, reset, hcount, vcount, position_x7, position_y7, shot_drawer7);
	Bullet_Drawer BD8(logicClk, reset, hcount, vcount, position_x8, position_y8, shot_drawer8);
	
	wire [9:0]bulletPosition_y;
	wire [10:0] bulletPosition_x;
	Collision_Control CC(clk50mhz, reset, 
	position_y1,
	position_x1,
	position_y2,
	position_x2,
	position_y3,
	position_x3,
	position_y4,
	position_x4,
	position_y5,
	position_x5,
	position_y6,
	position_x6,
	position_y7,
	position_x7,
	position_y8,
	position_x8,
	bulletPosition_y,
	bulletPosition_x);
	
	Comparator C(duckPos_x, duckPos_y, bulletPosition_y, bulletPosition_x, collision);
	Comparator C2(duckPos_x2, duckPos_y2, bulletPosition_y, bulletPosition_x, collision2);
	Comparator C3(duckPos_x3, duckPos_y3, bulletPosition_y, bulletPosition_x, collision3);
	Comparator C4(duckPos_x4, duckPos_y4, bulletPosition_y, bulletPosition_x, collision4);
	wire collisions = collision || collision2 ||collision3 ||collision4; 
	
	wire draw;
	wire [5:0]data;
	Control_Drawer CD(clk50mhz, 
	duck_draw,duck_draw2,duck_draw3,duck_draw4, 
	gun_drawer,
	shot_drawer,shot_drawer2,shot_drawer3,shot_drawer4,shot_drawer5,shot_drawer6,shot_drawer7,shot_drawer8, 
	duck_data,duck_data2,duck_data3,duck_data4, gun_data,
	data, draw);
	
	VGA_LOGIC vga(vga_clk,data,draw,red_out,green_out,blue_out,hsync,vsync,hcount, vcount);
	reg hasCollisioned;
	reg fired;
	always @(posedge vga_clk)
	begin
		if(collisions) begin
			hasCollisioned=1;
		end
		if(!collisions && hasCollisioned)begin
			hasCollisioned=0;
			led = led+1;
		end
		contador = contador+1;
		if(contador >=24000000)begin
			if(segs<30)begin
				segs = segs+1;
			end
			contador=0;
		end
		if(reload) begin
			bullet_counter=4;
		end
		if(fire) begin
			fired = 1;
		end
		if(!fire && fired)begin
			fired=0;
			if(bullet_counter>0)begin
				bullet_counter = bullet_counter-1;
			end
		end
		if(reset)begin
			fired=0;
			bullet_counter=4;
			segs=0;
			led=0;
			hasCollisioned=0;
			contador=0;
		end
		/*
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
