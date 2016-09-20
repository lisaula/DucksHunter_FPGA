`timescale 1ns / 1ps
module Ducks_Rom(
	input [14:0] address,
	output reg [5:0] data
    );
	 
	reg [5:0] rom_content [0:32767];
	
	always @(address)
		data = rom_content[address];
		
	initial begin
		$readmemh("Psyduck.mif",rom_content,0,32767);
	end


endmodule
