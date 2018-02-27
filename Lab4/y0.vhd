library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity y0 is
    port(clk   : in  std_logic;
         x     : in  std_logic_vector (53 downto 0);
         y0    : out std_logic_vector (53 downto 0));
end entity;

architecture y0_arch of y0 is

  component rom
    port(address : in  std_logic_vector (7 downto 0);
         clock   : in  std_logic  := '1';
         q       : out std_logic_vector (7 downto 0));
  end component;

  component lzc
    port(clk        : in  std_logic;
         lzc_vector : in  std_logic_vector (35 downto 0);
         lzc_count  : out std_logic_vector ( 5 downto 0));
  end component;

  signal zeros          : std_logic_vector (5 downto 0);
  signal addr, data_out : std_logic_vector (7 downto 0);
  signal B, A           : signed (13 downto 0);
  signal Xa, Xb         : signed (53 downto 0);

  begin

    A0: lzc port map (clk, x (53 downto 18), zeros);
    A1: rom port map (std_logic_vector(Xb(17 downto 10)), clk, data_out);

    process (clk)
      begin
        B(13 downto 8) <= 17 - signed(zeros);
        if B(0) = '0' then
          A <= shift_left(B, 1) - shift_right(B, 1);
        elsif B(0) = '1' then
          A <= "1000000" + shift_left(B, 1) - shift_right(B, 1);
        end if;
        Xa <= shift_left(signed(x), to_integer(A));
        Xb <= shift_left(signed(x), to_integer(B));
        Xb(53 downto 46) <= signed(data_out);
        if B(0) = '0' then
          y0 <= std_logic_vector(signed(Xa) * signed(Xb));
        elsif B(0) = '1' then
          y0 <= std_logic_vector(signed(Xa) * signed(Xb) * "100000000000000000");
        end if;
    end process;
	
end architecture;
