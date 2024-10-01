// emcc -s "EXPORTED_RUNTIME_METHODS=['_snprintf_example']" --no-entry functions.cpp -o functions.wasm

#include <stdio.h>

extern "C"
{
    int snprintf_example()
    {
        // char buffer[50];
        return 1;//snprintf(buffer,50,"ABCD");
    }
}