#include <iostream>
#include "../DynamicLibrory/Leaver.h"


int main()
{
	setlocale(LC_ALL, "Russian");   // задаём русский текст
	system("chcp 1251");            // настраиваем кодировку консоли
	std::system("cls");

	std::cout << "Задача 3. Динамическая библиотека CMake\n";
	std::cout << "---------------------------------------\n" << std::endl;
	Leaver lv;
	std::string userName;
	std::cout << "Введите имя: "; std::cin >> userName;
	std::cout << lv.leave(userName) << std::endl;

	system("pause"); // Команда задержки экрана

	return 0;
}