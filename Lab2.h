#ifndef LAB2_H
#define LAB2_H

namespace Lab2 {
    void runDemo();
    class Node {
    public:
        char data;
        Node* next;

        Node(char value);
    };

    class SinglyLinkedList {
    private:
        Node* head;

    public:
        SinglyLinkedList();
        void append(char value);
        void printReverse();
        ~SinglyLinkedList();

    private:
        void printReverse(Node* node);
    };
}
#endif 
