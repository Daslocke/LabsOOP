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
        virtual void Set(int t, float value) = 0; // ����������� ������� ��� ��������� ��������
        virtual BaseVector* Add(BaseVector* other) = 0; // ����������� ������� ��� ��������
        virtual float Norm() const = 0; // ����������� ������� ��� ���������� �����
        virtual void Print() const = 0; // ����������� ������� ��� ������ �������
        virtual ~BaseVector() {} // ����������� ����������
    };

    class VECTOR : public BaseVector {
    public:
        VECTOR(int n); // �����������
        VECTOR(int n, float value); // ����������� � �������� ���������
        VECTOR(const VECTOR& other); // ����������� �����������

        void Set(int t, float value) override; // ��������� �������� ����������
        BaseVector* Add(BaseVector* other) override; // �������� ��������
        float Norm() const override; // ���������� �����
        void Print() const override; // ����� �������

        void Inc(); // ���������� ���� ����������� �� 1
        void Dec(); // ���������� ���� ����������� �� 1
        VECTOR Sub(const VECTOR& other) const; // ��������� ��������
        float Mul(const VECTOR& other) const; // ��������� ������������
        VECTOR Cmul(float scalar) const; // ��������� ������� �� �����
        void Normalize(); // ������������ �������
        void Input(); // ����� ��� ����� �������

    private:
        int n; // ������ �������
        float A[200]; // ������ ��� �������� ����������� �������
    };

#endif // LAB4_H
}
