`timescale 1ns / 1ps

module Shot_Builder(
	input clk,
	input fire, 
	input reset,
	input [9:0] pos_x,
	output signed [9:0]position_y,
	output [9:0] position_x
    );
	 
	reg [5:0]new_address;
	reg [5:0]address;
	reg signed [9:0] Y_Positions[0:63];
	reg [9:0] X_Positions[0:63];
	reg valid[0:63];
	integer i;
	
	wire valid_Bit = valid[new_address];
	wire validBit2 = valid[address];
	assign position_y = Y_Positions[address];
	assign position_x =  X_Positions[address];
	
	reg instantiate;	
	reg [16:0] contador;
	reg inc;
	always @(posedge clk)  begin
		if(instantiate) begin
			if(valid_Bit) begin
				new_address = new_address+1;
				instantiate=0;
			end
		end
		if(!validBit2) begin
			address= address +1;
		end
	
		contador = contador + 1;
		if(contador >= 60000) begin
			contador = 0;
			inc = 1;
		end
		if(fire) begin
			instantiate = 1;
			valid[new_address]= 1'b1;
			Y_Positions[new_address]=10'sd424;
			X_Positions[new_address]=pos_x;
		end
		
		if(inc) begin
			inc = 0;
			if(position_y >=$signed(-10)) begin
				Y_Positions[address]=position_y-1;
			end else begin
				valid[new_address]= 1'b0;
			end
		end
			
		if(reset) begin
			new_address = 0;
			address= 0;
			inc = 0;
			instantiate = 0;
			contador = 0;
			for (i=0; i<64; i=i+1) valid[i] = 1'b0;
		end
	 end
	
endmodule
