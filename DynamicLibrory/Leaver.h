#pragma once
#include <iostream>

#ifdef DynamicLibrory_EXPORTS
#define LEAVERDYNAMIC_API __declspec(dllexport)
#else
#define LEAVERDYNAMIC_API __declspec(dllimport)
#endif

class Leaver
{
private:
	const std::string LEAVE_STR = "До свидания, ";
public:
	LEAVERDYNAMIC_API std::string leave(std::string);
};
