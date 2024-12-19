#ifndef LAB3_2_H
#define LAB3_2_H

namespace Lab3_2 {
    void runDemo();
    class ArrayOperations {
    private:
        double* array; // ������������ ������
        int size;      // ������ �������

    public:
        ArrayOperations(int n); // �����������
        ~ArrayOperations();      // ����������
        void fillArray();       // ����� ��� ���������� �������
        double calculateAverage(); // ����� ��� ���������� �������� ���������������
        double calculateMaxDifference(); // ����� ��� ���������� max|X(i)-S|
    };

#endif 
}
