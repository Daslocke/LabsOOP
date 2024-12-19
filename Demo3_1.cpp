#include <iostream>
#include <string>
#include "Lab3_1.h"

namespace Lab3_1 {
    void runDemo() {
        setlocale(LC_ALL, "Rus"); // ������������� ����������� ��� �������� �����
        SinglyLinkedList* list = new SinglyLinkedList(); // ������� ������ ������ � �������������� new
        std::string input; // ��������� std::
        int choice;

        do {
            std::cout << "������� ������ (��� ������� 0 ��� ������): "; // ��������� std::
            std::getline(std::cin, input); // ��������� ������

            if (input == "0") {
                break; // ����� �� �����, ���� ������� 0
            }

            for (char c : input) {
                list->append(c); // ��������� ������ ������ � ������
            }

            std::cout << "������ � �������� �������: "; // ��������� std::
            list->printReverse(); // �������� ������ � �������� �������
            std::cout << std::endl; // ��������� std::

            // ������� ������ ��� ���������� �����
            delete list;
            list = new SinglyLinkedList(); // ������� ����� ������ ��� ��������� ������

        } while (true);

        delete list; // ����������� ������, ���������� ��� ������
    }
}
