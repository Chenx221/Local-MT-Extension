// dllmain.cpp : Defines the entry point for the DLL application. 
// Run at the same time as NextHooker is loaded or extension is added.
// Put initialization code here.
#include "stdafx.h"

BOOL WINAPI DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

