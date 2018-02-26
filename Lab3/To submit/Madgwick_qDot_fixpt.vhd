-- -------------------------------------------------------------
-- 
-- File Name: C:\466\JG\Lab3\hdl_coder_Madgwick_qDot\codegen\Madgwick_qDot\hdlsrc\Madgwick_qDot_fixpt.vhd
-- Created: 2018-02-06 13:05:25
-- 
-- Generated by MATLAB 9.3, MATLAB Coder 3.4 and HDL Coder 3.11
-- 
-- 
-- 
-- -------------------------------------------------------------
-- Rate and Clocking Details
-- -------------------------------------------------------------
-- Design base rate: 1
-- 
-- 
-- Clock Enable  Sample Time
-- -------------------------------------------------------------
-- ce_out        1
-- -------------------------------------------------------------
-- 
-- 
-- Output Signal                 Clock Enable  Sample Time
-- -------------------------------------------------------------
-- qdot1                         ce_out        1
-- qdot2                         ce_out        1
-- qdot3                         ce_out        1
-- qdot4                         ce_out        1
-- -------------------------------------------------------------
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Madgwick_qDot_fixpt
-- Source Path: Madgwick_qDot_fixpt
-- Hierarchy Level: 0
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Madgwick_qDot_fixpt IS
  PORT( clk                               :   IN    std_logic;
        reset_x                           :   IN    std_logic;
        clk_enable                        :   IN    std_logic;
        q0                                :   IN    std_logic_vector(13 DOWNTO 0);  -- ufix14_En14
        q1                                :   IN    std_logic_vector(13 DOWNTO 0);  -- ufix14_En14
        q2                                :   IN    std_logic_vector(13 DOWNTO 0);  -- ufix14_En14
        q3                                :   IN    std_logic_vector(13 DOWNTO 0);  -- ufix14_En14
        gx                                :   IN    std_logic_vector(13 DOWNTO 0);  -- sfix14_En7
        gy                                :   IN    std_logic_vector(13 DOWNTO 0);  -- sfix14_En7
        gz                                :   IN    std_logic_vector(13 DOWNTO 0);  -- sfix14_En7
        ce_out                            :   OUT   std_logic;
        qdot1                             :   OUT   std_logic_vector(13 DOWNTO 0);  -- sfix14_En7
        qdot2                             :   OUT   std_logic_vector(13 DOWNTO 0);  -- sfix14_En7
        qdot3                             :   OUT   std_logic_vector(13 DOWNTO 0);  -- sfix14_En7
        qdot4                             :   OUT   std_logic_vector(13 DOWNTO 0)  -- sfix14_En7
        );
END Madgwick_qDot_fixpt;


