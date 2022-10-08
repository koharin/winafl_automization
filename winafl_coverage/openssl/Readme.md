# OpenSSL
## Prerequisite
- [Perl](https://www.nasm.us/pub/nasm/releasebuilds/2.15.05/win64/) (add Perl path to system variables' Path)
- [NASM](https://strawberryperl.com/) (add NASM path to system variables' Path)
- [OpenSSL](https://github.com/openssl/openssl)
- Visual Studio

## Build OpenSSL in Windows
```shell
perl Configure VC-WIN32
nmake
nmake test
nmake install
```
- Use `x86 Native Tools Command Prompt for VS 2022` in administrator mode

## Compile harness
```shell
mkdir build
cd build
cmake -G"Visual Studio 17 2022" -A Win32 ..
cmake --build . --config Release
```

## input corpus
- use [openssl sample corpus](https://github.com/openssl/openssl/tree/master/fuzz/corpora/asn1)

## Get target offset
- used [autooffset.bat](https://github.com/koharin/winafl_automization/blob/main/winafl_offset/offset/autooffset.bat) to get `%OFFSET%`

## Test harness
```shell
drrun.exe -c "C:\Users\johan\winafl\build32\bin\Release\winafl.dll" -debug -target_module openssl.exe -coverage_module "C:\Program Files (x86)\OpenSSL\bin\libcrypto-3.dll" -target_offset %OFFSET% -fuzz_iterations 10 -nargs 1 -- "C:\Users\johan\code\openssl\build\bin\Release\openssl.exe" "C:\Users\johan\code\openssl\input\00a3f0b2dc24ac904fcf4095b8a3a82438202c52" 
```

## Fuzz
```shell
afl-fuzz.exe -i "path\to\input" -o "path\to\output" -D "path\to\DynamoRIO\bin32" -t 1000+ -- -coverage_module libcrypto-3.dll -target_module openssl.exe -target_offset %OFFSET% -fuzz_iterations 5000 -nargs 1 -- "C:\Users\johan\code\openssl\build\bin\Release\openssl.exe" @@
```
- fuzz to get testcases
- testcases path: `queue` directory of output directory

![fuzzing](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/5fa1a75b-415b-43cb-974b-aa0cb5422cf6/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=AKIAT73L2G45EIPT3X45%2F20221008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20221008T162541Z&X-Amz-Expires=86400&X-Amz-Signature=ae1d8519254854b1d640b76aac96a769e0b5a5ce04c2efdb0f4461b8b65d5a42&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22&x-id=GetObject)
