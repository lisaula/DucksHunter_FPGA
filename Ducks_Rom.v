`timescale 1ns / 1ps
module Ducks_Rom(
	input [10:0] address,
	output reg [5:0] data
    );
	 
	reg [5:0] rom_content [0:2047];
	
	always @(address)
		data = rom_content[address];
		
	initial begin
		$readmemh("shootDuck_l.mif",rom_content,0,2047);
	end


endmodule
