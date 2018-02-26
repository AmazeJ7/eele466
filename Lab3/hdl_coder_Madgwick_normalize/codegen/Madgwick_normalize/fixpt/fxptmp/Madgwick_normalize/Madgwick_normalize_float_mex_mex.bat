@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Madgwick_normalize_float_mex
set MEX_NAME=Madgwick_normalize_float_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2017b\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for Madgwick_normalize_float_mex > Madgwick_normalize_float_mex_mex.mki
echo COMPILER=%COMPILER%>> Madgwick_normalize_float_mex_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Madgwick_normalize_float_mex_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Madgwick_normalize_float_mex_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Madgwick_normalize_float_mex_mex.mki
echo LINKER=%LINKER%>> Madgwick_normalize_float_mex_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Madgwick_normalize_float_mex_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Madgwick_normalize_float_mex_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Madgwick_normalize_float_mex_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Madgwick_normalize_float_mex_mex.mki
echo OMPFLAGS= >> Madgwick_normalize_float_mex_mex.mki
echo OMPLINKFLAGS= >> Madgwick_normalize_float_mex_mex.mki
echo EMC_COMPILER=lcc64>> Madgwick_normalize_float_mex_mex.mki
echo EMC_CONFIG=optim>> Madgwick_normalize_float_mex_mex.mki
"C:\Program Files\MATLAB\R2017b\bin\win64\gmake" -B -f Madgwick_normalize_float_mex_mex.mk
