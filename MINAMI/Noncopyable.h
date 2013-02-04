#ifndef __Noncopyable_H__
#define __Noncopyable_H__
namespace MINAMI
{

class Noncopyable
{
protected:
	Noncopyable(){}
	~Noncopyable(){}
private:
	Noncopyable(const Noncopyable&);
	Noncopyable& operator=(const Noncopyable&);
};

};//namespace MINAMI
#endif//__Noncopyable_H__
