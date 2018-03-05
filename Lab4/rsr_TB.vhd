library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity rsr_TB is
end entity;

architecture rsr_TB_arch of rsr_TB is

  component rsr is
    port( clk	: in std_logic;
	  rsr_in	: in std_logic_vector(35 downto 0);
	  rsr_out 	: out std_logic_vector(35 downto 0));
  end component;

  signal x_TB, y_TB : std_logic_vector(35 downto 0);
  signal clk_TB      : std_logic;

  begin

  DUT : rsr port map (clk => clk_TB, rsr_in => x_TB, rsr_out => y_TB);

  CLK_STIM : process
    begin
      clk_TB <= '0'; wait for 10 ns;
      clk_TB <= '1'; wait for 10 ns;
  end process;

  TEST : process
    begin
      x_TB <= "000000000001011101001000000000000000"; wait;
  end process;
end architecture;