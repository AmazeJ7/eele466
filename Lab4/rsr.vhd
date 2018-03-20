LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.numeric_std.all;

entity rsr is
  port(clk            : in   std_logic;
       rsr_in   : in   std_logic_vector (35 downto 0);
       rsr_out : out std_logic_vector (35 downto 0));
end entity;

architecture rsr_arch of rsr is

  component init_guess
    port( clk	: in std_logic;
	  x	: in std_logic_vector(35 downto 0);
	  y0	: out std_logic_vector(35 downto 0));
  end component;

  component newtons
    port( clk	: in std_logic;
	  x	: in std_logic_vector(35 downto 0);
	  y0	: in std_logic_vector(35 downto 0);
	  y	: out std_logic_vector(35 downto 0));
  end component;
  
  signal y0_temp : std_logic_vector(35 downto 0);

  begin

    y0_map: init_guess port map (clk, rsr_in, y0_temp);
    newtons_map: newton port map (clk, rsr_in, y0_temp, rsr_out);

end architecture;
