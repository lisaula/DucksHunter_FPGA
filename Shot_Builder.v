`timescale 1ns / 1ps

module Shot_Builder(
	input clk,
	input fire, 
	input reset,
	input [9:0] pos_x,
	output signed [9:0]position_y1,
	output [9:0] position_x1,
	output signed [9:0]position_y2,
	output [9:0] position_x2,
	output signed [9:0]position_y3,
	output [9:0] position_x3,
	output signed [9:0]position_y4,
	output [9:0] position_x4,
	output signed [9:0]position_y5,
	output [9:0] position_x5,
	output signed [9:0]position_y6,
	output [9:0] position_x6,
	output signed [9:0]position_y7,
	output [9:0] position_x7,
	output signed [9:0]position_y8,
	output [9:0] position_x8,
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
	wire signed [9:0]position_y;
	assign position_y = Y_Positions[address];
	
	//---------------------debuggin------------------------
	reg [2:0] debug_address;
	wire bitDebuggin = valid[debug_address];
	reg fin;
	//------------------------
	//outputs
	assign position_y1 = Y_Positions[3'd0];
	assign position_x1 =  X_Positions[3'd0];
	assign position_y2 = Y_Positions[3'd1];
	assign position_x2 =  X_Positions[3'd1];
	assign position_y3 = Y_Positions[3'd2];
	assign position_x3 =  X_Positions[3'd2];
	assign position_y4 = Y_Positions[3'd3];
	assign position_x4 =  X_Positions[3'd3];
	assign position_y5 = Y_Positions[3'd4];
	assign position_x5 =  X_Positions[3'd4];
	assign position_y6 = Y_Positions[3'd5];
	assign position_x6 =  X_Positions[3'd5];
	assign position_y7 = Y_Positions[3'd6];
	assign position_x7 =  X_Positions[3'd6];
	assign position_y8 = Y_Positions[3'd7];
	assign position_x8 =  X_Positions[3'd7];
	
	reg instantiate;	
	reg [15:0] contador;
	reg decrementar;
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
		
		//if(!validBit2) begin
//			address= address +1;
		//end
	
		contador = contador + 1;
		if(contador >= 60000) begin
			contador = 0;
			decrementar=1;
		end
		
		if(fire) begin
			shouldInstantiate =1;
		end
		if(!fire && shouldInstantiate) begin
			instantiate = 1;
			valid[3'd0]= 1'b1;//should be new_address
			Y_Positions[3'd0]=10'sd424;//should be 424
			X_Positions[3'd0]=pos_x;
			shouldInstantiate =0;
		end
		
		if(decrementar) begin
			//------------------------
			if(fin)begin
				debug_address=0;
				fin = 0;
			end
			//------------------------
			//if(validBit2) begin
			//$display("%d",position_y);
				if(position_y1 >=$signed(-10)) begin
					Y_Positions[3'd0]=position_y1-1;
				end else begin
					valid[3'd0]= 1'b0;
				end
				if(position_y2 >=$signed(-10)) begin
					Y_Positions[3'd1]=position_y2-1;
				end else begin
					valid[3'd1]= 1'b0;
				end
				if(position_y3 >=$signed(-10)) begin
					Y_Positions[3'd2]=position_y3-1;
				end else begin
					valid[3'd2]= 1'b0;
				end
				if(position_y4 >=$signed(-10)) begin
					Y_Positions[3'd3]=position_y4-1;
				end else begin
					valid[3'd3]= 1'b0;
				end
				if(position_y5 >=$signed(-10)) begin
					Y_Positions[3'd4]=position_y5-1;
				end else begin
					valid[3'd4]= 1'b0;
				end
				if(position_y6 >=$signed(-10)) begin
					Y_Positions[3'd5]=position_y6-1;
				end else begin
					valid[3'd5]= 1'b0;
				end
				if(position_y7 >=$signed(-10)) begin
					Y_Positions[3'd6]=position_y7-1;
				end else begin
					valid[3'd6]= 1'b0;
				end
				if(position_y8 >=$signed(-10)) begin
					Y_Positions[3'd7]=position_y8-1;
				end else begin
					valid[3'd7]= 1'b0;
				end
			//end
			decrementar=0;
		end
		address= address +1;
		if(reset) begin
		//-------------------------
		fin=0;
		debug_address=0;
		contador_balas=0;
		//-------------------------
			decrementar=0;
			new_address = 0;
			shouldInstantiate=0;
			address= 0;
			instantiate = 0;
			contador = 0;
			for (i=0; i<8; i=i+1) valid[i] = 1'b0;
		end
	 end
	
endmodule