ARCHITECTURE rtl OF Madgwick_qDot_fixpt IS

  -- Signals
  SIGNAL enb                              : std_logic;
  SIGNAL q1_unsigned                      : unsigned(13 DOWNTO 0);  -- ufix14_En14
  SIGNAL tmp                              : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL tmp_1                            : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL p78tmp_cast                      : signed(15 DOWNTO 0);  -- sfix16_En14
  SIGNAL p78tmp_cast_1                    : signed(15 DOWNTO 0);  -- sfix16_En14
  SIGNAL gx_signed                        : signed(13 DOWNTO 0);  -- sfix14_En7
  SIGNAL q2_unsigned                      : unsigned(13 DOWNTO 0);  -- ufix14_En14
  SIGNAL gy_signed                        : signed(13 DOWNTO 0);  -- sfix14_En7
  SIGNAL q3_unsigned                      : unsigned(13 DOWNTO 0);  -- ufix14_En14
  SIGNAL gz_signed                        : signed(13 DOWNTO 0);  -- sfix14_En7
  SIGNAL tmp_2                            : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_3                            : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL multiplier_cast                  : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp              : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_4                            : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_5                            : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL tmp_6                            : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL tmp_7                            : signed(30 DOWNTO 0);  -- sfix31_En21
  SIGNAL multiplier_cast_1                : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp_1            : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_8                            : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_9                            : signed(30 DOWNTO 0);  -- sfix31_En21
  SIGNAL tmp_10                           : signed(30 DOWNTO 0);  -- sfix31_En21
  SIGNAL tmp_11                           : signed(44 DOWNTO 0);  -- sfix45_En35
  SIGNAL p75tmp_cast                      : signed(45 DOWNTO 0);  -- sfix46_En35
  SIGNAL tmp_12                           : signed(13 DOWNTO 0);  -- sfix14_En7
  SIGNAL qDot1_1                          : signed(13 DOWNTO 0);  -- sfix14_En7
  SIGNAL q0_unsigned                      : unsigned(13 DOWNTO 0);  -- ufix14_En14
  SIGNAL multiplier_cast_2                : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp_2            : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_13                           : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_14                           : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL multiplier_cast_3                : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp_3            : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_15                           : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_16                           : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_17                           : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_18                           : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL multiplier_cast_4                : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp_4            : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_19                           : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_20                           : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL tmp_21                           : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL tmp_22                           : signed(43 DOWNTO 0);  -- sfix44_En35
  SIGNAL p73tmp_cast                      : signed(44 DOWNTO 0);  -- sfix45_En35
  SIGNAL tmp_23                           : signed(13 DOWNTO 0);  -- sfix14_En7
  SIGNAL qDot2_1                          : signed(13 DOWNTO 0);  -- sfix14_En7
  SIGNAL multiplier_cast_5                : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp_5            : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_24                           : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_25                           : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL multiplier_cast_6                : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp_6            : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_26                           : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_27                           : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_28                           : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_29                           : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL multiplier_cast_7                : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp_7            : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_30                           : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_31                           : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL tmp_32                           : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL tmp_33                           : signed(43 DOWNTO 0);  -- sfix44_En35
  SIGNAL p71tmp_cast                      : signed(44 DOWNTO 0);  -- sfix45_En35
  SIGNAL tmp_34                           : signed(13 DOWNTO 0);  -- sfix14_En7
  SIGNAL qDot3_1                          : signed(13 DOWNTO 0);  -- sfix14_En7
  SIGNAL multiplier_cast_8                : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp_8            : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_35                           : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_36                           : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL multiplier_cast_9                : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp_9            : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_37                           : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_38                           : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_39                           : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_40                           : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL multiplier_cast_10               : signed(14 DOWNTO 0);  -- sfix15_En14
  SIGNAL multiplier_mul_temp_10           : signed(28 DOWNTO 0);  -- sfix29_En21
  SIGNAL tmp_41                           : signed(27 DOWNTO 0);  -- sfix28_En21
  SIGNAL tmp_42                           : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL tmp_43                           : signed(29 DOWNTO 0);  -- sfix30_En21
  SIGNAL tmp_44                           : signed(43 DOWNTO 0);  -- sfix44_En35
  SIGNAL p69tmp_cast                      : signed(44 DOWNTO 0);  -- sfix45_En35
  SIGNAL tmp_45                           : signed(13 DOWNTO 0);  -- sfix14_En7
  SIGNAL qDot4_1                          : signed(13 DOWNTO 0);  -- sfix14_En7

BEGIN
  q1_unsigned <= unsigned(q1);

  -- HDL code generation from MATLAB function: Madgwick_qDot_fixpt
  -- 
  -- %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  -- 
  --                                                                          %
  -- 
  --           Generated by MATLAB 9.3 and Fixed-Point Designer 6.0           %
  -- 
  --                                                                          %
  -- 
  -- %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  -- 
  -- Rate of change of quaternion from gyroscope
  -- 
  -- 'Madgwick_qDot_fixpt:9' fm = get_fimath();
  -- 
  
