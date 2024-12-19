#include <iostream>
#include <string>
#include "Lab3_1.h"

namespace Lab3_1 {
    void runDemo() {
        setlocale(LC_ALL, "Rus"); // Устанавливаем локализацию для русского языка
        SinglyLinkedList* list = new SinglyLinkedList(); // Создаем объект списка с использованием new
        std::string input; // Добавлено std::
        int choice;

        do {
            std::cout << "Введите строку (или введите 0 для выхода): "; // Добавлено std::
            std::getline(std::cin, input); // Считываем строку

            if (input == "0") {
                break; // Выход из цикла, если введено 0
            }

            for (char c : input) {
                list->append(c); // Добавляем каждый символ в список
            }

            std::cout << "Строка в обратном порядке: "; // Добавлено std::
            list->printReverse(); // Печатаем строку в обратном порядке
            std::cout << std::endl; // Добавлено std::

            // Очищаем список для следующего ввода
            delete list;
            list = new SinglyLinkedList(); // Создаем новый список для следующей строки

        } while (true);

        delete list; // Освобождаем память, выделенную под список
    }
}
