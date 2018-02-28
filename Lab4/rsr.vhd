library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity rsr is
  port(clk        : in  std_logic;
       rsr_input  : in  std_logic_vector (35 downto 0);
       rsr_output : out std_logic_vector (35 downto 0));
end entity;

architecture rsr_arch of rsr is

  component y0
    port(clk : in  std_logic;
         x   : in  std_logic_vector(35 downto 0);
         y0  : out std_logic_vector(35 downto 0));
  end component;

  component newtons
    port(y0 : in  std_logic_vector(35 downto 0);
         y  : out std_logic_vector(35 downto 0));
  end component;

  signal y0out : std_logic_vector(35 downto 0);

  begin

    A0: y0 port map (clk, rsr_input, y0out);
    A1: newtons port map (y0out, rsr_output);

end architecture;
