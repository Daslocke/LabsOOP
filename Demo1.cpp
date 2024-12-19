#include <iostream>
#include "Lab1.h"

namespace Lab1 {

    // �������� ������� ��� ������������ ������ � ������� VECTOR
    void runDemo() {
        std::setlocale(LC_ALL, "Russian"); // ������������� ������� ������
        int choice;
        VECTOR* v1 = nullptr;  // ��������� �� ������ ������
        VECTOR* v2 = nullptr;  // ��������� �� ������ ������

        while (true) {
            std::cout << "�������� ��������:\n";
            std::cout << "1. ������� ������ v1\n";
            std::cout << "2. ������� ������ v2\n";
            std::cout << "3. ������� ������ v1\n";
            std::cout << "4. ������� ������ v2\n";
            std::cout << "5. ������� v1 � v2\n";
            std::cout << "6. ���������� v1 � v2\n";
            std::cout << "7. ��������� ����� v1\n";
            std::cout << "8. ��������� v1 �� 1\n";
            std::cout << "9. ������������� v1\n";
            std::cout << "0. �����\n";
            std::cout << "������� ����� ��������: ";
            std::cin >> choice;

            if (choice == 0) {
                break; // ����� �� ���������
            }

            switch (choice) {
            case 1: {
                int size;
                std::cout << "������� ������ ������� v1: ";
                std::cin >> size;
                v1 = new VECTOR(size);  // ������� ����� ������ v1
                v1->Input();  // ������ �������� ������� v1
                break;
            }
            case 2: {
                int size;
                std::cout << "������� ������ ������� v2: ";
                std::cin >> size;
                v2 = new VECTOR(size);  // ������� ����� ������ v2
                v2->Input();  // ������ �������� ������� v2
                break;
            }
            case 3:
                if (v1) {
                    std::cout << "������ v1:" << std::endl;
                    v1->Print();  // ������� ������ v1
                }
                else {
                    std::cout << "������ v1 �� ������." << std::endl;
                }
                break;
            case 4:
                if (v2) {
                    std::cout << "������ v2:" << std::endl;
                    v2->Print();  // ������� ������ v2
                }
                else {
                    std::cout << "������ v2 �� ������." << std::endl;
                }
                break;
            case 5:
                if (v1 && v2) {
                    VECTOR v3 = v1->Add(*v2);  // �������� �������� v1 � v2
                    std::cout << "����� v1 � v2:" << std::endl;
                    v3.Print();  // ������� ��������� ��������
                }
                else {
                    std::cout << "��� ������� ������ ���� �������." << std::endl;
                }
                break;
            case 6:
                if (v1) {
                    v2 = new VECTOR(*v1);  // �������� ������ v1 � v2
                    std::cout << "����� v1 � v2 �������." << std::endl;
                }
                else {
                    std::cout << "������ v1 �� ������." << std::endl;
                }
                break;
            case 7:
                if (v1) {
                    std::cout << "����� v1: " << v1->Norm() << std::endl;  // ��������� ����� v1
                }
                else {
                    std::cout << "������ v1 �� ������." << std::endl;
                }
                break;
            case 8:
                if (v1) {
                    v1->Inc();  // ����������� ��� ���������� ������� v1 �� 1
                    std::cout << "������ v1 ����� ���������� �� 1:" << std::endl;
                    v1->Print();  // ������� ����������� ������ v1
                }
                else {
                    std::cout << "������ v1 �� ������." << std::endl;
                }
                break;
            case 9:
                if (v1) {
                    v1->Normalize();  // ����������� ������ v1
                    std::cout << "��������������� ������ v1:" << std::endl;
                    v1->Print();  // ������� ��������������� ������ v1
                }
                else {
                    std::cout << "������ v1 �� ������." << std::endl;
                }
                break;
            default:
                std::cout << "�������� �����. ���������� �����." << std::endl;
            }
        }

        // ������� ������
        delete v1;
        delete v2;
    }
}
