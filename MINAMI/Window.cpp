#include "Window.h"

namespace MINAMI
{
	Window::Window(const WindowDesc& window_desc)
	{
		SetupWindow(window_desc);
	}

	Window::~Window()
	{
	}

	bool Window::SetupWindow(const WindowDesc& window_desc)
	{
		HINSTANCE hinstance = GetModuleHandle(NULL);
		WNDCLASS wc;
		wc.style                = CS_HREDRAW | CS_VREDRAW;
        wc.lpfnWndProc          = WndProc;
        wc.cbClsExtra           = 0;
        wc.cbWndExtra           = 0;
		wc.hInstance            = hinstance;
        wc.hIcon                = LoadIcon(0, IDI_APPLICATION);
        wc.hCursor              = LoadCursor(0, IDC_ARROW);
        wc.hbrBackground        = (HBRUSH)GetStockObject(NULL_BRUSH);
        wc.lpszMenuName         = 0;
        wc.lpszClassName        = "D3DWndClassName";

		// Register window class
		if(!RegisterClass(&wc))
		{
			MessageBox(0,"RegisterClass FAILED!",0,0);
			PostQuitMessage(0);
		}
		// Get full rectangle size based on desired client size
		RECT R = {0,0, window_desc.width_, window_desc.height_};
		AdjustWindowRect(&R,WS_OVERLAPPEDWINDOW,false);
		int width = R.right - R.left;
		int height = R.bottom - R.top;

		// Create window
		hwnd_ = CreateWindow("D3DWndClassName", window_desc.caption_.c_str(),WS_OVERLAPPEDWINDOW,
                        CW_USEDEFAULT,CW_USEDEFAULT,width,height,0,0,hinstance,this);
		if (!hwnd_)
		{
			MessageBox(0,"CreateWindow FAILED!",0,0);
			PostQuitMessage(0);
		}
		ShowWindow(hwnd_,SW_SHOW);
		UpdateWindow(hwnd_);
		return true;
	}

	LRESULT CALLBACK Window::WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
	{
		switch(message)
		{
		case WM_CREATE:
			break;
		case WM_PAINT:
			break;
		case WM_SIZE:
			InvalidateRect(hwnd, NULL, true);
			break;
		case WM_KEYDOWN:
			if(VK_ESCAPE == wParam)
				DestroyWindow(hwnd);
			break;
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			return DefWindowProc(hwnd, message, wParam, lParam);
		}
		
		return 0;                   //Õý³£ÍË³ö  
	}
};//namespace MINAMI