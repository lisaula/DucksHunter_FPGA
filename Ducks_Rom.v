`timescale 1ns / 1ps
module Ducks_Rom(
	input [11:0] address,
	output reg [5:0] data
    );
	 
	reg [5:0] rom_content [0:4095];
	
	always @(address)
		data = rom_content[address];
		
	initial begin
		$readmemh("shootDuck.mif",rom_content,0,4095);
	end


endmodule
