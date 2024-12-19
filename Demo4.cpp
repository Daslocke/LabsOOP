#include <iostream>
#include "lab4.h"

namespace Lab4 {
    void runDemo() {
        setlocale(LC_ALL, "Russian"); // ������������� ������ ��� ����������� ����������� ������� ��������

        while (true) {
            int size;
            std::cout << "������� ������ ������� v1 (��� 0 ��� ������): "; // ��������� std::
            std::cin >> size; // ��������� std::

            if (size == 0) {
                break; // ����� �� �����, ���� ������� 0
            }

            VECTOR v1(size); // ������ ��������, ��������� �������������
            v1.Input(); // ���� �������� �������

            std::cout << "������� ������ ������� v2: "; // ��������� std::
            std::cin >> size; // ��������� std::

            VECTOR v2(size); // ������ ��������, ��������� �������������
            v2.Input(); // ���� �������� �������

            std::cout << "������ v1:" << std::endl; // ��������� std::
            v1.Print();

            std::cout << "������ v2:" << std::endl; // ��������� std::
            v2.Print();

            // �������� ��������
            BaseVector* v3 = v1.Add(&v2);
            std::cout << "����� v1 � v2:" << std::endl; // ��������� std::
            v3->Print();

            // ����������� �������
            VECTOR v4 = v1; // ������������ ����������� �����������
            std::cout << "����� v1 � v4:" << std::endl; // ��������� std::
            v4.Print();

            // ���������� �����
            std::cout << "����� v1: " << v1.Norm() << std::endl; // ��������� std::

            // ���������� v1
            v1.Inc();
            std::cout << "v1 ����� ���������� �� 1:" << std::endl; // ��������� std::
            v1.Print();

            // ������������ v1
            v1.Normalize();
            std::cout << "��������������� v1:" << std::endl; // ��������� std::
            v1.Print();

            delete v3; // ������������ ������
        }

        return; // ��������� ���������, ������ ������������ ��������
    }
}
