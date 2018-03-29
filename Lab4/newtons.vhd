LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.numeric_std.all;
USE ieee.std_logic_unsigned.all;

entity newtons is
  port(clk : in  std_logic;
	     x	 : in  std_logic_vector(35 downto 0);
	     y0	 : in  std_logic_vector(35 downto 0);
	     y	 : out std_logic_vector(35 downto 0));
end entity;

architecture newtons_arch of newtons is

  signal y1         : unsigned(35 downto 0);
  signal y1_long 	  : unsigned(143 downto 0);
  signal y0_squared : unsigned(71 downto 0);
  signal y0_mult_x  : unsigned(107 downto 0);
  signal y0_integer : unsigned(107 downto 0);
  signal y0_mult    : unsigned(143 downto 0);

  begin

    y0_squared <= unsigned(y0) * unsigned(y0);
    y0_mult_x <= unsigned(x) * y0_squared;
    y0_integer <= "000000000000000000000000000000000000000000000000000011000000000000000000000000000000000000000000000000000000" - y0_mult_x;
    y0_mult <= y0_integer * unsigned(y0);
    y1_long <= shift_right(y0_mult, 1);
    y1 <= y1_long(89 downto 54);
    y <= std_logic_vector(y1);
end architecture;
