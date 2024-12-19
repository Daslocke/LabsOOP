#include "Lab5.h"

namespace Lab5 {
    void runDemo() {
        setlocale(LC_ALL, "Russian"); // ������������� ������ ��� ����������� ����������� ������� ��������

        int choice;

        do {
            std::cout << "�������� ��������:" << std::endl; // ��������� std::
            std::cout << "1. ������� � ������ ��� �������" << std::endl; // ��������� std::
            std::cout << "2. ������� �������" << std::endl; // ��������� std::
            std::cout << "3. ������� �������" << std::endl; // ��������� std::
            std::cout << "4. ������� �������" << std::endl; // ��������� std::
            std::cout << "5. ���������� ������" << std::endl; // ��������� std::
            std::cout << "6. ��������� ����� �������" << std::endl; // ��������� std::
            std::cout << "7. ��������� ������" << std::endl; // ��������� std::
            std::cout << "8. ������������� ������" << std::endl; // ��������� std::
            std::cout << "9. ���������� �������� ���� ����������� �������" << std::endl; // ��������� std::
            std::cout << "0. �����" << std::endl; // ��������� std::
            std::cout << "������� ����� ��������: "; // ��������� std::
            std::cin >> choice; // ��������� std::

            static VECTOR v1(0), v2(0); // ������������� ��������

            switch (choice) {
            case 1: {
                int size;
                std::cout << "������� ������ ������� v1: "; // ��������� std::
                std::cin >> size; // ��������� std::
                v1 = VECTOR(size); // ������� ������ v1
                v1.Input(); // ���� �������� ������� v1

                std::cout << "������� ������ ������� v2: "; // ��������� std::
                std::cin >> size; // ��������� std::
                v2 = VECTOR(size); // ������� ������ v2
                v2.Input(); // ���� �������� ������� v2
                break;
            }
            case 2:
                std::cout << "������ v1:" << std::endl; // ��������� std::
                v1.Print();
                std::cout << "������ v2:" << std::endl; // ��������� std::
                v2.Print();
                break;
            case 3: {
                VECTOR v3 = v1 + v2; // �������� ��������
                std::cout << "����� v1 � v2:" << std::endl; // ��������� std::
                v3.Print();
                break;
            }
            case 4: {
                try {
                    VECTOR v4 = v1 - v2; // ��������� ��������
                    std::cout << "�������� v1 � v2:" << std::endl; // ��������� std::
                    v4.Print();
                }
                catch (const std::invalid_argument& e) { // ��������� std::
                    std::cout << e.what() << std::endl; // ������� ��������� �� ������
                }
                break;
            }
            case 5: {
                VECTOR v5 = v1; // ����������� �������
                std::cout << "����� v1 � v5:" << std::endl; // ��������� std::
                v5.Print();
                break;
            }
            case 6:
                std::cout << "����� v1: " << v1.Norm() << std::endl; // ��������� std::
                break;
            case 7:
                v1.Inc(); // ���������� v1
                std::cout << "v1 ����� ���������� �� 1:" << std::endl; // ��������� std::
                v1.Print();
                break;
            case 8:
                v1.Normalize(); // ������������ v1
                std::cout << "��������������� v1:" << std::endl; // ��������� std::
                v1.Print();
                break;
            case 9: {
                float newValue;
                std::cout << "������� �������� ��� ��������� ���� ����������� v1: "; // ��������� std::
                std::cin >> newValue; // ��������� std::
                v1.Set(newValue);
                std::cout << "v1 ����� ��������� ���� ����������� �������� " << newValue << ":" << std::endl; // ��������� std::
                v1.Print();
                break;
            }
            case 0:
                std::cout << "����� �� ���������." << std::endl; // ��������� std::
                break;
            default:
                std::cout << "�������� �����, ���������� �����." << std::endl; // ��������� std::
            }
        } while (choice != 0);

        return; // ��������� ���������, ������ ������������ ��������
    }
}
