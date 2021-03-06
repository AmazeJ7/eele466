library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity y0 is
  port(clk : in  std_logic;
       x   : in  std_logic_vector (35 downto 0);
       y0  : out std_logic_vector (35 downto 0));
end entity;

architecture y0_arch of y0 is

  component rom
    port(address : in  std_logic_vector (7 downto 0);
         clock   : in  std_logic  := '1';
         q       : out std_logic_vector (17 downto 0));
  end component;

  component lzc
    port(clk   	    : in  std_logic;
         lzc_vector : in  std_logic_vector (35 downto 0);
         lzc_count  : out std_logic_vector ( 5 downto 0));
  end component;

  signal zeros              : std_logic_vector (5 downto 0);
  signal addr               : std_logic_vector (7 downto 0);
  signal B, A               : signed (6 downto 0);
  signal B_temp 	        : signed (5 downto 0);
  signal Xa, Xb             : unsigned (35 downto 0);
  signal Xb_rom, data_out   : std_logic_vector (17 downto 0);
  signal y0_temp, y0_temp3  : unsigned(71 downto 0);
  signal y0_temp2, y0_temp4 : unsigned(35 downto 0);
  constant seventeen        : integer := 17;

    begin

    A0: lzc port map (clk, x, zeros);
    A1: rom port map (addr, clk, data_out);

    B_temp <= (to_signed(seventeen, 6) - signed(zeros));
    B <= B_temp(5) & B_temp(5 downto 0);

    P1: process (clk)
      begin
        if rising_edge(clk) then
          if B(0) = '0' then
            A <= shift_right(B, 1) - shift_left(B, 1);
          elsif B(0) = '1' then
            A <= shift_right((B + "0000001"), 1) - shift_left(B, 1);
          end if;
		end if;
	end process;
	
    Xa <= unsigned(x) sll to_integer(A);
    Xb <= unsigned(x) srl to_integer(B);
    addr <= std_logic_vector(Xb(17 downto 10));
    Xb_rom <= data_out;
    y0_temp <= Xa * (unsigned("00000000000000000" & Xb_rom & "0"));
    y0_temp2 <= y0_temp(53 downto 18);
	y0_temp3 <= y0_temp2 * "000000000000000000101101010000010100";

    P2: process (clk)
      begin 
	    if rising_edge(clk) then 
		  if B(0) = '0' then
            y0_temp4 <= y0_temp2;
          elsif B(0) = '1' then
            y0_temp4 <= y0_temp3(53 downto 18);
          end if;
        end if;
    end process;

    y0 <= std_logic_vector(y0_temp4);

end architecture;
