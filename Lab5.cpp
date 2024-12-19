#include "Lab5.h"

namespace Lab5 {
    // Конструктор с размером вектора
    VECTOR::VECTOR(int n) : n(n) {
        for (int i = 0; i < n; ++i) {
            A[i] = 0.0f; // Инициализируем нулями
        }
    }

    // Конструктор с размером и значением
    VECTOR::VECTOR(int n, float value) : n(n) {
        for (int i = 0; i < n; ++i) {
            A[i] = value; // Инициализируем заданным значением
        }
    }

    // Конструктор копирования
    VECTOR::VECTOR(const VECTOR& other) : n(other.n) {
        for (int i = 0; i < n; ++i) {
            A[i] = other.A[i]; // Копируем значения
        }
    }

    // Установка значения компоненты вектора
    void VECTOR::Set(int t, float value) {
        if (t >= 0 && t < n) {
            A[t] = value;
        }
        else {
            std::cout << "Индекс вне диапазона." << std::endl;
        }
    }

    // Установка одного значения всем компонентам
    void VECTOR::Set(float value) {
        for (int i = 0; i < n; ++i) {
            A[i] = value;
        }
    }

    // Увеличение всех компонентов на 1
    void VECTOR::Inc() {
        for (int i = 0; i < n; ++i) {
            A[i]++;
        }
    }

    // Уменьшение всех компонентов на 1
    void VECTOR::Dec() {
        for (int i = 0; i < n; ++i) {
            A[i]--;
        }
    }

    // Перегрузка оператора сложения
    VECTOR VECTOR::operator+(const VECTOR& other) const {
        int maxSize = std::max(n, other.n);
        VECTOR result(maxSize);

        for (int i = 0; i < maxSize; ++i) {
            float val1 = (i < n) ? A[i] : 0.0f; // Если индекс вне диапазона, используем 0
            float val2 = (i < other.n) ? other.A[i] : 0.0f; // Если индекс вне диапазона, используем 0
            result.A[i] = val1 + val2; // Сложение
        }
        return result;
    }

    // Перегрузка оператора вычитания
    VECTOR VECTOR::operator-(const VECTOR& other) const {
        if (n != other.n) {
            throw std::invalid_argument("Размеры векторов не совпадают.");
        }
        VECTOR result(n);
        for (int i = 0; i < n; ++i) {
            result.A[i] = A[i] - other.A[i];
        }
        return result;
    }

    // Умножение векторов
    float VECTOR::Mul(const VECTOR& other) const {
        if (n != other.n) {
            throw std::invalid_argument("Размеры векторов не совпадают.");
        }
        float result = 0.0f;
        for (int i = 0; i < n; ++i) {
            result += A[i] * other.A[i];
        }
        return result;
    }

    // Умножение вектора на число
    VECTOR VECTOR::Cmul(float scalar) const {
        VECTOR result(n);
        for (int i = 0; i < n; ++i) {
            result.A[i] = A[i] * scalar;
        }
        return result;
    }

    // Вычисление нормы вектора
    float VECTOR::Norm() const {
        float sum = 0.0f;
        for (int i = 0; i < n; ++i) {
            sum += A[i] * A[i];
        }
        return std::sqrt(sum);
    }

    // Нормализация вектора
    void VECTOR::Normalize() {
        float norm = Norm();
        if (norm != 0) {
            for (int i = 0; i < n; ++i) {
                A[i] /= norm;
            }
        }
    }

    // Вывод вектора
    void VECTOR::Print() const {
        for (int i = 0; i < n; ++i) {
            std::cout << "a(" << i << ") = " << std::fixed << std::setprecision(2) << A[i] << std::endl;
        }
    }

    // Метод для ввода вектора
    void VECTOR::Input() {
        std::cout << "Введите " << n << " элементов вектора:" << std::endl;
        for (int i = 0; i < n; ++i) {
            std::cin >> A[i];
        }
    }
}
