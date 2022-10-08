ECHO OFF
SET arg1=%1
SET arg2=%2

:: GET TARGET OFFSET
FOR /F %%i IN ('C:\Users\johan\code\offset\build\bin\Release\offset.exe %arg1% %arg2%') DO set OFFSET=%%i

ECHO ON

cd C:\Users\johan\winafl\build32\bin\Release

:: GET COVERAGE DATA OF TESTCASES
afl-showmap2.exe -o data -D "C:\Users\johan\DynamoRIO-Windows-9.0.19272\bin32" -- -coverage_module libcrypto-3.dll -target_module openssl.exe -target_offset %OFFSET% -nargs 1 -- "C:\Users\johan\code\openssl\build\bin\Release\openssl.exe" C:\Users\johan\code\openssl

:: SHOW COVERAGE GRAPH
python C:\Users\johan\code\graph.py C:\Users\johan\code\openssl\coverage\coverage
