# EXECUTE
```shell
coverage_graph.bat
```

### RUN RESULT
```shell
johan@DESKTOP-EL7MDK5 C:\Users\johan\winafl\build\bin\Release
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
0 processes nudged
nudge operation failed, verify permissions and parameters.
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
0 processes nudged
nudge operation failed, verify permissions and parameters.
-- Program output ends --

--- Program finished properly ---
[+] Captured 957 tuples in 'data3'.
[*] coverage time: 1661927091
[*] coverage3: 1661927091:2066
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000195
-- Program output begins --

[-] PROGRAM ABORT : Unexpected result from pipe! expected 'P', instead received ' '

         Location : run_target(), C:\Users\johan\winafl\afl-showmap2.c:741


johan@DESKTOP-EL7MDK5 C:\Users\johan\winafl\build\bin\Release
$ python C:\Users\johan\code\graph.py C:\Users\johan\code\irfanview\coverage\coverage
[1661927087, 1661927088, 1661927088, 1661927091]
[2066, 2066, 2066, 2066]
```

![execute result](https://user-images.githubusercontent.com/35914056/188539292-542e33e4-f5df-450f-85de-5043268b9778.png)
