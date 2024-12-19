#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Lab3_2.h"

namespace Lab3_2 {
    ArrayOperations::ArrayOperations(int n) : size(n) {
        array = new double[size]; // Выделяем память для массива
    }

    ArrayOperations::~ArrayOperations() {
        delete[] array; // Освобождаем память
    }

    void ArrayOperations::fillArray() {
        std::srand(std::time(0)); // Инициализация генератора случайных чисел
        for (int i = 0; i < size; ++i) {
            array[i] = static_cast<double>(std::rand() % 100); // Заполнение массива случайными числами от 0 до 99
        }
    }

    double ArrayOperations::calculateAverage() {
        double sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += array[i];
        }
        return sum / size; // Возвращаем среднее арифметическое
    }

    double ArrayOperations::calculateMaxDifference() {
        double S = calculateAverage(); // Вычисляем среднее
        double maxDiff = 0;

        for (int i = 0; i < size; ++i) {
            double diff = std::abs(array[i] - S); // Вычисляем |X(i) - S|
            if (diff > maxDiff) {
                maxDiff = diff; // Обновляем максимальную разницу
            }
        }
        return maxDiff; // Возвращаем максимальную разницу
    }
}
