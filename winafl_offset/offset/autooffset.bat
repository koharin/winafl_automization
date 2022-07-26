ECHO OFF
SET arg1=%1
SET arg2=%2

FOR /F %%i IN ('C:\Users\johan\code\offset\build\bin\Release\offset.exe %arg1% %arg2%') DO set OFFSET=%%i
ECHO ON
::C:\Users\johan\DynamoRIO-Windows-9.0.19174\DynamoRIO-Windows-9.0.19174\bin32\drrun.exe -c "C:\Users\johan\winafl\build32\bin\Release\winafl.dll" -debug -target_module targettest.exe -coverage_module targettest.exe -target_offset %OFFSET% -fuzz_iterations 10 -nargs 1 -- "C:\Users\johan\targettest\build\bin\Release\targettest.exe" "C:\Users\johan\targettest\input\test.txt"
C:\Users\johan\winafl\build32\bin\Release\afl-fuzz.exe -i C:\Users\johan\targettest\input -o C:\Users\johan\targettest\out -D C:\Users\johan\DynamoRIO-Windows-9.0.19174\DynamoRIO-Windows-9.0.19174\bin32 -t 1000 -- -coverage_module targettest.exe -fuzz_iterations 1000 -target_module targettest.exe -target_offset %OFFSET% -nargs 1 -- C:\Users\johan\targettest\build\bin\Release\targettest.exe @@
