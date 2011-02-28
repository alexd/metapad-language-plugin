/* This DLL does nothing except contain resources */

/*
 
 Please see http://www.liquidninja.com/metapad/translations/
 for important information on how to create language plugins.

*/

#define WIN32_LEAN_AND_MEAN

#include <windows.h>

//#pragma comment(linker, "/OPT:NOWIN98" )

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
    return TRUE;
}
