`timescale 1ns / 1ps
module Gun(
	input clk,
	input reset,
	input[9:0]hcount,
	input[9:0]vcount,
	input izq,
	input der,
	input fire,
	output reg [5:0]data,
	output reg draw
    );
	 
	reg signed [8:0] offset;
	
	always @(posedge clk)
	begin		
		draw = 0;
		if(vcount>465 && vcount <480)
		begin
			if(hcount >=(289 + offset) && hcount <=(382+offset))
			begin
				data = 0;
				draw=1;
			end
		end
			
		if(izq) begin
			if(offset >-289) begin
				offset = offset - 1;
			end
		end else if(der) begin
			if(offset < 258) begin
				offset = offset + 1;
			end
		end
		if(reset)begin
			offset =0;
		end
	end
endmodule
