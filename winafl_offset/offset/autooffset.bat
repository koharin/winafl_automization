ECHO OFF
SET arg1=%1
SET arg2=%2

FOR /F %%i IN ('C:\Users\johan\code\offset\build\bin\Release\offset.exe %arg1% %arg2%') DO set OFFSET=%%i
ECHO ON
::C:\Users\johan\DynamoRIO-Windows-9.0.19265\bin32\drrun.exe -c "C:\Users\johan\winafl\build32\bin\Release\winafl.dll" -debug -target_module AppShield.exe -coverage_module AppShield.exe -target_offset %OFFSET% -fuzz_iterations 10 -nargs 1 -- "C:\Users\johan\code\AppShield\build\bin\Release\AppShield.exe" "C:\Users\johan\code\AppShield\input\cell.hwp"
C:\Users\johan\winafl\build32\bin\Release\afl-fuzz.exe -i C:\Users\johan\code\AppShield\input -o C:\Users\johan\code\AppShield\output -D C:\Users\johan\DynamoRIO-Windows-9.0.19265\bin32 -t 1000+ -- -coverage_module "AppShield.exe" -fuzz_iterations 10 -target_module "AppShield.exe" -target_offset %OFFSET% -nargs 1 -- "C:\Users\johan\code\AppShield\build\bin\Release\AppShield.exe" @@
