# winafl-coverage-graph
## IDEA
- run testcases with afl-showmap [V]
- get bitmap data (trace data) from afl-showmap result [V]
- save every bitmap data of testcases in separate file [V]
- `virgin_bits` -> previews test case bitmap result, `trace_bits` -> current test case bitmap result
- get difference between new and old data (?) -> coverage
- show coverage in graph

## PREREQUISITE
- Visual Studio 2022
- cmake

## COMPILE
- Use x86_64 Cross Tools Command Prompt for VS 2022
```bash
cd /path/to/winafl
mkdir build
cd build
cmake -G"Visual Studio 17 2022" -A Win32 .. -DDynamoRIO_DIR=/path/to/DynamoRIO/cmake
cmake --build . --config Release
```

## WARNING!
- be sure to maintain DynamoRIO always up-to-date (otherwise, it would raise error.)


## TROUBLESHOOTING
- [troubleshooting](troubleshooting.md)

