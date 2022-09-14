## TROUBLESHOOTING
```
$ afl-showmap2.exe -o data -D C:\Users\johan\DynamoRIO-Windows-9.0.19237\bin32 -- -target_module "i_view32.exe" -target_offset 0x85130 -coverage_module "i_view32.exe" -nargs 1 -- "C:\Program Files (x86)\IrfanView\i_view32.exe" C:\Users\johan\code\irfanview /convert=C:\Users\johan\Downloads\out.png /silent
afl-showmap for Windows 2.36b by <0vercl0k@tuxfamily.org>
Based on WinAFL 2.36b by <ifratric@google.com>
Based on AFL 2.36b by <lcamtuf@google.com>
[*] Executing 'C:\Program Files (x86)\IrfanView\i_view32.exe'...

[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000191
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 957 tuples in 'data0'.
[*] coverage time: 1661927087
[*] coverage0: 1661927087:2066
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000192
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 957 tuples in 'data1'.
[*] coverage time: 1661927088
[*] coverage1: 1661927088:2066
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000193
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 957 tuples in 'data2'.
[*] coverage time: 1661927088
[*] coverage2: 1661927088:2066
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000194
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 957 tuples in 'data3'.
[*] coverage time: 1661927091
[*] coverage3: 1661927091:2066
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000195
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 957 tuples in 'data4'.
[*] coverage time: 1661927093
[*] coverage4: 1661927093:2066
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000196
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 957 tuples in 'data5'.
[*] coverage time: 1661927093
[*] coverage5: 1661927093:2066
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000197
-- Program output begins --

[-] PROGRAM ABORT : Unexpected result from pipe! expected 'P', instead received ' '

         Location : run_target(), C:\Users\johan\winafl\afl-showmap2.c:741
```
