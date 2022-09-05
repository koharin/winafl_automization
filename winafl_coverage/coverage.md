## COVERAGE MEASUREMENT IDEA
- initial: add all bitmap datas (if count=0)
- not initial
  + if trace_bits value and virgin_bits value in same index is same -> 0
  + if trace_bits value > virgin_bits value in same index -> increase coverage
  + if trace_bits value < virgin_bits value in same index -> decrease COVERAGE
- write mtime and coverage value in file
  + it will be used to draw coverage/time graph

## RUN RESULT
```
$ afl-showmap2.exe -o data -D C:\Users\johan\DynamoRIO-Windows-9.0.19237\bin32 -- -target_module "i_view32.exe" -target_offset 0x85130 -coverage_module "i_view32.exe" -nargs 1 -- "C:\Program Files (x86)\IrfanView\i_view32.exe" C:\Users\johan\code\irfanview /convert="NUL" /silent
afl-showmap for Windows 2.36b by <0vercl0k@tuxfamily.org>
Based on WinAFL 2.36b by <ifratric@google.com>
Based on AFL 2.36b by <lcamtuf@google.com>
[*] Executing 'C:\Program Files (x86)\IrfanView\i_view32.exe'...

[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000191
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 961 tuples in 'data0'.
[*] coverage time: 1661927087
[*] coverage0: 1661927087:2023
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000192
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 961 tuples in 'data1'.
[*] coverage time: 1661927088
[*] coverage1: 1661927088:2023
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000193
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 961 tuples in 'data2'.
[*] coverage time: 1661927088
[*] coverage2: 1661927088:2023
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000194
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 961 tuples in 'data3'.
[*] coverage time: 1661927091
[*] coverage3: 1661927091:2023
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000195
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
-- Program output ends --

--- Program finished properly ---
[+] Captured 961 tuples in 'data4'.
[*] coverage time: 1661927093
[*] coverage4: 1661927093:2023
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000196
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 961 tuples in 'data5'.
[*] coverage time: 1661927093
[*] coverage5: 1661927093:2023
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000197
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
-- Program output ends --

--- Program finished properly ---
[+] Captured 961 tuples in 'data6'.
[*] coverage time: 1661927096
[*] coverage6: 1661927096:2023
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000198
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 961 tuples in 'data7'.
[*] coverage time: 1661927097
[*] coverage7: 1661927097:2023
[*] input test case: C:\Users\johan\code\irfanview\out\queue\id_000199
-- Program output begins --
```

## OUTPUT FILE 
```
1661927087:2023
1661927088:2023
1661927088:2023
1661927091:2023
1661927093:2023
1661927093:2023
1661927096:2023
1661927097:2023

```
