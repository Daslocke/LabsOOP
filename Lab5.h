#ifndef LAB5_H
#define LAB5_H

#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdexcept>

namespace Lab5 {
    void runDemo();
    class VECTOR {
    public:
        VECTOR(int n); // Конструктор с размером вектора
        VECTOR(int n, float value); // Конструктор с размером и значением
        VECTOR(const VECTOR& other); // Конструктор копирования

        void Set(int t, float value); // Установка значения по индексу
        void Set(float value); // Установка одного значения всем компонентам
        void Inc(); // Увеличение всех компонентов на 1
        void Dec(); // Уменьшение всех компонентов на 1

        VECTOR operator+(const VECTOR& other) const; // Перегрузка оператора сложения
        VECTOR operator-(const VECTOR& other) const; // Перегрузка оператора вычитания

        float Mul(const VECTOR& other) const; // Умножение векторов
        VECTOR Cmul(float scalar) const; // Умножение на число
        float Norm() const; // Вычисление нормы вектора
        void Normalize(); // Нормализация вектора
        void Print() const; // Вывод вектора
        void Input(); // Ввод вектора

    private:
        int n; // Размер вектора
        float A[200]; // Массив для хранения компонентов вектора
    };

#endif // LAB5_H
}