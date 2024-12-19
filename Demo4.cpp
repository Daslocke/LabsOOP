#include <iostream>
#include "lab4.h"

namespace Lab4 {
    void runDemo() {
        setlocale(LC_ALL, "Russian"); // Устанавливаем локаль для корректного отображения русских символов

        while (true) {
            int size;
            std::cout << "Введите размер вектора v1 (или 0 для выхода): "; // Добавлено std::
            std::cin >> size; // Добавлено std::

            if (size == 0) {
                break; // Выход из цикла, если введено 0
            }

            VECTOR v1(size); // Вектор размером, введенным пользователем
            v1.Input(); // Ввод значений вектора

            std::cout << "Введите размер вектора v2: "; // Добавлено std::
            std::cin >> size; // Добавлено std::

            VECTOR v2(size); // Вектор размером, введенным пользователем
            v2.Input(); // Ввод значений вектора

            std::cout << "Вектор v1:" << std::endl; // Добавлено std::
            v1.Print();

            std::cout << "Вектор v2:" << std::endl; // Добавлено std::
            v2.Print();

            // Сложение векторов
            BaseVector* v3 = v1.Add(&v2);
            std::cout << "Сумма v1 и v2:" << std::endl; // Добавлено std::
            v3->Print();

            // Копирование вектора
            VECTOR v4 = v1; // Используется конструктор копирования
            std::cout << "Копия v1 в v4:" << std::endl; // Добавлено std::
            v4.Print();

            // Вычисление нормы
            std::cout << "Норма v1: " << v1.Norm() << std::endl; // Добавлено std::

            // Увеличение v1
            v1.Inc();
            std::cout << "v1 после увеличения на 1:" << std::endl; // Добавлено std::
            v1.Print();

            // Нормализация v1
            v1.Normalize();
            std::cout << "Нормализованный v1:" << std::endl; // Добавлено std::
            v1.Print();

            delete v3; // Освобождение памяти
        }

        return; // Завершаем программу, убрано возвращаемое значение
    }
}
