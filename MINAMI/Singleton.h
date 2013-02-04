#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include "Noncopyable.h"
namespace MINAMI
{

template<typename T>
class Singleton : public Noncopyable
{
public:
	static T& GetInstance()
	{
		static T instance;
		return instance;
	}
protected:
	Singleton(){}
	virtual ~Singleton(){}
};

};//namespace MINAMI
#endif//__SINGLETON_H__
