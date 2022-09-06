# winafl-coverage-graph
## IDEA
- run testcases with afl-showmap [V]
- get bitmap data (trace data) from afl-showmap result [V]
- save every bitmap data of testcases in separate file [V]
- `virgin_bits` -> previews test case bitmap result, `trace_bits` -> current test case bitmap result [V]
- get difference between new and old data -> [coverage](coverage.md) (?)
- show coverage in graph [V]

## FILE
- `afl-showmap.c` 
  + modified winafl afl-showmap code
  + output: testcase coverage file
- `graph.py`
  + input: coverage file
  + output: coverage graph
- `coverage_graph.bat`
  + first, run afl-showmap to run target with testcases and get coverage file
  + second, run graph.py with coverage file and show coverage graph

## PREREQUISITE
- Visual Studio 2022
- cmake
- matplotlib

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
- be sure to maintain [DynamoRIO](https://github.com/DynamoRIO/dynamorio) always up-to-date (otherwise, it would raise error.)


## TROUBLESHOOTING
- [troubleshooting](troubleshooting.md)

