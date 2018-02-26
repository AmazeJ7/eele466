library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.std_logic_unsigned.all;

entity mod_full_adder is 
	port(
		A, B, Cin : in  std_logic;
		S, P, G   : out std_logic);
end entity;

architecture mod_full_adder_arch of mod_full_adder is 

  begin
	
	P <= A xor B;
	G <= A and B;
	S <= (A xor B) xor Cin;
	
end architecture;
