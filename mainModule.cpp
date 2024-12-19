#include <iostream>
#include <limits> // ��� std::numeric_limits
// ���������� ��� ������������ ����
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
		std::cout << "=====[����]=====\n";
		std::cout << "�������� ��������� ��� �������:\n";
		std::cout << "-1. �������� �������\n";
		std::cout << "1. ��������� Lab1\n";
		std::cout << "2. ��������� Lab2\n";
		std::cout << "31. ��������� Lab3_1\n";
		std::cout << "32. ��������� Lab3_2\n";
		std::cout << "4. ��������� Lab4\n";
		std::cout << "5. ��������� Lab5\n";
		std::cout << "6. ��������� Lab6\n";
		std::cout << "71. ��������� Lab7_1\n";
		std::cout << "72. ��������� Lab7_2\n";
		std::cout << "0. �����\n";
		std::cout << "��� �����: ";
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
			std::cout << "����� �� ���������.\n";
			return 0;
		default:
			std::cout << "������������ �����. ��������� �������.\n";
		}
	}
}