#ifndef __Exception_H__
#define __Exception_H__

#include <windows.h>
#include <exception>
#include <string>
#include <sstream>
#include <iostream>

namespace MINAMI
{

class Exception : public std::exception
{
public:
	Exception(std::string message)
	{
		std::stringstream message_stream;
		message_stream<<"Exception Occur:" << message << "\nin file: " << __FILE__ << "\nat line: " << __LINE__;
		//MessageBox(NULL, message.c_str(), "MINAMI::Exception:", MB_OK);
		std::cout<<message_stream.str();
	}
	virtual ~Exception(){}
};

};//namespace MINAMI

#endif//__Exception_H__
