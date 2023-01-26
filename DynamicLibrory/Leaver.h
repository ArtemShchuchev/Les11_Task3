﻿#pragma once
#include <iostream>

#if __GNUC__ >= 4

#define EXPORT __attribute__((visibility("default")))
#define IMPORT __attribute__((visibility("hidden")))

#else

#ifdef DynamicLibrory_EXPORTS
#define LEAVERDYNAMIC_API __declspec(dllexport)
#else
#define LEAVERDYNAMIC_API __declspec(dllimport)
#endif

#endif


class Leaver
{
private:
	const std::wstring LEAVE_STR = L"До свидания, ";
public:
	EXPORT std::wstring leave(std::wstring&);
};
