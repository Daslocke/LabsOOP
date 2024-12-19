#ifndef LAB3_1_H
#define LAB3_1_H
namespace Lab3_1 {
    void runDemo();
    class Node {
    public:
        char data;        // ������ ���� (������)
        Node* next;      // ��������� �� ��������� ����

        Node(char value); // ����������� ����
    };

    class SinglyLinkedList {
    private:
        Node* head;      // ��������� �� ������ ������

    public:
        SinglyLinkedList(); // ����������� ������
        void append(char value); // ����� ��� ���������� ������� � ����� ������
        void printReverse(); // ����� ��� ������ ������ � �������� �������
        ~SinglyLinkedList(); // ���������� ��� ������������ ������

    private:
        void printReverse(Node* node); // ��������������� ����� ��� ����������� ������
    };

#endif 
}
