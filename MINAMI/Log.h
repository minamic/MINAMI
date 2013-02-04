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
//TODO:add system time to string format.
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
		SYSTEMTIME sys; 
		GetLocalTime(&sys); 
		printf( "-----%4d/%02d/%02d %02d:%02d:%02d.%03d ÐÇÆÚ%1d-----\n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute, sys.wSecond,sys.wMilliseconds,sys.wDayOfWeek); 
		std::cout<<"Log: "<<message<<std::endl;
	}
};

};//namespace MINAMI

#endif//__Log_H__
