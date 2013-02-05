#include <d3d11.h>
#include "Application.h"
#include "Singleton.h"
#include "Exception.h"
#include "Log.h"
#include "CheckMemLeak.h"
using namespace MINAMI;
void main()
{
	EnableMemoryLeakCheck();
	char* b = new char[5];
	Application& application = Singleton<Application>::GetInstance();
	if(false == application.Initialize())
	{
		EXCEPTION("Application Initialize failed.");
	}
	application.Run();
}