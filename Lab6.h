#ifndef LAB6_H
#define LAB6_H

#include <iostream>
#include <limits>
#include <string>
#include <type_traits>

namespace Lab6 {
    void runDemo();

    // ��������� ����� ��� ������ � ������ �������
    template <typename T>
    class MyCollection {
    public:
        MyCollection(int size);
        ~MyCollection();
        void add(const T& item);
        void printCommon(const MyCollection<T>& other) const;

    private:
        T* collection; // ��������� �� ������
        int size;      // ������ �������
        int count;     // ���������� ����������� ���������
    };

    // ���������� ������� ������ MyCollection
    template <typename T>
    MyCollection<T>::MyCollection(int size) : size(size), count(0) {
        collection = new T[size]; // ��������� ������ ��� �������
    }

    template <typename T>
    MyCollection<T>::~MyCollection() {
        delete[] collection; // ������������ ������
    }

    template <typename T>
    void MyCollection<T>::add(const T& item) {
        if (count < size) {
            collection[count++] = item; // ���������� �������� � ������
        }
    }

    // ������� ��� ���������� � ������ ����� ���������
    template <typename T>
    void MyCollection<T>::printCommon(const MyCollection<T>& other) const {
        for (int i = 0; i < count; ++i) {
            for (int j = 0; j < other.count; ++j) {
                if (collection[i] == other.collection[j]) {
                    std::cout << collection[i] << " "; // ������ ����� ���������
                    break;
                }
            }
        }
    }

    template <typename T>
    void print(const T& value) {
        std::cout << value; // ������� ������ ��� ������ ������ ��������
    }

} // namespace Lab6

#endif // LAB6_H
