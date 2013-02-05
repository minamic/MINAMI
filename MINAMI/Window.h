#ifndef __Window_H__
#define __Window_H__

#include <windows.h>
#include <string>

namespace MINAMI
{

struct WindowDesc
{
public:
	WindowDesc(int width, int height, bool is_full_screen, std::string caption)
	{
		width_ = width;
		height_ = height;
		is_full_screen_ = is_full_screen;
		caption_ = caption;
	}
	int width_;
	int height_;
	bool is_full_screen_;
	std::string caption_;
};
	
static WindowDesc default_window_desc = WindowDesc(800, 600, false, "Minami3d");

class Window
{
public:
	Window(const WindowDesc& window_desc = default_window_desc);
	~Window();
protected:
	bool SetupWindow(const WindowDesc& window_desc);
	static LRESULT CALLBACK WndProc( HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);      
private:
	HWND hwnd_;
};

};//namespace MINAMI

#endif//__Window_H__
