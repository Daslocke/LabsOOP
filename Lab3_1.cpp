#include <iostream>
#include "Lab3_1.h"
namespace Lab3_1 {
    Node::Node(char value) : data(value), next(nullptr) {}

    SinglyLinkedList::SinglyLinkedList() : head(nullptr) {}

    void SinglyLinkedList::append(char value) {
        Node* newNode = new Node(value); // Создаем новый узел
        if (!head) {
            head = newNode; // Если список пуст, новый узел становится головой
        }
        else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next; // Ищем последний узел
            }
            temp->next = newNode; // Добавляем новый узел в конец
        }
    }

    void SinglyLinkedList::printReverse(Node* node) {
        if (node == nullptr) {
            return; // Базовый случай для рекурсии
        }
        printReverse(node->next); // Рекурсивный вызов для следующего узла
        std::cout << node->data; // Печатаем данные узла
    }

    void SinglyLinkedList::printReverse() {
        printReverse(head); // Запускаем печать с головы списка
    }

    SinglyLinkedList::~SinglyLinkedList() {
        Node* current = head;
        Node* nextNode;
        while (current) {
            nextNode = current->next; // Запоминаем следующий узел
            delete current; // Удаляем текущий узел
            current = nextNode; // Переходим к следующему
        }
    }
}
