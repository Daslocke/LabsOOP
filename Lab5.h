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
        VECTOR(int n); // ����������� � �������� �������
        VECTOR(int n, float value); // ����������� � �������� � ���������
        VECTOR(const VECTOR& other); // ����������� �����������

        void Set(int t, float value); // ��������� �������� �� �������
        void Set(float value); // ��������� ������ �������� ���� �����������
        void Inc(); // ���������� ���� ����������� �� 1
        void Dec(); // ���������� ���� ����������� �� 1

        VECTOR operator+(const VECTOR& other) const; // ���������� ��������� ��������
        VECTOR operator-(const VECTOR& other) const; // ���������� ��������� ���������

        float Mul(const VECTOR& other) const; // ��������� ��������
        VECTOR Cmul(float scalar) const; // ��������� �� �����
        float Norm() const; // ���������� ����� �������
        void Normalize(); // ������������ �������
        void Print() const; // ����� �������
        void Input(); // ���� �������

    private:
        int n; // ������ �������
        float A[200]; // ������ ��� �������� ����������� �������
    };

#endif // LAB5_H
}