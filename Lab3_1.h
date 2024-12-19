#ifndef LAB3_1_H
#define LAB3_1_H
namespace Lab3_1 {
    void runDemo();
    class Node {
    public:
        char data;        // Данные узла (символ)
        Node* next;      // Указатель на следующий узел

        Node(char value); // Конструктор узла
    };

    class SinglyLinkedList {
    private:
        Node* head;      // Указатель на голову списка

    public:
        SinglyLinkedList(); // Конструктор списка
        void append(char value); // Метод для добавления символа в конец списка
        void printReverse(); // Метод для печати списка в обратном порядке
        ~SinglyLinkedList(); // Деструктор для освобождения памяти

    private:
        void printReverse(Node* node); // Вспомогательный метод для рекурсивной печати
    };

#endif 
}
