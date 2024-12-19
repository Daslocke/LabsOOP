#include <iostream>
#include "Lab3_2.h"

namespace Lab3_2 {
    void runDemo() {
        setlocale(LC_ALL, "Rus"); // Устанавливаем локализацию для русского языка
        int N;

        while (true) {
            std::cout << "Введите размер массива N (или 0 для выхода): "; // Добавлено std::
            std::cin >> N; // Добавлено std::

            if (N == 0) {
                break; // Выход из цикла, если введено 0
            }

            ArrayOperations arrayOps(N); // Создаем объект класса
            arrayOps.fillArray(); // Заполняем массив случайными числами

            double average = arrayOps.calculateAverage(); // Вычисляем среднее арифметическое
            double maxDifference = arrayOps.calculateMaxDifference(); // Вычисляем max|X(i)-S|

            std::cout << "Среднее арифметическое: " << average << std::endl; // Добавлено std::
            std::cout << "Максимальная разница max|X(i)-S|: " << maxDifference << std::endl; // Добавлено std::
        }

        return; // Завершаем программу
    }
}
