#pragma once
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <climits>
class ScalarConverter{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();
    public:
        static void convert(const std::string& literal);
};

bool isFloat(const std::string& literal);
bool isDouble(const std::string& literal);
bool Check(const std::string& literal, int i);