#ifndef LAB7_1_H
#define LAB7_1_H

#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdexcept>
namespace Lab7_1 {
    void runDemo();
    class VECTOR {
    public:
        VECTOR(int n); // �����������
        VECTOR(int n, float value); // ����������� � ��������������
        VECTOR(const VECTOR& other); // ����������� �����������

        void Set(int t, float value);
        void Inc();
        void Dec();
        VECTOR Add(const VECTOR& other) const;
        VECTOR Sub(const VECTOR& other) const;
        float Mul(const VECTOR& other) const;
        VECTOR Cmul(float scalar) const;
        float Norm() const;
        void Normalize();
        void Print() const;

        // ��������������� ����������
        friend std::istream& operator>>(std::istream& is, VECTOR& v);
        friend std::ostream& operator<<(std::ostream& os, const VECTOR& v);

    private:
        int n; // ������ �������
        float A[200]; // ������ ��� �������� ����������� �������
    };

#endif // LAB7_1_H
}