-- 'Madgwick_qDot_fixpt:11' qDot1 = fi(fi(0.5, 0, 14, 14, fm) * (fi_signed(fi_signed(fi_uminus(q1) * gx) - q2 * gy) 
  -- - q3 * gz), 1, 14, 7, fm)
  -- 
  -- 'Madgwick_qDot_fixpt:32' coder.inline( 'always' );
  -- 
  -- 'Madgwick_qDot_fixpt:33' if isfi( a )
  -- 
  -- 'Madgwick_qDot_fixpt:34' nt = numerictype( a );
  -- 
  -- 'Madgwick_qDot_fixpt:35' new_nt = numerictype( 1, nt.WordLength + 1, nt.FractionLength );
  -- 
  -- 'Madgwick_qDot_fixpt:36' y = -fi( a, new_nt, fimath( a ) );
  -- 
  -- 'Madgwick_qDot_fixpt:20' coder.inline( 'always' );
  -- 
  -- 'Madgwick_qDot_fixpt:21' if isfi( a ) && ~(issigned( a ))
  -- 
  -- 'Madgwick_qDot_fixpt:25' else
  -- 
  -- 'Madgwick_qDot_fixpt:26' y = a;
  -- 
  -- 'Madgwick_qDot_fixpt:20' coder.inline( 'always' );
  -- 
  -- 'Madgwick_qDot_fixpt:21' if isfi( a ) && ~(issigned( a ))
  -- 
  -- 'Madgwick_qDot_fixpt:25' else
  -- 
  -- 'Madgwick_qDot_fixpt:26' y = a;
  tmp <= signed(resize(q1_unsigned, 15));

  p78tmp_cast <= resize(tmp, 16);
  p78tmp_cast_1 <=  - (p78tmp_cast);
  tmp_1 <= p78tmp_cast_1(14 DOWNTO 0);

  gx_signed <= signed(gx);

  q2_unsigned <= unsigned(q2);

  gy_signed <= signed(gy);

  q3_unsigned <= unsigned(q3);

  gz_signed <= signed(gz);

  tmp_2 <= tmp_1 * gx_signed;

  tmp_3 <= resize(tmp_2, 30);

  multiplier_cast <= signed(resize(q2_unsigned, 15));
  multiplier_mul_temp <= multiplier_cast * gy_signed;
  tmp_4 <= multiplier_mul_temp(27 DOWNTO 0);

  tmp_5 <= resize(tmp_4, 30);

  tmp_6 <= tmp_3 - tmp_5;

  tmp_7 <= resize(tmp_6, 31);

  multiplier_cast_1 <= signed(resize(q3_unsigned, 15));
  multiplier_mul_temp_1 <= multiplier_cast_1 * gz_signed;
  tmp_8 <= multiplier_mul_temp_1(27 DOWNTO 0);

  tmp_9 <= resize(tmp_8, 31);

  tmp_10 <= tmp_7 - tmp_9;

  p75tmp_cast <= resize(tmp_10 & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 
    46);
  tmp_11 <= p75tmp_cast(44 DOWNTO 0);

  tmp_12 <= tmp_11(41 DOWNTO 28);

  enb <= clk_enable;

  qDot1_reg_process : PROCESS (clk, reset_x)
  BEGIN
    IF reset_x = '1' THEN
      qDot1_1 <= to_signed(16#0000#, 14);
    ELSIF rising_edge(clk) THEN
      IF enb = '1' THEN
        qDot1_1 <= tmp_12;
      END IF;
    END IF;
  END PROCESS qDot1_reg_process;


  qdot1 <= std_logic_vector(qDot1_1);

  q0_unsigned <= unsigned(q0);

  
-- 'Madgwick_qDot_fixpt:12' qDot2 = fi(fi(0.5, 0, 14, 14, fm) * ( fi_signed(q0 * gx + q2 * gz) - q3 * gy), 1, 14, 
  -- 7, fm)
  -- 
  -- 'Madgwick_qDot_fixpt:20' coder.inline( 'always' );
  -- 
  -- 'Madgwick_qDot_fixpt:21' if isfi( a ) && ~(issigned( a ))
  -- 
  -- 'Madgwick_qDot_fixpt:25' else
  -- 
  -- 'Madgwick_qDot_fixpt:26' y = a;
  multiplier_cast_2 <= signed(resize(q0_unsigned, 15));
  multiplier_mul_temp_2 <= multiplier_cast_2 * gx_signed;
  tmp_13 <= multiplier_mul_temp_2(27 DOWNTO 0);

  tmp_14 <= resize(tmp_13, 29);

  multiplier_cast_3 <= signed(resize(q2_unsigned, 15));
  multiplier_mul_temp_3 <= multiplier_cast_3 * gz_signed;
  tmp_15 <= multiplier_mul_temp_3(27 DOWNTO 0);

  tmp_16 <= resize(tmp_15, 29);

  tmp_17 <= tmp_14 + tmp_16;

  tmp_18 <= resize(tmp_17, 30);

  multiplier_cast_4 <= signed(resize(q3_unsigned, 15));
  multiplier_mul_temp_4 <= multiplier_cast_4 * gy_signed;
  tmp_19 <= multiplier_mul_temp_4(27 DOWNTO 0);

  tmp_20 <= resize(tmp_19, 30);

  tmp_21 <= tmp_18 - tmp_20;

  p73tmp_cast <= resize(tmp_21 & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 
    45);
  tmp_22 <= p73tmp_cast(43 DOWNTO 0);

  tmp_23 <= tmp_22(41 DOWNTO 28);

  qDot2_reg_process : PROCESS (clk, reset_x)
  BEGIN
    IF reset_x = '1' THEN
      qDot2_1 <= to_signed(16#0000#, 14);
    ELSIF rising_edge(clk) THEN
      IF enb = '1' THEN
        qDot2_1 <= tmp_23;
      END IF;
    END IF;
  END PROCESS qDot2_reg_process;


  qdot2 <= std_logic_vector(qDot2_1);

  
-- 'Madgwick_qDot_fixpt:13' qDot3 = fi(fi(0.5, 0, 14, 14, fm) * ( fi_signed(q0 * gy) - q1 * gz + q3 * gx), 1, 14, 
  -- 7, fm)
  -- 
  -- 'Madgwick_qDot_fixpt:20' coder.inline( 'always' );
  -- 
  -- 'Madgwick_qDot_fixpt:21' if isfi( a ) && ~(issigned( a ))
  -- 
  -- 'Madgwick_qDot_fixpt:25' else
  -- 
  -- 'Madgwick_qDot_fixpt:26' y = a;
  multiplier_cast_5 <= signed(resize(q0_unsigned, 15));
  multiplier_mul_temp_5 <= multiplier_cast_5 * gy_signed;
  tmp_24 <= multiplier_mul_temp_5(27 DOWNTO 0);

  tmp_25 <= resize(tmp_24, 29);

  multiplier_cast_6 <= signed(resize(q1_unsigned, 15));
  multiplier_mul_temp_6 <= multiplier_cast_6 * gz_signed;
  tmp_26 <= multiplier_mul_temp_6(27 DOWNTO 0);

  tmp_27 <= resize(tmp_26, 29);

  tmp_28 <= tmp_25 - tmp_27;

  tmp_29 <= resize(tmp_28, 30);

  multiplier_cast_7 <= signed(resize(q3_unsigned, 15));
  multiplier_mul_temp_7 <= multiplier_cast_7 * gx_signed;
  tmp_30 <= multiplier_mul_temp_7(27 DOWNTO 0);

  tmp_31 <= resize(tmp_30, 30);

  tmp_32 <= tmp_29 + tmp_31;

  p71tmp_cast <= resize(tmp_32 & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 
    45);
  tmp_33 <= p71tmp_cast(43 DOWNTO 0);

  tmp_34 <= tmp_33(41 DOWNTO 28);

  qDot3_reg_process : PROCESS (clk, reset_x)
  BEGIN
    IF reset_x = '1' THEN
      qDot3_1 <= to_signed(16#0000#, 14);
    ELSIF rising_edge(clk) THEN
      IF enb = '1' THEN
        qDot3_1 <= tmp_34;
      END IF;
    END IF;
  END PROCESS qDot3_reg_process;


  qdot3 <= std_logic_vector(qDot3_1);

  
-- 'Madgwick_qDot_fixpt:14' qDot4 = fi(fi(0.5, 0, 14, 14, fm) * ( fi_signed(q0 * gz + q1 * gy) - q2 * gx), 1, 14, 
  -- 7, fm)
  -- 
  -- 'Madgwick_qDot_fixpt:20' coder.inline( 'always' );
  -- 
  -- 'Madgwick_qDot_fixpt:21' if isfi( a ) && ~(issigned( a ))
  -- 
  -- 'Madgwick_qDot_fixpt:25' else
  -- 
  -- 'Madgwick_qDot_fixpt:26' y = a;
  multiplier_cast_8 <= signed(resize(q0_unsigned, 15));
  multiplier_mul_temp_8 <= multiplier_cast_8 * gz_signed;
  tmp_35 <= multiplier_mul_temp_8(27 DOWNTO 0);

  tmp_36 <= resize(tmp_35, 29);

  multiplier_cast_9 <= signed(resize(q1_unsigned, 15));
  multiplier_mul_temp_9 <= multiplier_cast_9 * gy_signed;
  tmp_37 <= multiplier_mul_temp_9(27 DOWNTO 0);

  tmp_38 <= resize(tmp_37, 29);

  tmp_39 <= tmp_36 + tmp_38;

  tmp_40 <= resize(tmp_39, 30);

  multiplier_cast_10 <= signed(resize(q2_unsigned, 15));
  multiplier_mul_temp_10 <= multiplier_cast_10 * gx_signed;
  tmp_41 <= multiplier_mul_temp_10(27 DOWNTO 0);

  tmp_42 <= resize(tmp_41, 30);

  tmp_43 <= tmp_40 - tmp_42;

  p69tmp_cast <= resize(tmp_43 & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0', 
    45);
  tmp_44 <= p69tmp_cast(43 DOWNTO 0);

  tmp_45 <= tmp_44(41 DOWNTO 28);

  qDot4_reg_process : PROCESS (clk, reset_x)
  BEGIN
    IF reset_x = '1' THEN
      qDot4_1 <= to_signed(16#0000#, 14);
    ELSIF rising_edge(clk) THEN
      IF enb = '1' THEN
        qDot4_1 <= tmp_45;
      END IF;
    END IF;
  END PROCESS qDot4_reg_process;


  qdot4 <= std_logic_vector(qDot4_1);

  ce_out <= clk_enable;

END rtl;

