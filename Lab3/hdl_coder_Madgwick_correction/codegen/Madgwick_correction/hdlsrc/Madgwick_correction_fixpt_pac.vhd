-- -------------------------------------------------------------
-- 

-- File Name: C:\466\JG\Lab3\hdl_coder_Madgwick_correction\codegen\Madgwick_correction\hdlsrc\Madgwick_correction_fixpt_pac.vhd
-- Created: 2018-02-06 13:33:37
-- 
-- Generated by MATLAB 9.3, MATLAB Coder 3.4 and HDL Coder 3.11
-- 
-- 
-- -------------------------------------------------------------


LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

PACKAGE Madgwick_correction_fixpt_pac IS
  TYPE vector_of_unsigned8 IS ARRAY (NATURAL RANGE <>) OF unsigned(7 DOWNTO 0);
  TYPE vector_of_signed15 IS ARRAY (NATURAL RANGE <>) OF signed(14 DOWNTO 0);
  TYPE vector_of_signed30 IS ARRAY (NATURAL RANGE <>) OF signed(29 DOWNTO 0);
END Madgwick_correction_fixpt_pac;

