
#ifndef __Application_H__
#define __Application_H__

#include "Window.h"
#include "RenderSystem.h"
namespace MINAMI
{
//TODO:implement.
class Application 
{
public:
	virtual ~Application();
	bool Initialize();
	void Run();
};

};//namespace MINAMI
#endif//__Application_H__
