function [ax, ay, az, a3] = Madgwick_normalize(ax, ay, az, a3)
% Normalise accelerometer measurement
a_dotproduct = ax * ax + ay * ay + az * az;
recipNorm = invSqrt(a_dotproduct);
if a_dotproduct ~= 0
    ax = ax * recipNorm;
    ay = ay * recipNorm;
    az = az * recipNorm;
    a3 = a3 * recipNorm;
end
