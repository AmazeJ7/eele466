library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity y0 is
    port(clk      : in  std_logic;
	 y0_input : in  std_logic_vector (35 downto 0);
         y0 	  : out std_logic_vector (35 downto 0));
end entity;

architecture y0_arch of y0 is

  component rom
    port(address : in  std_logic_vector (7 downto 0);
	 clock	 : in  std_logic  := '1';
	 q	 : out std_logic_vector (7 downto 0));
  end component;

  component lzc
    port(clk        : in  std_logic;
         lzc_vector : in  std_logic_vector (35 downto 0);
         lzc_count  : out std_logic_vector ( 5 downto 0));
  end component;

  signal zeros : std_logic_vector (5 downto 0);
  signal addr, data_out : std_logic_vector (7 downto 0);
  signal B, A : signed (5 downto 0);

  begin
    
    A0: rom port map (addr, clk, data_out);
    A1: lzc port map (clk, y0_input, zeros);

    process (clk)
      begin
	B <= 17 - signed(zeros);
     	if B(0) = '0' then
	  A <= shift_left(B, 1) - shift_right(B, 1);
	elsif B(0) = '1' then 
	  A <= shift_left(B, 1) - shift_right(B, 1) + '0.5';
    end process;
     	
	
end architecture;
