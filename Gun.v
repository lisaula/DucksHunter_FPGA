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
	
	reg [9:0] offset;
	reg [19:0]contador;
	always @(posedge clk)
	begin		
		draw = 0;
		if(vcount>434 && vcount <=465) begin
			if(hcount >= (offset + 26) && hcount <=(offset + 36))begin
				data = 0;
				draw=1;
			end
		end
		
		if(vcount>465 && vcount <480)
		begin
			if(hcount >=(offset) && hcount <=(offset+62))
			begin
				data = 0;
				draw=1;
			end
		end
		contador = contador +1;
		if(contador >=100000) begin
			contador = 0;
			if(izq) begin
				if(offset >0) begin
					offset = offset - 1;
				end
			end else if(der) begin
				if(offset < 578) begin
					offset = offset + 1;
				end
			end
		end
		if(reset)begin
			offset =0;
		end
	end
endmodule
