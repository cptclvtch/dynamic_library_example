#include "api.h"
#include <stdio.h>
#include <windows.h>

int main()
{
    HMODULE api = LoadLibraryA("api.dll");

    void* func = GetProcAddress(api, "times_two");

    printf("%u", func(2));
}