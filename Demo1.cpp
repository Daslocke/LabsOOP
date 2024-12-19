#include <iostream>
#include "Lab1.h"

namespace Lab1 {

    // Основная функция для демонстрации работы с классом VECTOR
    void runDemo() {
        std::setlocale(LC_ALL, "Russian"); // Устанавливаем русскую локаль
        int choice;
        VECTOR* v1 = nullptr;  // Указатель на первый вектор
        VECTOR* v2 = nullptr;  // Указатель на второй вектор

        while (true) {
            std::cout << "Выберите действие:\n";
            std::cout << "1. Создать вектор v1\n";
            std::cout << "2. Создать вектор v2\n";
            std::cout << "3. Вывести вектор v1\n";
            std::cout << "4. Вывести вектор v2\n";
            std::cout << "5. Сложить v1 и v2\n";
            std::cout << "6. Копировать v1 в v2\n";
            std::cout << "7. Вычислить норму v1\n";
            std::cout << "8. Увеличить v1 на 1\n";
            std::cout << "9. Нормализовать v1\n";
            std::cout << "0. Выход\n";
            std::cout << "Введите номер действия: ";
            std::cin >> choice;

            if (choice == 0) {
                break; // Выход из программы
            }

            switch (choice) {
            case 1: {
                int size;
                std::cout << "Введите размер вектора v1: ";
                std::cin >> size;
                v1 = new VECTOR(size);  // Создаем новый вектор v1
                v1->Input();  // Вводим элементы вектора v1
                break;
            }
            case 2: {
                int size;
                std::cout << "Введите размер вектора v2: ";
                std::cin >> size;
                v2 = new VECTOR(size);  // Создаем новый вектор v2
                v2->Input();  // Вводим элементы вектора v2
                break;
            }
            case 3:
                if (v1) {
                    std::cout << "Вектор v1:" << std::endl;
                    v1->Print();  // Выводим вектор v1
                }
                else {
                    std::cout << "Вектор v1 не создан." << std::endl;
                }
                break;
            case 4:
                if (v2) {
                    std::cout << "Вектор v2:" << std::endl;
                    v2->Print();  // Выводим вектор v2
                }
                else {
                    std::cout << "Вектор v2 не создан." << std::endl;
                }
                break;
            case 5:
                if (v1 && v2) {
                    VECTOR v3 = v1->Add(*v2);  // Сложение векторов v1 и v2
                    std::cout << "Сумма v1 и v2:" << std::endl;
                    v3.Print();  // Выводим результат сложения
                }
                else {
                    std::cout << "Оба вектора должны быть созданы." << std::endl;
                }
                break;
            case 6:
                if (v1) {
                    v2 = new VECTOR(*v1);  // Копируем вектор v1 в v2
                    std::cout << "Копия v1 в v2 создана." << std::endl;
                }
                else {
                    std::cout << "Вектор v1 не создан." << std::endl;
                }
                break;
            case 7:
                if (v1) {
                    std::cout << "Норма v1: " << v1->Norm() << std::endl;  // Вычисляем норму v1
                }
                else {
                    std::cout << "Вектор v1 не создан." << std::endl;
                }
                break;
            case 8:
                if (v1) {
                    v1->Inc();  // Увеличиваем все компоненты вектора v1 на 1
                    std::cout << "Вектор v1 после увеличения на 1:" << std::endl;
                    v1->Print();  // Выводим обновленный вектор v1
                }
                else {
                    std::cout << "Вектор v1 не создан." << std::endl;
                }
                break;
            case 9:
                if (v1) {
                    v1->Normalize();  // Нормализуем вектор v1
                    std::cout << "Нормализованный вектор v1:" << std::endl;
                    v1->Print();  // Выводим нормализованный вектор v1
                }
                else {
                    std::cout << "Вектор v1 не создан." << std::endl;
                }
                break;
            default:
                std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
            }
        }

        // Очистка памяти
        delete v1;
        delete v2;
    }
}
