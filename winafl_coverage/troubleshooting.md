## TROUBLESHOOTING
```
C:\Users\johan\winafl\build\bin\Release>afl-showmap2.exe -o data -D C:\Users\johan\DynamoRIO-Windows-9.0.19202\bin32 -- -target_module "i_view32.exe" -target_offset 0x85130 -coverage_module "i_view32.exe" -nargs 1 -- "C:\Program Files (x86)\IrfanView\i_view32.exe" C:\Users\johan\code\irfanview /convert=C:\Users\johan\Downloads\out.png /silent
afl-showmap for Windows 2.36b by <0vercl0k@tuxfamily.org>
Based on WinAFL 2.36b by <ifratric@google.com>
Based on AFL 2.36b by <lcamtuf@google.com>
[*] Executing 'C:\Program Files (x86)\IrfanView\i_view32.exe'...

[*] queue path: C:\Users\johan\code\irfanview\output\queue
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_0_id_000001
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[*] out_file: data0

[+] Captured 957 tuples in 'data0'.
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_1_id_000002
-- Program output begins --                                                                                                                                                                                                                                                                                                                                                                                                     
-- Program output ends --

--- Program finished properly ---
[*] out_file: data1

[+] Captured 957 tuples in 'data1'.
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_2_id_000006
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[*] out_file: data2

[+] Captured 957 tuples in 'data2'.
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_3_id_000003
-- Program output begins --

[-] PROGRAM ABORT : Unexpected result from pipe! expected 'P', instead received ' '

         Location : run_target(), C:\Users\johan\winafl\afl-showmap2.c:742
```
- save proper data in `out_file` (currently, always 957 tuple data saved in out_file)
- solve problem above error
