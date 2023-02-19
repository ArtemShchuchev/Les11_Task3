#include <iostream>
#include "SecondaryFunction.h"
#include "../DynamicLibrory/Leaver.h"

int main()
{
	printHeader(L"Задача 3. Динамическая библиотека CMake");
	
	Leaver lv;
	std::wstring userName;
	std::wcout << L"Введите имя: "; std::wcin >> userName;
	std::wcout << userName << std::endl;
	std::wcout << userName.length() << std::endl;
	std::wcout << lv.leave(userName) << std::endl;

	return 0;
}
