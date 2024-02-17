#include <Windows.h>

#include "Syringe.h"

BOOL APIENTRY DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID v)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}

	return TRUE;
}

DEFINE_HOOK(0, Dummy_Hook, 0)
{
	// This is a hook that does nothing but make Syringe 
	// understand that this dll should be loaded.
	return 0;
}