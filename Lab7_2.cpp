#include "Lab7_2.h"

namespace Lab7_2 {
    // ����� ��� ����� ������, ���������� ������
    std::tuple<float, char, char, int, float> DataProcessor::Get() {
        float f1, f2;
        int i;
        char c1, c2;
        std::cout << "���� f1, c1, c2, i, f2: ";
        std::cin >> f1 >> c1 >> c2 >> i >> f2;
        return std::make_tuple(f1, c1, c2, i, f2);
    }

    // ����� ��� ������ ������ � ����� ������������������
    void DataProcessor::print(const std::tuple<float, char, char, int, float>& data, std::ofstream& outfile) {
        // ��������� ������ �� �������
        float f1 = std::get<0>(data);
        char c1 = std::get<1>(data);
        char c2 = std::get<2>(data);
        int i = std::get<3>(data);
        float f2 = std::get<4>(data);

        // ��������������� �����
        std::string output = std::string(1, c1) + "\n" +
            formatOutput(floatToString(f2, 1)) + "\n" +
            formatOutput(floatToString(f2, 2)) + "\n" +
            formatOutput(floatToString(f2, 3)) + "\n" +
            formatOutput(i) + "\n" +
            formatOutput(floatToString(f1, 1)) + "\n" +
            formatOutput(floatToString(f1, 2)) + "\n" +
            formatOutput(floatToString(f1, 3)) + "\n" +
            std::string(1, c2) + "\n";

        // ������� �� �����
        std::cout << output;

        // ���������� � ����
        outfile << output;
    }

    // ����������� �����, �������� ����������� *
    std::string DataProcessor::formatOutput(const std::string& value) {
        std::stringstream formatted;
        if (value.length() < 6) {
            int starsNeeded = 6 - value.length();
            formatted << std::string(starsNeeded, '*') << value; // ��������� *
        }
        else {
            formatted << value;
        }
        return formatted.str();
    }

    // ���������� ������ ��� ����� �����
    std::string DataProcessor::formatOutput(int value) {
        std::stringstream formatted;
        formatted << value;
        return formatOutput(formatted.str());
    }

    // �������������� ������������� ����� � ������ � �������� ���������
    std::string DataProcessor::floatToString(float value, int decimalPlaces) {
        std::stringstream ss;
        ss << std::fixed << std::setprecision(decimalPlaces) << value;
        return ss.str();
    }
}
