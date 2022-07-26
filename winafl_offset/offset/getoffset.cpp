#include <stdio.h>
#include <windows.h>
#include <iostream>

typedef int(*TARGET)(wchar_t* filename);
TARGET target_function;

int main(int argc, char **argv){
    unsigned int offset;

    if(argc < 3){
        fprintf(stderr, "Usage: %s [target] [target function name]\n", argv[0]);
        return 1;
    }

    HINSTANCE target = LoadLibraryA(argv[1]);

    if(target == NULL){
        fprintf(stderr, "Error: Unable to open target dll\n");
        return 2;
    }

    target_function = (TARGET)GetProcAddress(target, argv[2]);

    //printf("target: 0x%x\n", target);
    
    //printf("function ptr: 0x%x\n", target_function);
    offset = (unsigned int)target_function - (unsigned int)target;
    printf("0x%x\n", offset);

}
