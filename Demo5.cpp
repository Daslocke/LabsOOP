#include "Lab5.h"

namespace Lab5 {
    void runDemo() {
        setlocale(LC_ALL, "Russian"); // Устанавливаем локаль для корректного отображения русских символов

        int choice;

        do {
            std::cout << "Выберите действие:" << std::endl; // Добавлено std::
            std::cout << "1. Создать и ввести два вектора" << std::endl; // Добавлено std::
            std::cout << "2. Вывести векторы" << std::endl; // Добавлено std::
            std::cout << "3. Сложить векторы" << std::endl; // Добавлено std::
            std::cout << "4. Вычесть векторы" << std::endl; // Добавлено std::
            std::cout << "5. Копировать вектор" << std::endl; // Добавлено std::
            std::cout << "6. Вычислить норму вектора" << std::endl; // Добавлено std::
            std::cout << "7. Увеличить вектор" << std::endl; // Добавлено std::
            std::cout << "8. Нормализовать вектор" << std::endl; // Добавлено std::
            std::cout << "9. Установить значение всем компонентам вектора" << std::endl; // Добавлено std::
            std::cout << "0. Выход" << std::endl; // Добавлено std::
            std::cout << "Введите номер действия: "; // Добавлено std::
            std::cin >> choice; // Добавлено std::

            static VECTOR v1(0), v2(0); // Инициализация векторов

            switch (choice) {
            case 1: {
                int size;
                std::cout << "Введите размер вектора v1: "; // Добавлено std::
                std::cin >> size; // Добавлено std::
                v1 = VECTOR(size); // Создаем вектор v1
                v1.Input(); // Ввод значений вектора v1

                std::cout << "Введите размер вектора v2: "; // Добавлено std::
                std::cin >> size; // Добавлено std::
                v2 = VECTOR(size); // Создаем вектор v2
                v2.Input(); // Ввод значений вектора v2
                break;
            }
            case 2:
                std::cout << "Вектор v1:" << std::endl; // Добавлено std::
                v1.Print();
                std::cout << "Вектор v2:" << std::endl; // Добавлено std::
                v2.Print();
                break;
            case 3: {
                VECTOR v3 = v1 + v2; // Сложение векторов
                std::cout << "Сумма v1 и v2:" << std::endl; // Добавлено std::
                v3.Print();
                break;
            }
            case 4: {
                try {
                    VECTOR v4 = v1 - v2; // Вычитание векторов
                    std::cout << "Разность v1 и v2:" << std::endl; // Добавлено std::
                    v4.Print();
                }
                catch (const std::invalid_argument& e) { // Добавлено std::
                    std::cout << e.what() << std::endl; // Выводим сообщение об ошибке
                }
                break;
            }
            case 5: {
                VECTOR v5 = v1; // Копирование вектора
                std::cout << "Копия v1 в v5:" << std::endl; // Добавлено std::
                v5.Print();
                break;
            }
            case 6:
                std::cout << "Норма v1: " << v1.Norm() << std::endl; // Добавлено std::
                break;
            case 7:
                v1.Inc(); // Увеличение v1
                std::cout << "v1 после увеличения на 1:" << std::endl; // Добавлено std::
                v1.Print();
                break;
            case 8:
                v1.Normalize(); // Нормализация v1
                std::cout << "Нормализованный v1:" << std::endl; // Добавлено std::
                v1.Print();
                break;
            case 9: {
                float newValue;
                std::cout << "Введите значение для установки всем компонентам v1: "; // Добавлено std::
                std::cin >> newValue; // Добавлено std::
                v1.Set(newValue);
                std::cout << "v1 после установки всем компонентам значения " << newValue << ":" << std::endl; // Добавлено std::
                v1.Print();
                break;
            }
            case 0:
                std::cout << "Выход из программы." << std::endl; // Добавлено std::
                break;
            default:
                std::cout << "Неверный выбор, попробуйте снова." << std::endl; // Добавлено std::
            }
        } while (choice != 0);

        return; // Завершаем программу, убрано возвращаемое значение
    }
}
