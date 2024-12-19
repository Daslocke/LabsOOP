#include "Lab6.h"
#include <iostream>
#include <limits> // Для numeric_limits
#include <cctype> // Для isalpha

namespace Lab6 {
    // Реализация функции для валидации ввода
    template <typename T>
    bool validateArrayInput(T* arr, size_t size) {
        for (size_t i = 0; i < size; ++i) {
            if (!(std::cin >> arr[i])) { // Добавлено std::
                std::cin.clear(); // Очистка состояния потока
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорируем неверный ввод
                return false; // Возвращаем false, если ввод не соответствует типу
            }
        }
        return true; // Все элементы корректны
    }

    // Специализация функции для символов
    template <>
    bool validateArrayInput<char>(char* arr, size_t size) {
        for (size_t i = 0; i < size; ++i) {
            char input;
            if (!(std::cin >> input) || !std::isalpha(input)) {  // Проверка, чтобы символ был буквой
                std::cin.clear(); // Очистка состояния потока
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорируем неверный ввод
                return false; // Возвращаем false, если ввод не является буквой
            }
            arr[i] = input;
        }
        return true; // Все символы корректны
    }

    // Явная инстанциация для типов
    template bool validateArrayInput(int* arr, size_t size);
    template bool validateArrayInput(char* arr, size_t size);
}
