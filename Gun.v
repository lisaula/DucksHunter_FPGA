`timescale 1ns / 1ps
module Gun(
	input clk,
	input reset,
	input[9:0]hcount,
	input[9:0]vcount,
	input izq,
	input der,
	input [2:0] bullet_counter,
	output reg [5:0]data,
	output reg draw,
	output reg [9:0] pos_x
    );
	reg [9:0] offset;
	reg [15:0]contador;
	always @(posedge clk)
	begin		
		draw = 0;
		if(vcount>434 && vcount <=465) begin
			if(hcount >= (offset + 26) && hcount <=(offset + 36))begin
				data = 0;
				draw=1;
				pos_x = offset + 26;
			end
		end
		
		if(vcount>465 && vcount <480)
		begin
			if(hcount >=(offset) && hcount <=(offset+62))
			begin
				draw=1;
				data = 0;
			end
		end
		if(vcount>470 && vcount <475)
		begin
			if(bullet_counter>0)begin
				if(hcount>=(offset +14) && hcount <=(offset+19))begin
					data = 6'b010100;
					draw=1;
				end
			end
			if(bullet_counter>1)begin
				if(hcount>=(offset +24) && hcount <=(offset+29))begin
					data = 6'b010100;
					draw=1;
				end
			end
			if(bullet_counter>2)begin
				if(hcount>=(offset +34) && hcount <=(offset+39))begin
					data = 6'b010100;
					draw=1;
				end
			end
			if(bullet_counter>3)begin
				if(hcount>=(offset +44) && hcount <=(offset+49))begin
					data = 6'b010100;
					draw=1;
				end
			end
		end
		
		contador = contador +1;
		if(contador >=50000) begin
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
