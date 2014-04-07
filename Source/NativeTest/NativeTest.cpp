// NativeTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ProcMonDebugOutput.h"


int wmain()
{
    wchar_t szText[100];
    for (int i = 0; i < 20; i++)
    {
        swprintf_s(szText, L"ProcMon Debug Out Test # %d", i);
        BOOL bRet = ProcMonDebugOutput(szText);
        if (TRUE == bRet)
        {
            wprintf(L"Wrote %d\n", i);
        }
        else
        {
            wprintf(L"error 0x%x\n", GetLastError());
        }
        ::Sleep(500);
    }
    return 0;
}

