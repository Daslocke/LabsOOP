#include "Lab6.h"
#include <iostream>
#include <limits> // ��� numeric_limits
#include <cctype> // ��� isalpha

namespace Lab6 {
    // ���������� ������� ��� ��������� �����
    template <typename T>
    bool validateArrayInput(T* arr, size_t size) {
        for (size_t i = 0; i < size; ++i) {
            if (!(std::cin >> arr[i])) { // ��������� std::
                std::cin.clear(); // ������� ��������� ������
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ���������� �������� ����
                return false; // ���������� false, ���� ���� �� ������������� ����
            }
        }
        return true; // ��� �������� ���������
    }

    // ������������� ������� ��� ��������
    template <>
    bool validateArrayInput<char>(char* arr, size_t size) {
        for (size_t i = 0; i < size; ++i) {
            char input;
            if (!(std::cin >> input) || !std::isalpha(input)) {  // ��������, ����� ������ ��� ������
                std::cin.clear(); // ������� ��������� ������
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ���������� �������� ����
                return false; // ���������� false, ���� ���� �� �������� ������
            }
            arr[i] = input;
        }
        return true; // ��� ������� ���������
    }

    // ����� ������������ ��� �����
    template bool validateArrayInput(int* arr, size_t size);
    template bool validateArrayInput(char* arr, size_t size);
}
