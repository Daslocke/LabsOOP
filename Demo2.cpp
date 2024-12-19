#include <iostream>
#include <string>
#include "Lab2.h"

namespace Lab2 {
    void runDemo() {
        setlocale(LC_ALL, "Rus");
        SinglyLinkedList list;
        std::string input; // Добавлено std::
        int choice;

        do {
            std::cout << "Введите строку: "; // Добавлено std::
            std::getline(std::cin, input); // Добавлено std::

            for (char c : input) {
                list.append(c);
            }

            std::cout << "Строка в обратном порядке: "; // Добавлено std::
            list.printReverse();
            std::cout << std::endl;

            std::cout << "Хотите продолжить? (1 - да, 0 - нет): "; // Добавлено std::
            std::cin >> choice; // Добавлено std::
            std::cin.ignore(); // Игнорируем символ новой строки после ввода числа

            // Очищаем список для следующего ввода
            if (choice == 1) {
                list = SinglyLinkedList(); // Создаем новый список
            }

        } while (choice != 0);

        return; // Завершаем программу, убрано возвращаемое значение
    }
}
