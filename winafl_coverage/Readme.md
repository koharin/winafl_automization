# winafl-coverage-graph
## GOAL
- get winafl coverage data
- run testcases via afl-showmap
- get bitmap data (trace data) from afl-showmap result
- get difference between new and old coverage data
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
