library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity newtons is
  port(y0 : in   std_logic_vector (35 downto 0);
          x   : in   std_logic_vector (35 downto 0);
          y   : out std_logic_vector (35 downto 0));
end entity;

architecture newtons_arch of newtons is

signal y0_temp, y1, y2, y3, y4, y5       : signed(35 downto 0);
signal y0_sq, y1_sq, y2_sq, y3_sq, y4_sq : signed(71 downto 0);
signal three                             : signed(35 downto 0) := "000000000000000011000000000000000000";

begin

  y0_sq <= (signed(y0) * signed(y0));
  y0_sq <= signed(x) * y0_sq(53 downto 18);
  y0_temp <= three - y0_sq(53 downto 18);
  y0_sq <= y0_temp * signed(y0);
  y1 <= shift_right(y0_sq(53 downto 18), 1);

  y1_sq <= signed(y1) * signed(y1);
  y1_sq <= signed(x) * y1_sq(53 downto 18);
  y1 <= three - y1_sq(53 downto 18);
  y1_sq <= y1 * signed(y1);
  y2 <= shift_right(y1_sq(53 downto 18), 1);

  y2_sq <= signed(y2) * signed(y2);
  y2_sq <= signed(x) * y2_sq(53 downto 18);
  y2 <= three - y2_sq(53 downto 18);
  y2_sq <= y2 * signed(y2);
  y3 <= shift_right(y2_sq(53 downto 18), 1);

  y3_sq <= signed(y3) * signed(y3);
  y3_sq <= signed(x) * y3_sq(53 downto 18);
  y3 <= three - y3_sq(53 downto 18);
  y3_sq <= y3 * signed(y3);
  y4 <= shift_right(y3_sq(53 downto 18), 1);

  y4_sq <= signed(y4) * signed(y4);
  y4_sq <= signed(x) * y4_sq(53 downto 18);
  y4 <= three - y4_sq(53 downto 18);
  y4_sq <= y4 * signed(y4);
  y5 <= shift_right(y4_sq(53 downto 18), 1);

  y <= std_logic_vector(y5);

end architecture;
