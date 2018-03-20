function rsr_TB
format long;

% HdlCosimulation System Object creation (this Matlab function was created
% by the cosimWizard).
fir_hdl = hdlcosim_rsr;

W = 36;
F = 18;

Fm = fimath('RoundingMethod','Floor',...
            'OverflowAction','Wrap',...
            'ProductMode','SpecifyPrecision',...
            'ProductWordLength',W,...
            'ProductFractionLength',F,...
            'SumMode','SpecifyPrecision',...
            'SumWordLength',W,...
            'SumFractionLength',F);

% Simulate for Nclock rising edges (this will be the length of the
% simulation)
Nclock_edges = 7;
Ninputs = 1000;

max_error = 0;
min_error = 0;

for clki=1:Ninputs

    a = randi((2^17) + 1) - 1 + rand * 2^17;

    input = fi(a, 0, W, F, Fm); % make the input a fixed point data type
    expected = 1/sqrt(a);

    %expected_vector = fi(expected, fixed_point_signed, fixed_word_width, fixed_point_fraction, Fm);
    %formatted_expected.bin = expected_vector.bin;
    y = fi(0, 0, 36, 18, Fm);

    %in_double = double(formatted_input)
    %expected_double = double(formatted_expected)
    for clkj=1:Nclock_edges
        % step Nclock_edges times until output is ready
        y = step(fir_hdl, input);
    end;

    expected_formatted = fi(expected, 0, 36, 18, Fm);

    if (abs(expected_formatted.data - y.data) > 0)
        error = abs(expected_formatted.data - y.data);
        total_error = total_error + error;
        errors = errors + 1;
        if error > max_error
          max_error = error;
        elseif error < min_error
          min_error = error;
        end
    end
end

Ninputs
max_error
min_error
avg_error = total_error / errors
