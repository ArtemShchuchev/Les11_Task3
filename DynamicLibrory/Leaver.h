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
	const std::wstring LEAVE_STR = L"До свидания, ";
public:
	LEAVERDYNAMIC_API std::wstring leave(std::wstring&);
};
