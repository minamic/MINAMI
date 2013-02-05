#ifndef __CheckMemLeak_H__
#define __CheckMemLeak_H__

#if defined(_DEBUG)
#include <windows.h>
#include <crtdbg.h>
#endif 


#if defined(WIN32) && defined (_DEBUG)
	static char THIS_FILE[] = __FILE__;
	#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif 

void EnableMemoryLeakCheck();


#endif//__CheckMemLeak_H__
