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
        // Метод для ввода данных, возвращает кортеж
        std::tuple<float, char, char, int, float> Get();

        // Метод для вывода данных в новой последовательности
        void print(const std::tuple<float, char, char, int, float>& data, std::ofstream& outfile);

        // Форматируем вывод, добавляя недостающие *
        std::string formatOutput(const std::string& value);

        // Перегрузка метода для целых чисел
        std::string formatOutput(int value);

        // Преобразование вещественного числа в строку с заданной точностью
        std::string floatToString(float value, int decimalPlaces);
    };
}
