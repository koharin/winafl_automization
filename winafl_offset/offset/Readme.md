# Offset Automization
## getoffset compile
- Windows x86_x64 Cross Tool Command Prompt 내에서 진행
- `CMakeLists.txt` 필요
- Visual Studio 필요

```shell
mkdir build
cd build
cmake -G"Visual Studio 17 2022" -A Win32 ..
cmake --build . --config Release
```

## Usage
```shell
autooffset.bat [harness path] [target function name]
```
- winafl 디렉토리 내 `afl-fuzz.exe` 경로에서 스크립트 실행
