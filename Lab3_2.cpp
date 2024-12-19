#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Lab3_2.h"

namespace Lab3_2 {
    ArrayOperations::ArrayOperations(int n) : size(n) {
        array = new double[size]; // �������� ������ ��� �������
    }

    ArrayOperations::~ArrayOperations() {
        delete[] array; // ����������� ������
    }

    void ArrayOperations::fillArray() {
        std::srand(std::time(0)); // ������������� ���������� ��������� �����
        for (int i = 0; i < size; ++i) {
            array[i] = static_cast<double>(std::rand() % 100); // ���������� ������� ���������� ������� �� 0 �� 99
        }
    }

    double ArrayOperations::calculateAverage() {
        double sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += array[i];
        }
        return sum / size; // ���������� ������� ��������������
    }

    double ArrayOperations::calculateMaxDifference() {
        double S = calculateAverage(); // ��������� �������
        double maxDiff = 0;

        for (int i = 0; i < size; ++i) {
            double diff = std::abs(array[i] - S); // ��������� |X(i) - S|
            if (diff > maxDiff) {
                maxDiff = diff; // ��������� ������������ �������
            }
        }
        return maxDiff; // ���������� ������������ �������
    }
}
