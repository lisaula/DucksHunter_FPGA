`timescale 1ns / 1ps
module tb_duckDrawer(
    );
	 
	reg clk;
	reg reset;
	reg[9:0]hcount;
	reg[9:0]vcount;
	wire[5:0]data;
	wire draw;
	Ducks_Drawer DD(clk, reset, hcount, vcount, data,draw);
	
	initial 
	begin
		clk = 0;
		reset =1;
		hcount = 0;
		vcount = 0;
		#20;
		reset = 0;
	end
	
	always begin
		#10;
		clk = !clk;
	end
	
	always @(posedge clk) begin
		hcount = hcount +1;
		if(hcount >640) begin
			vcount = vcount +1;
			hcount =0;
		end
		if(vcount >480)begin
			vcount = 0;
		end
	end
endmodule
