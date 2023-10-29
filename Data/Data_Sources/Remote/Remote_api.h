#include "../../../Core/Library/Library.h"



string FetchApiData(string url)
{
	size_t pos = url.find("my_dev_key");
	if (pos != string::npos)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		return "Student";
	}
	else
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 12);
		return "IT Developer";
	}
	
}
