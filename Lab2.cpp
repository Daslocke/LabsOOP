#include <iostream>
#include "Lab2.h"

namespace Lab2 {
    Node::Node(char value) : data(value), next(nullptr) {}

    SinglyLinkedList::SinglyLinkedList() : head(nullptr) {}

    void SinglyLinkedList::append(char value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void SinglyLinkedList::printReverse(Node* node) {
        if (node == nullptr) {
            return;
        }
        printReverse(node->next);
        std::cout << node->data;
    }

    void SinglyLinkedList::printReverse() {
        printReverse(head);
    }

    SinglyLinkedList::~SinglyLinkedList() {
        Node* current = head;
        Node* nextNode;
        while (current) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
}
