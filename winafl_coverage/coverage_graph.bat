ECHO ON
cd C:\Users\johan\winafl\build\bin\Release
afl-showmap2.exe -o data -D C:\Users\johan\DynamoRIO-Windows-9.0.19237\bin32 -- -target_module "i_view32.exe" -target_offset 0x85130 -coverage_module "i_view32.exe" -nargs 1 -- "C:\Program Files (x86)\IrfanView\i_view32.exe" C:\Users\johan\code\irfanview /convert=C:\Users\johan\Downloads\out.png /silent

python C:\Users\johan\code\graph.py C:\Users\johan\code\irfanview\coverage\coverage
