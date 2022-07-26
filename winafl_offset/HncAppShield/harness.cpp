#include <stdio.h>
#include <Windows.h>
#include <iostream>

extern "C" __declspec(dllexport) __declspec(noinline) int fuzz_hwp(wchar_t* hwp);

typedef int(*INSPECT)(wchar_t* filename);
INSPECT AppShield_InspectMalware;

wchar_t* charToWChar(const char* text)
{
    size_t size = strlen(text) + 1;
    wchar_t* wa = (wchar_t*)malloc(sizeof(wchar_t) * size);
    mbstowcs(wa, text, size);
    return wa;
}

int fuzz_hwp(wchar_t* filename)
{
    AppShield_InspectMalware(filename);
    return 0;
}

int main(int argc, char** argv)
{
    SetDllDirectoryA("C:\\Program Files (x86)\\Hnc\\Office NEO\\HOfficeViewer96\\Bin");
    HINSTANCE HncAppShield = LoadLibraryA("HncAppShield.dll");
    int isDetected = 0;

/*
    if(argc < 2){
        fprintf(stderr, "Usage: %s [input filename]\n", argv[0]);
        return 1;
    }
*/
    if (HncAppShield == NULL) {
        fprintf(stderr, "Error: Unable to open target dll\n");
        return -1;
    }
    //AppShield_InspectMalware = (INSPECT)GetProcAddress(HncAppShield, (LPCSTR)1);
    //AppShield_InspectMalware = (INSPECT)GetProcAddress(HncAppShield, "AppShield_InspectMalware");
    AppShield_InspectMalware = (INSPECT)GetProcAddress(HncAppShield, "AppShield_InspectMalware");

    isDetected = fuzz_hwp(charToWChar(argv[1]));
    //printf("Malware result: %d\n", isDetected);
    
    return isDetected;
}
