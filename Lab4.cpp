#include "lab4.h"
namespace Lab4 {
    VECTOR::VECTOR(int n) : n(n) {
        for (int i = 0; i < n; ++i) {
            A[i] = 0.0f; // Инициализируем нулями
        }
    }

    VECTOR::VECTOR(int n, float value) : n(n) {
        for (int i = 0; i < n; ++i) {
            A[i] = value; // Инициализируем заданным значением
        }
    }

    VECTOR::VECTOR(const VECTOR& other) : n(other.n) {
        for (int i = 0; i < n; ++i) {
            A[i] = other.A[i]; // Копируем значения
        }
    }

    void VECTOR::Set(int t, float value) {
        if (t >= 0 && t < n) {
            A[t] = value;
        }
        else {
            std::cout << "Индекс вне диапазона." << std::endl;
        }
    }

    BaseVector* VECTOR::Add(BaseVector* other) {
        VECTOR* otherVector = dynamic_cast<VECTOR*>(other);
        if (!otherVector) {
            throw std::invalid_argument("Неверный тип вектора для сложения.");
        }

        int maxSize = std::max(n, otherVector->n);
        VECTOR* result = new VECTOR(maxSize);

        for (int i = 0; i < maxSize; ++i) {
            float val1 = (i < n) ? A[i] : 0.0f; // Если индекс вне диапазона, используем 0
            float val2 = (i < otherVector->n) ? otherVector->A[i] : 0.0f; // Если индекс вне диапазона, используем 0
            result->A[i] = val1 + val2; // Сложение
        }
        return result;
    }

    float VECTOR::Norm() const {
        float sum = 0.0f;
        for (int i = 0; i < n; ++i) {
            sum += A[i] * A[i];
        }
        return std::sqrt(sum);
    }

    void VECTOR::Print() const {
        for (int i = 0; i < n; ++i) {
            std::cout << "a(" << i << ") = " << std::fixed << std::setprecision(2) << A[i] << std::endl;
        }
    }

    void VECTOR::Inc() {
        for (int i = 0; i < n; ++i) {
            A[i]++;
        }
    }

    void VECTOR::Dec() {
        for (int i = 0; i < n; ++i) {
            A[i]--;
        }
    }

    VECTOR VECTOR::Sub(const VECTOR& other) const {
        if (n != other.n) {
            throw std::invalid_argument("Размеры векторов не совпадают.");
        }
        VECTOR result(n);
        for (int i = 0; i < n; ++i) {
            result.A[i] = A[i] - other.A[i];
        }
        return result;
    }

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

    VECTOR VECTOR::Cmul(float scalar) const {
        VECTOR result(n);
        for (int i = 0; i < n; ++i) {
            result.A[i] = A[i] * scalar;
        }
        return result;
    }

    void VECTOR::Normalize() {
        float norm = Norm();
        if (norm != 0) {
            for (int i = 0; i < n; ++i) {
                A[i] /= norm;
            }
        }
    }

    void VECTOR::Input() {
        std::cout << "Введите " << n << " элементов вектора:" << std::endl;
        for (int i = 0; i < n; ++i) {
            std::cin >> A[i];
        }
    }
}