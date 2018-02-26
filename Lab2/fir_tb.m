function fir_tb

%------------------------------------------------------------
% Note: it appears that the cosimWizard needs to be re-run if
% this is moved to a different machine (VHDL needs to be
% recompile in ModelSim).
%------------------------------------------------------------

% HdlCosimulation System Object creation (this Matlab function was created
% by the cosimWizard).
fir_hdl = hdlcosim_cla_8bit;

% Simulate for Nclock rising edges (this will be the length of the
% simulation)
Nclock_edges = 10;

error = [];
f_Sum = fi(0, 1, 8, 0);

for clki=1:Nclock_edges
    %-----------------------------------------------------------------
    % Create our input vector at each clock edge, which must be a
    % fixed-point data type.  The word width of the fixed point data type
    % must match the width of the std_logic_vector input.
    %-----------------------------------------------------------------
    fixed_word_width     = 8;  % width of input to component
    if clki == 1 
        a = 20;
        b = 36;
        sub = 0;
    elseif clki == 2
        a = 56;
        b = -21;
        sub = 0;
    elseif clki == 3
        a = -13;
        b = 17;
        sub = 0;
    elseif clki == 4
        a = -33;
        b = -22;
        sub = 0;
    elseif clki == 5
        a = 76;
        b = 32;
        sub = 1;
    elseif clki == 6
        a = 12;
        b = -43;
        sub = 1;
    elseif clki == 7
        a = -65;
        b = 23;
        sub = 1;
    elseif clki == 8
        a = -47;
        b = -60;
        sub = 1;
    end
        
    fixed_point_signed   = 1;  % unsiged = 0, signed = 1;
    fixed_point_fraction = 0;  % fraction width (location of binary point within word)
    input_vectorA = fi(a, fixed_point_signed, fixed_word_width, fixed_point_fraction); % make the input a fixed point data type
    input_vectorB = fi(b, fixed_point_signed, fixed_word_width, fixed_point_fraction); % make the input a fixed point data type
    input_sub = fi(sub, 0, 1, fixed_point_fraction);
    
    %-----------------------------------------------------------------
    % Push the input(s) into the component using the step function on the
    % system object fir_hdl
    % If there are multiple I/O, use
    % [out1, out2, out3] = step(fir_hdl, in1, in2, in3);
    % and understand all I/O data types are fixed-point objects
    % where the inputs can be created by the fi() function.
    %-----------------------------------------------------------------
    [S, Cout] = step(fir_hdl, input_vectorA, input_vectorB, input_sub);
    Sum = fi(S, 0, 8, 0)
    f_Sum.bin = Sum.bin;
    %-----------------------------------------------------------------
    % Save the outputs (which are fixed-point objects)
    %-----------------------------------------------------------------
    if sub == 1
        if f_Sum.data ~= (a-b)
            error(clki) = 1;
        else
            error(clki) = 0;
        end
    else
        if f_Sum.data ~= (a+b)
            error(clki) = 1;
        else
            error(clki) = 0;
        end
    end
    
end
%-----------------------------------------------------------------
% Display the captured I/O
%-----------------------------------------------------------------
% display_this = 0;
% if display_this == 1
%     for clki=1:Nclock_edges
%         in1 = input_history{clki};
%         in1.bin
%         out1 = output_history{clki}
%         out1.dec
%         out1.WordLength
%         out2 = output_history2{clki}
%         out2.dec
%         out2.WordLength
%     end
% end
% %-----------------------------------------------------------------
% % Perform the desired comparison (with the latency between input
% % and output appropriately corrected).
% %-----------------------------------------------------------------
% latency     = 5;  % latency in clock cycles through the component
% error_index = 1;
% error_case  = [];
% for clki=1:Nclock_edges-latency
%     in1  = input_history{clki};
%     out1 = output_history{clki+latency};  % get the output associated with current output
%     %------------------------------------------------------
%     % Perfom the comparison with the "true" output
%     %------------------------------------------------------
%     
%     
%     
% end
% 


error

end
