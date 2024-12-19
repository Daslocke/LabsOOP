#ifndef LAB3_2_H
#define LAB3_2_H

namespace Lab3_2 {
    void runDemo();
    class ArrayOperations {
    private:
        double* array; // Динамический массив
        int size;      // Размер массива

    public:
        ArrayOperations(int n); // Конструктор
        ~ArrayOperations();      // Деструктор
        void fillArray();       // Метод для заполнения массива
        double calculateAverage(); // Метод для вычисления среднего арифметического
        double calculateMaxDifference(); // Метод для вычисления max|X(i)-S|
    };

#endif 
}
