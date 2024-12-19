#ifndef LAB4_H
#define LAB4_H

#include <iostream>
#include <cmath>
#include <stdexcept>
#include <iomanip>
namespace Lab4 {
    void runDemo();
    class BaseVector {
    public:
        virtual void Set(int t, float value) = 0; // Виртуальная функция для установки значения
        virtual BaseVector* Add(BaseVector* other) = 0; // Виртуальная функция для сложения
        virtual float Norm() const = 0; // Виртуальная функция для вычисления нормы
        virtual void Print() const = 0; // Виртуальная функция для вывода вектора
        virtual ~BaseVector() {} // Виртуальный деструктор
    };

    class VECTOR : public BaseVector {
    public:
        VECTOR(int n); // Конструктор
        VECTOR(int n, float value); // Конструктор с заданным значением
        VECTOR(const VECTOR& other); // Конструктор копирования

        void Set(int t, float value) override; // Установка значения компоненты
        BaseVector* Add(BaseVector* other) override; // Сложение векторов
        float Norm() const override; // Вычисление нормы
        void Print() const override; // Вывод вектора

        void Inc(); // Увеличение всех компонентов на 1
        void Dec(); // Уменьшение всех компонентов на 1
        VECTOR Sub(const VECTOR& other) const; // Вычитание векторов
        float Mul(const VECTOR& other) const; // Скалярное произведение
        VECTOR Cmul(float scalar) const; // Умножение вектора на число
        void Normalize(); // Нормализация вектора
        void Input(); // Метод для ввода вектора

    private:
        int n; // Размер вектора
        float A[200]; // Массив для хранения компонентов вектора
    };

#endif // LAB4_H
}
