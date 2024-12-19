#ifndef LAB6_H
#define LAB6_H

#include <iostream>
#include <limits>
#include <string>
#include <type_traits>

namespace Lab6 {
    void runDemo();

    // Шаблонный класс для работы с целыми числами
    template <typename T>
    class MyCollection {
    public:
        MyCollection(int size);
        ~MyCollection();
        void add(const T& item);
        void printCommon(const MyCollection<T>& other) const;

    private:
        T* collection; // Указатель на массив
        int size;      // Размер массива
        int count;     // Количество добавленных элементов
    };

    // Реализация методов класса MyCollection
    template <typename T>
    MyCollection<T>::MyCollection(int size) : size(size), count(0) {
        collection = new T[size]; // Выделение памяти для массива
    }

    template <typename T>
    MyCollection<T>::~MyCollection() {
        delete[] collection; // Освобождение памяти
    }

    template <typename T>
    void MyCollection<T>::add(const T& item) {
        if (count < size) {
            collection[count++] = item; // Добавление элемента в массив
        }
    }

    // Функция для нахождения и вывода общих элементов
    template <typename T>
    void MyCollection<T>::printCommon(const MyCollection<T>& other) const {
        for (int i = 0; i < count; ++i) {
            for (int j = 0; j < other.count; ++j) {
                if (collection[i] == other.collection[j]) {
                    std::cout << collection[i] << " "; // Печать общих элементов
                    break;
                }
            }
        }
    }

    template <typename T>
    void print(const T& value) {
        std::cout << value; // Базовый случай для вывода одного значения
    }

} // namespace Lab6

#endif // LAB6_H
