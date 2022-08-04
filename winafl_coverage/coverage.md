## COVERAGE MEASUREMENT IDEA
- initial: add all bitmap datas (if count=0)
- not initial
  + if trace_bits value and virgin_bits value in same index is same -> 0
  + if trace_bits value > virgin_bits value in same index -> increase coverage
  + if trace_bits value < virgin_bits value in same index -> decrease COVERAGE
- write current time and coverage value in file
  + it will be used to draw coverage/time graph

## RUN RESULT
```
C:\Users\johan\winafl\build\bin\Release>afl-showmap2.exe -o data -D C:\Users\johan\DynamoRIO-Windows-9.0.19202\bin32 -- -target_module "i_view32.exe" -target_offset 0x85130 -coverage_module "i_view32.exe" -nargs 1 -- "C:\Users\johan\winafl\build\bin\Release\i_view32.exe" C:\Users\johan\code\irfanview /convert=C:\Users\johan\Downloads\out.png /silent
afl-showmap for Windows 2.36b by <0vercl0k@tuxfamily.org>
Based on WinAFL 2.36b by <ifratric@google.com>
Based on AFL 2.36b by <lcamtuf@google.com>
[*] Executing 'C:\Users\johan\winafl\build\bin\Release\i_view32.exe'...

[*] queue path: C:\Users\johan\code\irfanview\output\queue
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_0_id_000001
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 922 tuples in 'data0'.
[*] coverage0: 13303989032765:1980
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_1_id_000002
-- Program output begins --
-- Program output ends --
--- Program finished properly ---
[+] Captured 922 tuples in 'data1'.
[*] coverage1: 13303989033593:1980
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_2_id_000006
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 922 tuples in 'data2'.
[*] coverage2: 13303989034408:1980
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_3_id_000003
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
-- Program output ends --

--- Program finished properly ---
[+] Captured 922 tuples in 'data3'.
[*] coverage3: 13303989035267:1980
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_4_id_000004
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 922 tuples in 'data4'.
[*] coverage4: 13303989036002:1980
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_5_id_000005
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
-- Program output ends --

--- Program finished properly ---
[+] Captured 922 tuples in 'data5'.
[*] coverage5: 13303989036689:1980
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_6_id_000007
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 922 tuples in 'data6'.
[*] coverage6: 13303989037455:1980
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_7_id_000008
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
-- Program output ends --

--- Program finished properly ---
[+] Captured 922 tuples in 'data7'.
[*] coverage7: 13303989038205:1980
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_8_id_000009
-- Program output begins --
-- Program output ends --

--- Program finished properly ---
[+] Captured 922 tuples in 'data8'.
[*] coverage8: 13303989038970:1980
[*] input test case: C:\Users\johan\code\irfanview\output\queue\id_9_id_000010
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
-- Program output ends --

--- Program finished properly ---
[+] Captured 922 tuples in 'data9'.
[*] coverage9: 13303989039767:1980
```

## OUTPUT FILE 
```
13304056723213:0
13304056590793:1980
13304056591558:1980
13304056592136:1980
13304056592839:1980
13304056593403:1980
13304056594089:1980
13304056594683:1980
13304056595293:1980
13304056595902:1980
13304056596511:1980
```
