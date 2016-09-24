`timescale 1ns / 1ps

module Shot_Builder(
	input clk,
	input fire, 
	input reset,
	input [9:0] pos_x,
	output signed [9:0]position_y,
	output [9:0] position_x,
	output reg [2:0] contador_balas
    );
	
		//addresses
	reg [2:0]new_address;
	reg [2:0]address;
	
	//arrays
	reg signed [9:0] Y_Positions[0:7];
	reg [9:0] X_Positions[0:7];
	reg valid[0:7];
	
	//variables
	reg shouldInstantiate;
	integer i;
	wire valid_Bit = valid[new_address];
	wire validBit2 = valid[address];
	
	
	//---------------------debuggin------------------------
	reg [2:0] debug_address;
	wire bitDebuggin = valid[debug_address];
	reg fin;
	//------------------------
	//outputs
	assign position_y = Y_Positions[address];
	assign position_x =  X_Positions[address];
	
	reg instantiate;	
	reg [16:0] contador;
	reg inc;
	always @(posedge clk)  begin
	//-----------------debuggin-------------------
		if(bitDebuggin) begin
			contador_balas= contador_balas+1;
		end
		
		if(debug_address ==7)begin
			fin = 1;
		end else begin
			debug_address = debug_address+1;
		end
	//---------------------------------------
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
			shouldInstantiate =1;
		end
		if(!fire && shouldInstantiate) begin
			instantiate = 1;
			valid[new_address]= 1'b1;
			Y_Positions[new_address]=10'sd4;//should be 424
			X_Positions[new_address]=pos_x;
			shouldInstantiate =0;
		end
		
		if(inc) begin
			//------------------------
			if(fin)begin
				debug_address=0;
				fin = 0;
			end
			//------------------------
			inc = 0;
			if(position_y >=$signed(1)) begin
				Y_Positions[address]=position_y-1;
			end else begin
				valid[address]= 1'b0;
			end
		end
			
		if(reset) begin
		//-------------------------
		fin=0;
		debug_address=0;
		contador_balas=0;
		//-------------------------
			new_address = 0;
			shouldInstantiate=0;
			address= 0;
			inc = 0;
			instantiate = 0;
			contador = 0;
			for (i=0; i<8; i=i+1) valid[i] = 1'b0;
		end
	 end
	
endmodule
