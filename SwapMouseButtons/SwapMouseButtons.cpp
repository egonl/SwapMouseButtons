// SwapMouseButtons.cpp : Defines the entry point for the application.
//

#include "framework.h"
#include "SwapMouseButtons.h"
#include "shlwapi.h"
#include "mmsystem.h"

#pragma comment(lib, "shlwapi.lib")
#pragma comment(lib, "winmm.lib")

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    PlaySound(MAKEINTRESOURCE(IDR_SWAP), GetModuleHandle(NULL), SND_RESOURCE);

    if (StrStrI(lpCmdLine, _T("left")))
    {
        SwapMouseButton(FALSE);
        return 0;
    }

    if (StrStrI(lpCmdLine, _T("right")))
    {
        SwapMouseButton(TRUE);
        return 0;
    }

    BOOL previouslyReversed = SwapMouseButton(FALSE);
    if (!previouslyReversed)
    {
        SwapMouseButton(TRUE);
    }

    return 0;
}
