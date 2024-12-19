#ifndef LAB1_H
#define LAB1_H

#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdexcept>

namespace Lab1 {
    void runDemo();
    class VECTOR {
    public:
        VECTOR(int n); // Конструктор с размером вектора
        VECTOR(int n, float value); // Конструктор с размером и значением
        VECTOR(const VECTOR& other); // Конструктор копирования

        void Set(int t, float value); // Установка значения компоненты вектора
        void Inc(); // Увеличение всех компонентов на 1
        void Dec(); // Уменьшение всех компонентов на 1
        VECTOR Add(const VECTOR& other) const; // Сложение векторов
        VECTOR Sub(const VECTOR& other) const; // Вычитание векторов
        float Mul(const VECTOR& other) const; // Умножение векторов
        VECTOR Cmul(float scalar) const; // Умножение вектора на число
        float Norm() const; // Вычисление нормы вектора
        void Normalize(); // Нормализация вектора
        void Print() const; // Вывод вектора
        void Input(); // Метод для ввода вектора

    private:
        int n; // Размер вектора
        float A[200]; // Массив для хранения компонентов вектора
    };

} // namespace Demo1

#endif // LAB1_H
