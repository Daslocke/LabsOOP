#include <iostream>
#include <locale>
#include <limits> // Для numeric_limits
#include <cctype> // Для isalpha
#include "Lab6.h"

namespace Lab6 {
    void runDemo() {
        // Установка русской локали
        std::setlocale(LC_ALL, "Russian");

        while (true) { // Бесконечный цикл
            int choice;
            std::cout << "Выберите тип данных:\n1 - Целые числа\n2 - Символы\n0 - Выход\n"; // Добавлено std::
            std::cin >> choice; // Добавлено std::

            if (choice == 1) {
                int n1, n2;
                std::cout << "Введите длину первой последовательности: "; // Добавлено std::
                std::cin >> n1; // Добавлено std::
                MyCollection<int> intCollection1(n1);

                std::cout << "Введите целые числа для первой последовательности:\n"; // Добавлено std::
                int* inputInts = new int[n1];

                bool validInput = false;
                while (!validInput) { // Повторяем ввод до правильного
                    validInput = true;
                    for (int i = 0; i < n1; ++i) {
                        // Проверяем, что каждый элемент является целым числом
                        if (!(std::cin >> inputInts[i])) { // Добавлено std::
                            std::cin.clear(); // Очистка состояния потока
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорируем неверный ввод
                            std::cout << "Ошибка: некорректный ввод целых чисел. Попробуйте снова.\n"; // Добавлено std::
                            validInput = false;
                            break; // Прерываем ввод на первом ошибочном числе
                        }
                    }
                }

                for (int i = 0; i < n1; ++i) {
                    intCollection1.add(inputInts[i]);
                }

                std::cout << "Введите длину второй последовательности: "; // Добавлено std::
                std::cin >> n2; // Добавлено std::
                MyCollection<int> intCollection2(n2);

                validInput = false;
                while (!validInput) { // Повторяем ввод до правильного
                    std::cout << "Введите целые числа для второй последовательности:\n"; // Добавлено std::
                    validInput = true;
                    for (int i = 0; i < n2; ++i) {
                        // Проверяем, что каждый элемент является целым числом
                        if (!(std::cin >> inputInts[i])) { // Добавлено std::
                            std::cin.clear(); // Очистка состояния потока
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорируем неверный ввод
                            std::cout << "Ошибка: некорректный ввод целых чисел во второй последовательности. Попробуйте снова.\n"; // Добавлено std::
                            validInput = false;
                            break; // Прерываем ввод на первом ошибочном числе
                        }
                    }
                }

                for (int i = 0; i < n2; ++i) {
                    intCollection2.add(inputInts[i]);
                }

                std::cout << "Общие элементы: "; // Добавлено std::
                intCollection1.printCommon(intCollection2);
                std::cout << "\n"; // Добавлено std::

                delete[] inputInts;
            }
            else if (choice == 2) {
                int n1, n2;
                std::cout << "Введите длину первой последовательности: "; // Добавлено std::
                std::cin >> n1; // Добавлено std::
                MyCollection<char> charCollection1(n1);

                std::cout << "Введите символы для первой последовательности:\n"; // Добавлено std::
                char* inputChars = new char[n1];

                bool validInput = false;
                while (!validInput) { // Повторяем ввод до правильного
                    validInput = true;
                    for (int i = 0; i < n1; ++i) {
                        // Проверяем, что каждый элемент является символом
                        if (!(std::cin >> inputChars[i]) || !std::isalpha(inputChars[i])) { // Добавлено std::
                            std::cin.clear(); // Очистка состояния потока
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорируем неверный ввод
                            std::cout << "Ошибка: некорректный ввод символов. Попробуйте снова.\n"; // Добавлено std::
                            validInput = false;
                            break; // Прерываем ввод на первом ошибочном символе
                        }
                    }
                }

                for (int i = 0; i < n1; ++i) {
                    charCollection1.add(inputChars[i]);
                }

                std::cout << "Введите длину второй последовательности: "; // Добавлено std::
                std::cin >> n2; // Добавлено std::
                MyCollection<char> charCollection2(n2);

                validInput = false;
                while (!validInput) { // Повторяем ввод до правильного
                    std::cout << "Введите символы для второй последовательности:\n"; // Добавлено std::
                    validInput = true;
                    for (int i = 0; i < n2; ++i) {
                        // Проверяем, что каждый элемент является символом
                        if (!(std::cin >> inputChars[i]) || !std::isalpha(inputChars[i])) { // Добавлено std::
                            std::cin.clear(); // Очистка состояния потока
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорируем неверный ввод
                            std::cout << "Ошибка: некорректный ввод символов во второй последовательности. Попробуйте снова.\n"; // Добавлено std::
                            validInput = false;
                            break; // Прерываем ввод на первом ошибочном символе
                        }
                    }
                }

                for (int i = 0; i < n2; ++i) {
                    charCollection2.add(inputChars[i]);
                }

                std::cout << "Общие элементы: "; // Добавлено std::
                charCollection1.printCommon(charCollection2);
                std::cout << "\n"; // Добавлено std::

                delete[] inputChars;
            }
            else if (choice == 0) {
                std::cout << "Выход из программы.\n"; // Добавлено std::
                break; // Выход из цикла
            }
            else {
                std::cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n"; // Добавлено std::
            }
        }

        return; // Убрано возвращаемое значение
    }
}
