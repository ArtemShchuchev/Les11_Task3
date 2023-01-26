#include <iostream>
#include "../DynamicLibrory/Leaver.h"

//#include <Windows.h>
//#include <io.h>
//#include <fcntl.h>

int main()
{
	//int err = _setmode(_fileno(stdout), _O_U16TEXT);
	//err = _setmode(_fileno(stdin), _O_U16TEXT);
	//err = _setmode(_fileno(stderr), _O_U16TEXT);

	//system("chcp 1251");				// настраиваем кодировку консоли
	
	setlocale(LC_ALL, "ru_RU.utf8");
	//setlocale(LC_ALL, "ru_RU");		// задаем русский текст
	//_wsetlocale(LC_ALL, L"ru_RU");
	//system("chcp UTF-8");				// настраиваем кодировку консоли
	//system("chcp ANSI");				// настраиваем кодировку консоли
	//system("chcp 1251");				// настраиваем кодировку консоли
	//SetConsoleCP(CP_UTF8);
	//SetConsoleOutputCP(CP_UTF8);

	std::system("clear");
	std::wcout << L"Задача 3. Динамическая библиотека CMake\n";
	std::wcout << L"---------------------------------------\n" << std::endl;
	Leaver lv;
	std::wstring userName;
	std::wcout << L"Введите имя: "; std::wcin >> userName;
	std::wcout << userName << std::endl;
	std::wcout << userName.length() << std::endl;
	std::wcout << lv.leave(userName) << std::endl;

	//system("pause"); // Команда задержки экрана

	return 0;
}
