library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.std_logic_unsigned.all;

entity Full_adder is 
	port(
		A, B, Cin : in std_logic;
		S, Cout : out std_logic);
end entity;

architecture Full_adder_arch of Full_adder is 

  begin
	
	S <= (A xor B) xor Cin;
	Cout <= (A and B) or ((A xor B) and Cin);
	
end architecture;
