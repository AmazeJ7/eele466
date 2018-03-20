LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.numeric_std.all;
USE ieee.std_logic_unsigned.all;

entity newtons is
  port( clk	: in std_logic;
	x	: in std_logic_vector(35 downto 0);
	y0	: in std_logic_vector(35 downto 0);
	y	: out std_logic_vector(35 downto 0));
end entity;

architecture newtons_arch of newtons is

  signal y1            : unsigned(35 downto 0);
  signal y1_long 	   : unsigned(143 downto 0);
  signal y0_sq         : unsigned(71 downto 0);
  signal y0_x          : unsigned(107 downto 0);
  signal y0_int        : unsigned(107 downto 0);
  signal y0_mult       : unsigned(143 downto 0); 

  begin

    MATH : process(clk)
      begin
        if(rising_edge(clk)) then
          y0_sq <= unsigned(y0) * unsigned(y0);
          y0_x <= unsigned(x) * y0_sq;
          y0_int <= "000000000000000000000000000000000000000000000000000011000000000000000000000000000000000000000000000000000000" - y0_x;
          y0_mult <= y0_int * unsigned(y0);
          y1_long <= shift_right(y0_mult, 1);
          y1 <= y1_long(89 downto 54);
        end if;
    end process;
    y <= std_logic_vector(y1);
end architecture;