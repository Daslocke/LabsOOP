#include <iostream>
#include <locale>
#include <limits> // ��� numeric_limits
#include <cctype> // ��� isalpha
#include "Lab6.h"

namespace Lab6 {
    void runDemo() {
        // ��������� ������� ������
        std::setlocale(LC_ALL, "Russian");

        while (true) { // ����������� ����
            int choice;
            std::cout << "�������� ��� ������:\n1 - ����� �����\n2 - �������\n0 - �����\n"; // ��������� std::
            std::cin >> choice; // ��������� std::

            if (choice == 1) {
                int n1, n2;
                std::cout << "������� ����� ������ ������������������: "; // ��������� std::
                std::cin >> n1; // ��������� std::
                MyCollection<int> intCollection1(n1);

                std::cout << "������� ����� ����� ��� ������ ������������������:\n"; // ��������� std::
                int* inputInts = new int[n1];

                bool validInput = false;
                while (!validInput) { // ��������� ���� �� �����������
                    validInput = true;
                    for (int i = 0; i < n1; ++i) {
                        // ���������, ��� ������ ������� �������� ����� ������
                        if (!(std::cin >> inputInts[i])) { // ��������� std::
                            std::cin.clear(); // ������� ��������� ������
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ���������� �������� ����
                            std::cout << "������: ������������ ���� ����� �����. ���������� �����.\n"; // ��������� std::
                            validInput = false;
                            break; // ��������� ���� �� ������ ��������� �����
                        }
                    }
                }

                for (int i = 0; i < n1; ++i) {
                    intCollection1.add(inputInts[i]);
                }

                std::cout << "������� ����� ������ ������������������: "; // ��������� std::
                std::cin >> n2; // ��������� std::
                MyCollection<int> intCollection2(n2);

                validInput = false;
                while (!validInput) { // ��������� ���� �� �����������
                    std::cout << "������� ����� ����� ��� ������ ������������������:\n"; // ��������� std::
                    validInput = true;
                    for (int i = 0; i < n2; ++i) {
                        // ���������, ��� ������ ������� �������� ����� ������
                        if (!(std::cin >> inputInts[i])) { // ��������� std::
                            std::cin.clear(); // ������� ��������� ������
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ���������� �������� ����
                            std::cout << "������: ������������ ���� ����� ����� �� ������ ������������������. ���������� �����.\n"; // ��������� std::
                            validInput = false;
                            break; // ��������� ���� �� ������ ��������� �����
                        }
                    }
                }

                for (int i = 0; i < n2; ++i) {
                    intCollection2.add(inputInts[i]);
                }

                std::cout << "����� ��������: "; // ��������� std::
                intCollection1.printCommon(intCollection2);
                std::cout << "\n"; // ��������� std::

                delete[] inputInts;
            }
            else if (choice == 2) {
                int n1, n2;
                std::cout << "������� ����� ������ ������������������: "; // ��������� std::
                std::cin >> n1; // ��������� std::
                MyCollection<char> charCollection1(n1);

                std::cout << "������� ������� ��� ������ ������������������:\n"; // ��������� std::
                char* inputChars = new char[n1];

                bool validInput = false;
                while (!validInput) { // ��������� ���� �� �����������
                    validInput = true;
                    for (int i = 0; i < n1; ++i) {
                        // ���������, ��� ������ ������� �������� ��������
                        if (!(std::cin >> inputChars[i]) || !std::isalpha(inputChars[i])) { // ��������� std::
                            std::cin.clear(); // ������� ��������� ������
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ���������� �������� ����
                            std::cout << "������: ������������ ���� ��������. ���������� �����.\n"; // ��������� std::
                            validInput = false;
                            break; // ��������� ���� �� ������ ��������� �������
                        }
                    }
                }

                for (int i = 0; i < n1; ++i) {
                    charCollection1.add(inputChars[i]);
                }

                std::cout << "������� ����� ������ ������������������: "; // ��������� std::
                std::cin >> n2; // ��������� std::
                MyCollection<char> charCollection2(n2);

                validInput = false;
                while (!validInput) { // ��������� ���� �� �����������
                    std::cout << "������� ������� ��� ������ ������������������:\n"; // ��������� std::
                    validInput = true;
                    for (int i = 0; i < n2; ++i) {
                        // ���������, ��� ������ ������� �������� ��������
                        if (!(std::cin >> inputChars[i]) || !std::isalpha(inputChars[i])) { // ��������� std::
                            std::cin.clear(); // ������� ��������� ������
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ���������� �������� ����
                            std::cout << "������: ������������ ���� �������� �� ������ ������������������. ���������� �����.\n"; // ��������� std::
                            validInput = false;
                            break; // ��������� ���� �� ������ ��������� �������
                        }
                    }
                }

                for (int i = 0; i < n2; ++i) {
                    charCollection2.add(inputChars[i]);
                }

                std::cout << "����� ��������: "; // ��������� std::
                charCollection1.printCommon(charCollection2);
                std::cout << "\n"; // ��������� std::

                delete[] inputChars;
            }
            else if (choice == 0) {
                std::cout << "����� �� ���������.\n"; // ��������� std::
                break; // ����� �� �����
            }
            else {
                std::cout << "�������� �����. ����������, ���������� �����.\n"; // ��������� std::
            }
        }

        return; // ������ ������������ ��������
    }
}
