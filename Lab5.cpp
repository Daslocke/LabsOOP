#include "Lab5.h"

namespace Lab5 {
    // ����������� � �������� �������
    VECTOR::VECTOR(int n) : n(n) {
        for (int i = 0; i < n; ++i) {
            A[i] = 0.0f; // �������������� ������
        }
    }

    // ����������� � �������� � ���������
    VECTOR::VECTOR(int n, float value) : n(n) {
        for (int i = 0; i < n; ++i) {
            A[i] = value; // �������������� �������� ���������
        }
    }

    // ����������� �����������
    VECTOR::VECTOR(const VECTOR& other) : n(other.n) {
        for (int i = 0; i < n; ++i) {
            A[i] = other.A[i]; // �������� ��������
        }
    }

    // ��������� �������� ���������� �������
    void VECTOR::Set(int t, float value) {
        if (t >= 0 && t < n) {
            A[t] = value;
        }
        else {
            std::cout << "������ ��� ���������." << std::endl;
        }
    }

    // ��������� ������ �������� ���� �����������
    void VECTOR::Set(float value) {
        for (int i = 0; i < n; ++i) {
            A[i] = value;
        }
    }

    // ���������� ���� ����������� �� 1
    void VECTOR::Inc() {
        for (int i = 0; i < n; ++i) {
            A[i]++;
        }
    }

    // ���������� ���� ����������� �� 1
    void VECTOR::Dec() {
        for (int i = 0; i < n; ++i) {
            A[i]--;
        }
    }

    // ���������� ��������� ��������
    VECTOR VECTOR::operator+(const VECTOR& other) const {
        int maxSize = std::max(n, other.n);
        VECTOR result(maxSize);

        for (int i = 0; i < maxSize; ++i) {
            float val1 = (i < n) ? A[i] : 0.0f; // ���� ������ ��� ���������, ���������� 0
            float val2 = (i < other.n) ? other.A[i] : 0.0f; // ���� ������ ��� ���������, ���������� 0
            result.A[i] = val1 + val2; // ��������
        }
        return result;
    }

    // ���������� ��������� ���������
    VECTOR VECTOR::operator-(const VECTOR& other) const {
        if (n != other.n) {
            throw std::invalid_argument("������� �������� �� ���������.");
        }
        VECTOR result(n);
        for (int i = 0; i < n; ++i) {
            result.A[i] = A[i] - other.A[i];
        }
        return result;
    }

    // ��������� ��������
    float VECTOR::Mul(const VECTOR& other) const {
        if (n != other.n) {
            throw std::invalid_argument("������� �������� �� ���������.");
        }
        float result = 0.0f;
        for (int i = 0; i < n; ++i) {
            result += A[i] * other.A[i];
        }
        return result;
    }

    // ��������� ������� �� �����
    VECTOR VECTOR::Cmul(float scalar) const {
        VECTOR result(n);
        for (int i = 0; i < n; ++i) {
            result.A[i] = A[i] * scalar;
        }
        return result;
    }

    // ���������� ����� �������
    float VECTOR::Norm() const {
        float sum = 0.0f;
        for (int i = 0; i < n; ++i) {
            sum += A[i] * A[i];
        }
        return std::sqrt(sum);
    }

    // ������������ �������
    void VECTOR::Normalize() {
        float norm = Norm();
        if (norm != 0) {
            for (int i = 0; i < n; ++i) {
                A[i] /= norm;
            }
        }
    }

    // ����� �������
    void VECTOR::Print() const {
        for (int i = 0; i < n; ++i) {
            std::cout << "a(" << i << ") = " << std::fixed << std::setprecision(2) << A[i] << std::endl;
        }
    }

    // ����� ��� ����� �������
    void VECTOR::Input() {
        std::cout << "������� " << n << " ��������� �������:" << std::endl;
        for (int i = 0; i < n; ++i) {
            std::cin >> A[i];
        }
    }
}
