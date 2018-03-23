LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.numeric_std.all;

entity rsr is
  port(clk     : in  std_logic;
       rsr_in  : in  std_logic_vector (35 downto 0);
       rsr_out : out std_logic_vector (35 downto 0));
end entity;

architecture rsr_arch of rsr is

  component y0
    port(clk : in  std_logic;
	       x	 : in  std_logic_vector(35 downto 0);
	       y0	 : out std_logic_vector(35 downto 0));
  end component;

  component newtons
    port(clk : in  std_logic;
	       x	 : in  std_logic_vector(35 downto 0);
	       y0	 : in  std_logic_vector(35 downto 0);
	       y	 : out std_logic_vector(35 downto 0));
  end component;

  signal y0_temp, newtons0, newtons1, newtons2, newtons3, newtons4, newtons5, newtons6 : std_logic_vector(35 downto 0);

  begin

    y0_map: y0 port map (clk, rsr_in, y0_temp);
    newtons0_map: newtons port map (clk, rsr_in, y0_temp, newtons0);
    newtons1_map: newtons port map (clk, rsr_in, newtons0, newtons1);
    newtons2_map: newtons port map (clk, rsr_in, newtons1, newtons2);
    newtons3_map: newtons port map (clk, rsr_in, newtons2, newtons3);
    newtons4_map: newtons port map (clk, rsr_in, newtons3, newtons4);
    newtons5_map: newtons port map (clk, rsr_in, newtons4, newtons5);
    newtons6_map: newtons port map (clk, rsr_in, newtons5, newtons6);
    newtons7_map: newtons port map (clk, rsr_in, newtons6, rsr_out);

end architecture;
