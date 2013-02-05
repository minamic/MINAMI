#ifndef __RenderSystem_H__
#define __RenderSystem_H__

#include <D3D11.h>

namespace MINAMI
{

class RenderSystem
{
public:
	RenderSystem();
	~RenderSystem();
	bool Initialize();
	void RenderFrame();
};

};//namespace MINAMI

#endif//__RenderSystem_H__
