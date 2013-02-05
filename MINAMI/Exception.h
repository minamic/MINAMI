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
	Exception(std::string message, std::string filename, int line_num)
	{
		std::stringstream message_stream;
		message_stream<<"Exception Occur:" << message << "\nin file: " << filename << "\nat line: " << line_num;
		//MessageBox(NULL, message.c_str(), "MINAMI::Exception:", MB_OK);
		std::cout<<message_stream.str();
	}
	virtual ~Exception(){}
};

#define EXCEPTION(message) throw Exception(message, __FILE__, __LINE__);

};//namespace MINAMI

#endif//__Exception_H__
