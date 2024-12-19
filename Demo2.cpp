#include <iostream>
#include <string>
#include "Lab2.h"

namespace Lab2 {
    void runDemo() {
        setlocale(LC_ALL, "Rus");
        SinglyLinkedList list;
        std::string input; // ��������� std::
        int choice;

        do {
            std::cout << "������� ������: "; // ��������� std::
            std::getline(std::cin, input); // ��������� std::

            for (char c : input) {
                list.append(c);
            }

            std::cout << "������ � �������� �������: "; // ��������� std::
            list.printReverse();
            std::cout << std::endl;

            std::cout << "������ ����������? (1 - ��, 0 - ���): "; // ��������� std::
            std::cin >> choice; // ��������� std::
            std::cin.ignore(); // ���������� ������ ����� ������ ����� ����� �����

            // ������� ������ ��� ���������� �����
            if (choice == 1) {
                list = SinglyLinkedList(); // ������� ����� ������
            }

        } while (choice != 0);

        return; // ��������� ���������, ������ ������������ ��������
    }
}
