%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                          %
%           Generated by MATLAB 9.3 and Fixed-Point Designer 6.0           %
%                                                                          %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [ax,ay,az,a3] = Madgwick_normalize_wrapper_fixpt(ax,ay,az,a3)
    fm = get_fimath();
    ax_in = fi( ax, 0, 14, 0, fm );
    ay_in = fi( ay, 0, 14, 0, fm );
    az_in = fi( az, 0, 14, 0, fm );
    a3_in = fi( a3, 0, 14, 0, fm );
    [ax_out,ay_out,az_out,a3_out] = Madgwick_normalize_fixpt( ax_in, ay_in, az_in, a3_in );
    ax = double( ax_out );
    ay = double( ay_out );
    az = double( az_out );
    a3 = double( a3_out );
end

function fm = get_fimath()
	fm = fimath('RoundingMethod', 'Floor',...
	     'OverflowAction', 'Wrap',...
	     'ProductMode','FullPrecision',...
	     'MaxProductWordLength', 128,...
	     'SumMode','FullPrecision',...
	     'MaxSumWordLength', 128);
end
