#include <iostream>
#include <limits> // Для std::numeric_limits
// Подключаем все пространства имен
#include "Lab1.h"
#include "Lab2.h"
#include "Lab3_1.h"
#include "Lab3_2.h"
#include "Lab4.h"
#include "Lab5.h"
#include "Lab6.h"
#include "Lab7_1.h"
#include "Lab7_2.h"

int main() {
	setlocale(LC_ALL, "Rus");

	int choice{ 0 };
	while (true) {
		std::cout << "=====[МЕНЮ]=====\n";
		std::cout << "Выберите программу для запуска:\n";
		std::cout << "-1. Очистить консоль\n";
		std::cout << "1. Программа Lab1\n";
		std::cout << "2. Программа Lab2\n";
		std::cout << "31. Программа Lab3_1\n";
		std::cout << "32. Программа Lab3_2\n";
		std::cout << "4. Программа Lab4\n";
		std::cout << "5. Программа Lab5\n";
		std::cout << "6. Программа Lab6\n";
		std::cout << "71. Программа Lab7_1\n";
		std::cout << "72. Программа Lab7_2\n";
		std::cout << "0. Выход\n";
		std::cout << "Ваш выбор: ";
		std::cin >> choice;

		switch (choice) {
		case -1:
			system("cls");
			break;
		case 1:
			Lab1::runDemo();
			break;
		case 2:
			Lab2::runDemo();
			break;
		case 31:
			Lab3_1::runDemo();
			break;
		case 32:
			Lab3_2::runDemo();
			break;
		case 4:
			Lab4::runDemo();
			break;
		case 5:
			Lab5::runDemo();
			break;
		case 6:
			Lab6::runDemo();
			break;
		case 71:
			Lab7_1::runDemo();
			break;
		case 72:
			Lab7_2::runDemo();
			break;
		case 0:
			std::cout << "Выход из программы.\n";
			return 0;
		default:
			std::cout << "Некорректный выбор. Повторите попытку.\n";
		}
	}
}