#include "Application.h"

namespace MINAMI
{
	Application::~Application()
	{
		//release component here.
	}
	bool Application::Initialize()
	{
		static Window window;
		return true;
	}
	void Application::Run()
	{
		MSG msg = {0};
        while(msg.message != WM_QUIT)
        {
			// Process window messages
			if(PeekMessage(&msg,0,0,0,PM_REMOVE))
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
			// Otherwise render frame
			else
			{
				Sleep(1);
				//drawScene();
			}
        }
        return;
	}
	
};//namespace MINAMI