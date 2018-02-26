
% % normalize test bench 
% set the uniform distribution range [a b] over which the a's will be drawn
a1 = 0;
b1 = 16383;

N=1000;
for i=1:N
   
    %-------------------------------------------------
    % Create random input values that span [a1 b1]
    %-------------------------------------------------
    ax = a1 + (b1-a1).*rand(1,1);
    ay = a1 + (b1-a1).*rand(1,1);
    az = a1 + (b1-a1).*rand(1,1);
    a3 = a1 + (b1-a1).*rand(1,1);
    
    %-------------------------------------------------
    % Drive the function with the random input values
    %-------------------------------------------------
    [ax, ay, az, a3] = Madgwick_normalize(ax, ay, az, a3);
    
end

    
 