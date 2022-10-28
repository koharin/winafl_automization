#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <iostream>

extern "C" __declspec(dllexport) __declspec(noinline) int fuzzme(const char *filename, long ElementCount);

typedef int(*INSPECT)(const char *filename, long ElementCount);

INSPECT RAND_load_file;

wchar_t* charToWChar(const char* text)
{
    size_t size = strlen(text) + 1;
    wchar_t* wa = (wchar_t*)malloc(sizeof(wchar_t) * size);
    mbstowcs(wa, text, size);
    return wa;
}

int fuzzme(const char *filename, long ElementCount)
{
    int result = RAND_load_file(filename, ElementCount);
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
    RAND_load_file = (INSPECT)GetProcAddress(dll_handle, "RAND_load_file");

    if(RAND_load_file == NULL){
        printf("[-] Unable to get RAND_load_file address\n");
        return 2;
    }
    printf("[+] dll base: 0x%x\n", dll_handle);
    printf("[+] function addr: 0x%x\n", RAND_load_file);

    isDetected = fuzzme(argv[1], 100);

    printf("[Malware result] %d\n", isDetected);

    return isDetected;
}
