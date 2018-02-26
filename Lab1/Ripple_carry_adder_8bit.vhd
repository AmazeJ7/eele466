library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.std_logic_unsigned.all;

entity Ripple_carry_adder_8bit is 
	port(
		A, B 		: in std_logic_vector(7 downto 0);
		Subtraction : in std_logic;
		S 			: out std_logic_vector(7 downto 0);
		Cout 		: out std_logic);
end entity;

architecture Ripple_carry_adder_8bit_arch of Ripple_carry_adder_8bit is 

  signal C : std_logic_vector(7 downto 0);
  signal newB : std_logic_vector(7 downto 0);
  
  component Full_adder is 
      port(
		A, B, Cin : in std_logic;
		S, Cout : out std_logic);
  end component;
  
  begin
	
	newB(0) <= B(0) xor Subtraction;
	newB(1) <= B(1) xor Subtraction;
	newB(2) <= B(2) xor Subtraction;
	newB(3) <= B(3) xor Subtraction;
	newB(4) <= B(4) xor Subtraction;
	newB(5) <= B(5) xor Subtraction;
	newB(6) <= B(6) xor Subtraction;
	newB(7) <= B(7) xor Subtraction;
	FA0 : Full_adder port map (A => A(0), B => newB(0), Cin => Subtraction, S => S(0), Cout => C(0));
	FA1 : Full_adder port map (A => A(1), B => newB(1), Cin => C(0), S => S(1), Cout => C(1));
	FA2 : Full_adder port map (A => A(2), B => newB(2), Cin => C(1), S => S(2), Cout => C(2));
	FA3 : Full_adder port map (A => A(3), B => newB(3), Cin => C(2), S => S(3), Cout => C(3));
	FA4 : Full_adder port map (A => A(4), B => newB(4), Cin => C(3), S => S(4), Cout => C(4));
	FA5 : Full_adder port map (A => A(5), B => newB(5), Cin => C(4), S => S(5), Cout => C(5));
	FA6 : Full_adder port map (A => A(6), B => newB(6), Cin => C(5), S => S(6), Cout => C(6));
	FA7 : Full_adder port map (A => A(7), B => newB(7), Cin => C(6), S => S(7), Cout => C(7));
	Cout <= C(7);
	
end architecture;
