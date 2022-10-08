#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <iostream>

extern "C" __declspec(dllexport) __declspec(noinline) int fuzzme(wchar_t* filename);

typedef int(*INSPECT)(wchar_t* filename);
INSPECT RAND_write_file;

wchar_t* charToWChar(const char* text)
{
    size_t size = strlen(text) + 1;
    wchar_t* wa = (wchar_t*)malloc(sizeof(wchar_t) * size);
    mbstowcs(wa, text, size);
    return wa;
}

int fuzzme(wchar_t* filename)
{
    int result = RAND_write_file(filename);
    printf("result: %d\n", result);
    return result;
}

int main(int argc, char** argv)
{
    SetDllDirectory("C:\\Program Files (x86)\\OpenSSL\\bin");
    HINSTANCE dll_handle = LoadLibrary("libcrypto-3.dll");
    int isDetected = 0;
    if (dll_handle == NULL) {
        printf("[-] Unable to load dll\n");
        return 1;
    }
    RAND_write_file = (INSPECT)GetProcAddress(dll_handle, "RAND_write_file");

    if(RAND_write_file == NULL){
        printf("[-] Unable to get RAND_write_file address\n");
        return 2;
    }
    printf("[+] dll base: 0x%x\n", dll_handle);
    printf("[+] function addr: 0x%x\n", RAND_write_file);

    isDetected = fuzzme(charToWChar(argv[1]));
    printf("[Malware result] %d\n", isDetected);
    return isDetected;
}
