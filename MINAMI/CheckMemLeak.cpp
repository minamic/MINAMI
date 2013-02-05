#include "CheckMemLeak.h"

void EnableMemoryLeakCheck()
{
#define _CRTDBG_MAP_ALLOC
// Memory leak check enable 
#if defined(WIN32) && defined(_DEBUG)
	int tmpdbgflag;
	tmpdbgflag = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);
	tmpdbgflag |= _CRTDBG_DELAY_FREE_MEM_DF;
	tmpdbgflag |= _CRTDBG_LEAK_CHECK_DF;
	_CrtSetDbgFlag(tmpdbgflag);
#endif 
}