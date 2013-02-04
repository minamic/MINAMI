#include <d3d11.h>
#include "Application.h"
#include "Singleton.h"
#include "Exception.h"
#include "Log.h"
using namespace MINAMI;
void main()
{
	Application& application = Singleton<Application>::GetInstance();
	Log::LogToConsole("log test to console.");
	Log::LogToFile("log test to file");
	throw Exception("exception test.");
}
