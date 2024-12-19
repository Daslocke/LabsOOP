#include <iostream>
#include "Lab7_1.h"

namespace Lab7_1 {
    void runDemo() {
        // Функция для отображения меню
        auto ShowMenu = []() {
            std::cout << "Выберите действие:" << std::endl;
            std::cout << "1. Ввести вектор" << std::endl;
            std::cout << "2. Показать вектор" << std::endl;
            std::cout << "3. Сложить два вектора" << std::endl;
            std::cout << "4. Вычесть два вектора" << std::endl;
            std::cout << "5. Увеличить вектор на 1" << std::endl;
            std::cout << "6. Нормализовать вектор" << std::endl;
            std::cout << "7. Выход" << std::endl;
            };

        std::setlocale(LC_ALL, "Russian");
        VECTOR v1(0), v2(0); // Инициализация векторов

        int choice;
        do {
            ShowMenu();
            std::cout << "Ваш выбор: ";
            std::cin >> choice;

            switch (choice) {
            case 1: {
                int size;
                std::cout << "Введите размер вектора v1: ";
                std::cin >> size;
                v1 = VECTOR(size);
                std::cin >> v1; // Используем перегруженный оператор >>
                break;
            }
            case 2:
                std::cout << "Вектор v1:" << std::endl;
                std::cout << v1; // Используем перегруженный оператор <<
                break;
            case 3: {
                int size;
                std::cout << "Введите размер вектора v2: ";
                std::cin >> size;
                v2 = VECTOR(size);
                std::cin >> v2; // Используем перегруженный оператор >>
                VECTOR v3 = v1.Add(v2);
                std::cout << "Сумма v1 и v2:" << std::endl;
                std::cout << v3; // Используем перегруженный оператор <<
                break;
            }
            case 4: {
                VECTOR v3 = v1.Sub(v2);
                std::cout << "Разность v1 и v2:" << std::endl;
                std::cout << v3; // Используем перегруженный оператор <<
                break;
            }
            case 5:
                v1.Inc();
                std::cout << "v1 после увеличения на 1:" << std::endl;
                std::cout << v1; // Используем перегруженный оператор <<
                break;
            case 6:
                v1.Normalize();
                std::cout << "Нормализованный v1:" << std::endl;
                std::cout << v1; // Используем перегруженный оператор <<
                break;
            case 7:
                std::cout << "Выход из программы." << std::endl;
                break;
            default:
                std::cout << "Неверный выбор, попробуйте снова." << std::endl;
            }
        } while (choice != 7);

        return; // Убрано возвращаемое значение
    }
}
