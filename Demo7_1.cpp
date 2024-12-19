#include <iostream>
#include "Lab7_1.h"

namespace Lab7_1 {
    void runDemo() {
        // ������� ��� ����������� ����
        auto ShowMenu = []() {
            std::cout << "�������� ��������:" << std::endl;
            std::cout << "1. ������ ������" << std::endl;
            std::cout << "2. �������� ������" << std::endl;
            std::cout << "3. ������� ��� �������" << std::endl;
            std::cout << "4. ������� ��� �������" << std::endl;
            std::cout << "5. ��������� ������ �� 1" << std::endl;
            std::cout << "6. ������������� ������" << std::endl;
            std::cout << "7. �����" << std::endl;
            };

        std::setlocale(LC_ALL, "Russian");
        VECTOR v1(0), v2(0); // ������������� ��������

        int choice;
        do {
            ShowMenu();
            std::cout << "��� �����: ";
            std::cin >> choice;

            switch (choice) {
            case 1: {
                int size;
                std::cout << "������� ������ ������� v1: ";
                std::cin >> size;
                v1 = VECTOR(size);
                std::cin >> v1; // ���������� ������������� �������� >>
                break;
            }
            case 2:
                std::cout << "������ v1:" << std::endl;
                std::cout << v1; // ���������� ������������� �������� <<
                break;
            case 3: {
                int size;
                std::cout << "������� ������ ������� v2: ";
                std::cin >> size;
                v2 = VECTOR(size);
                std::cin >> v2; // ���������� ������������� �������� >>
                VECTOR v3 = v1.Add(v2);
                std::cout << "����� v1 � v2:" << std::endl;
                std::cout << v3; // ���������� ������������� �������� <<
                break;
            }
            case 4: {
                VECTOR v3 = v1.Sub(v2);
                std::cout << "�������� v1 � v2:" << std::endl;
                std::cout << v3; // ���������� ������������� �������� <<
                break;
            }
            case 5:
                v1.Inc();
                std::cout << "v1 ����� ���������� �� 1:" << std::endl;
                std::cout << v1; // ���������� ������������� �������� <<
                break;
            case 6:
                v1.Normalize();
                std::cout << "��������������� v1:" << std::endl;
                std::cout << v1; // ���������� ������������� �������� <<
                break;
            case 7:
                std::cout << "����� �� ���������." << std::endl;
                break;
            default:
                std::cout << "�������� �����, ���������� �����." << std::endl;
            }
        } while (choice != 7);

        return; // ������ ������������ ��������
    }
}
