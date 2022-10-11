# EXECUTE
```shell
coverage_graph.bat
```

### RUN RESULT
```shell
C:\Users\johan\winafl\build32\bin\Release>C:\Users\johan\code\openssl2\coverage.bat C:\Users\johan\code\openssl2\build\bin\Release\openssl2.exe fuzzme

C:\Users\johan\winafl\build32\bin\Release>ECHO OFF

C:\Users\johan\winafl\build32\bin\Release>cd C:\Users\johan\winafl\build32\bin\Release

C:\Users\johan\winafl\build32\bin\Release>afl-showmap2.exe -o data -D "C:\Users\johan\DynamoRIO-Windows-9.0.19272\bin32" -- -coverage_module libcrypto-3.dll -target_module openssl2.exe -target_offset 0x1010 -nargs 2 -- "C:\Users\johan\code\openssl2\build\bin\Release\openssl2.exe" C:\Users\johan\code\openssl2
afl-showmap for Windows 2.36b by <0vercl0k@tuxfamily.org>
Based on WinAFL 2.36b by <ifratric@google.com>
Based on AFL 2.36b by <lcamtuf@google.com>
[*] Executing 'C:\Users\johan\code\openssl2\build\bin\Release\openssl2.exe'...

[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000000
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'data0'.
[*] coverage time: 1665282662
[*] coverage0: 1665282662:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000001
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'data1'.
[*] coverage time: 1665282662
[*] coverage1: 1665282662:147903
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000002
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'data2'.
[*] coverage time: 1665282662
[*] coverage2: 1665282662:147903
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000003
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'data3'.
[*] coverage time: 1665282662
[*] coverage3: 1665282662:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000004
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'data4'.
[*] coverage time: 1665282662
[*] coverage4: 1665282662:410047
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000005
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'data5'.
[*] coverage time: 1665282662
[*] coverage5: 1665282662:410043
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000006
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'data6'.
[*] coverage time: 1665282662
[*] coverage6: 1665282662:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000007
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'data7'.
[*] coverage time: 1665282662
[*] coverage7: 1665282662:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000008
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'data8'.
[*] coverage time: 1665282662
[*] coverage8: 1665282662:410047
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000009
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'data9'.
[*] coverage time: 1665282662
[*] coverage9: 1665282662:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000010
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat10'.
[*] coverage time: 1665282662
[*] coverage10: 1665282662:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000011
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat11'.
[*] coverage time: 1665282662
[*] coverage11: 1665282662:344511
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000012
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat12'.
[*] coverage time: 1665282662
[*] coverage12: 1665282662:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000013
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat13'.
[*] coverage time: 1665282662
[*] coverage13: 1665282662:278975
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000014
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat14'.
[*] coverage time: 1665282662
[*] coverage14: 1665282662:475582
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000015
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat15'.
[*] coverage time: 1665282662
[*] coverage15: 1665282662:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000016
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat16'.
[*] coverage time: 1665282662
[*] coverage16: 1665282662:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000017
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat17'.
[*] coverage time: 1665282662
[*] coverage17: 1665282662:475583
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000018
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat18'.
[*] coverage time: 1665282662
[*] coverage18: 1665282662:475583
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000019
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat19'.
[*] coverage time: 1665282674
[*] coverage19: 1665282674:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000020
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat20'.
[*] coverage time: 1665282684
[*] coverage20: 1665282684:410045
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000021
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat21'.
[*] coverage time: 1665282693
[*] coverage21: 1665282693:344511
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000022
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat22'.
[*] coverage time: 1665282698
[*] coverage22: 1665282698:475582
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000023
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat23'.
[*] coverage time: 1665282718
[*] coverage23: 1665282718:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000024
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat24'.
[*] coverage time: 1665282732
[*] coverage24: 1665282732:410043
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000025
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat25'.
[*] coverage time: 1665283293
[*] coverage25: 1665283293:410047
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000026
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat26'.
[*] coverage time: 1665310968
[*] coverage26: 1665310968:410045
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000027
-- Program output begins --
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat27'.
[*] coverage time: 1665310968
[*] coverage27: 1665310968:16831
[*] input test case: C:\Users\johan\code\openssl2\output2\queue\id_000028
-- Program output begins --
0 processes nudged
nudge operation failed, verify permissions and parameters.
[+] dll base: 0x70810000
[+] function addr: 0x7081885f
result: 100
-- Program output ends --

--- Program finished properly ---
[+] Captured 65536 tuples in 'dat28'.
[*] coverage time: 1665310972
[*] coverage28: 1665310972:16831

C:\Users\johan\winafl\build32\bin\Release>python C:\Users\johan\code\graph.py C:\Users\johan\code\openssl2\coverage\coverage
[0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 22, 31, 36, 56, 70, 631, 28306, 28306, 28310]
[16831, 147903, 147903, 16831, 410047, 410043, 16831, 16831, 410047, 16831, 16831, 344511, 16831, 278975, 475582, 16831, 16831, 475583, 475583, 16831, 410045, 344511, 475582, 16831, 410043, 410047, 410045, 16831, 16831]
```

![execute result](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/0ec51830-a433-4609-a244-1907cf4d541e/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=AKIAT73L2G45EIPT3X45%2F20221011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20221011T062149Z&X-Amz-Expires=86400&X-Amz-Signature=d4777eac53dc164a30b9261dea0436da9bb2ec0998081c3a22e58b9488d8be76&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22&x-id=GetObject)
