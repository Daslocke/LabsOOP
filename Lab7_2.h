#pragma once
#include <iostream>
#include <iomanip>
#include <tuple>
#include <sstream>
#include <cmath>
#include <fstream>

namespace Lab7_2 {
    void runDemo();

    class DataProcessor {
    public:
        // ����� ��� ����� ������, ���������� ������
        std::tuple<float, char, char, int, float> Get();

        // ����� ��� ������ ������ � ����� ������������������
        void print(const std::tuple<float, char, char, int, float>& data, std::ofstream& outfile);

        // ����������� �����, �������� ����������� *
        std::string formatOutput(const std::string& value);

        // ���������� ������ ��� ����� �����
        std::string formatOutput(int value);

        // �������������� ������������� ����� � ������ � �������� ���������
        std::string floatToString(float value, int decimalPlaces);
    };
}
