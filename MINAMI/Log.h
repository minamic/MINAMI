#ifndef __Log_H__
#define __Log_H__

#include <string>
#include <iostream>
#include <fstream>
#include <time.h>
#include <windows.h>
namespace MINAMI
{

const std::string default_log_filename = "Log.txt";

class Log
{
public:
	static void LogToFile( std::string message, std::string filename = default_log_filename)
	{
		std::fstream file_stream(filename,  std::ios::out | std::ios::app);
		file_stream<<"Log: "<<message<<std::endl;
	}
	static void LogToConsole(std::string message)
	{
		std::cout<<"Log: "<<message<<std::endl;
	}
};

};//namespace MINAMI

#endif//__Log_H__
