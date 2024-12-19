#include <iostream>
#include "Lab3_2.h"

namespace Lab3_2 {
    void runDemo() {
        setlocale(LC_ALL, "Rus"); // ������������� ����������� ��� �������� �����
        int N;

        while (true) {
            std::cout << "������� ������ ������� N (��� 0 ��� ������): "; // ��������� std::
            std::cin >> N; // ��������� std::

            if (N == 0) {
                break; // ����� �� �����, ���� ������� 0
            }

            ArrayOperations arrayOps(N); // ������� ������ ������
            arrayOps.fillArray(); // ��������� ������ ���������� �������

            double average = arrayOps.calculateAverage(); // ��������� ������� ��������������
            double maxDifference = arrayOps.calculateMaxDifference(); // ��������� max|X(i)-S|

            std::cout << "������� ��������������: " << average << std::endl; // ��������� std::
            std::cout << "������������ ������� max|X(i)-S|: " << maxDifference << std::endl; // ��������� std::
        }

        return; // ��������� ���������
    }
}
