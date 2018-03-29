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

errors = 0;
total_error = 0;
max_error = 0;
min_error = 2^36;
    
for clki=1:Ninputs
    
    x_raw = randi(2^17) + rand;
    x = fi(x_raw, 0, W, F, Fm); % make the input a fixed point data type
    expected_raw = 1/sqrt(x_raw);
    y = fi(0, 0, 36, 18, Fm);

    for clkj=1:Nclock_edges
        % step Nclock_edges times until output is ready
        y = step(fir_hdl, x);
    end

    expected = fi(expected_raw, 0, 36, 18, Fm);
    
    if(abs(expected.data - y.data) > 0) 
        error = abs(expected.data - y.data);
        total_error = total_error + error;
        errors = errors + 1;
        if error > max_error
            max_error = error;
        end
        if error < min_error
            min_error = error;
        end
    else
        min_error = 0;
    end    
end

max_error
min_error
avg_error = total_error/Ninputs
errors

