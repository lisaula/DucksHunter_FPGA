`timescale 1ns / 1ps
	module VGA_LOGIC(
	input clk,
   input [5:0]rgb_in,
	input draw,
	output reg [1:0]red_out,
   output reg [1:0]green_out,
   output reg [1:0]blue_out,
	output reg hsync,
	output reg vsync,
	output [9:0]hor_count,
	output [9:0]ver_count
	);
 reg [9:0]hcount;
 reg [9:0]vcount;
 reg [5:0]color;
 reg [6:0]contColumn;

 assign hor_count = hcount;
 assign ver_count = vcount;
 always @(posedge clk)
 begin 
	if(hcount == 799)
	begin
		hcount =0;
		if(vcount ==524)
		begin
			vcount =0;
		end else begin
			vcount = vcount+1;
		end
	end else begin
		hcount = hcount +1;
	end
	
	if(vcount >= 490 && vcount <492) begin
		vsync =0;
	end else begin
		vsync =1;
	end
	
	if(hcount >=656 && hcount <752) begin
		hsync =0;
	end else begin
		hsync =1;
	end
	
	if(hcount < 640 && vcount <480) begin
		red_out ={color[5], color[4]};
		green_out = {color[3], color[2]};
		blue_out={color[1], color[0]};
	end else begin
		red_out =2'b0;
		green_out = 2'b0;
		blue_out=2'b0;
	end
	if(hcount < 640 && vcount <480)
	begin
		//seting background
		if(vcount < 240) begin
			color = 6'b001111;
		end
		else if(vcount < 264)begin
			color = 6'b001100;
		end else begin
			color = 6'b001000;
		end
		
		//setting image CarBlue
		if(draw)
		begin
			color = rgb_in;
		end
	end
 end
 
 initial 
	begin
	hcount = 0;
	vcount=0;
	color = 6'b0;
	contColumn = 7'b0;
	end
endmodule
