#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "ScalarConverter Default Constructor Called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &Other){
    std::cout << "ScalarConverter Copy Constructor Called" << std::endl;
    *this = Other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){
    std::cout << "ScalarConverter Copy assignment Constructor Called" << std::endl;
    if (this != &other){
    }
    return *this;
}

ScalarConverter::~ScalarConverter(){
    std::cout << "ScalarConverter destructor Called" << std::endl;
}

int   convertPseudu(const std::string& literal){
    std::string a[] = {"nan", "+inf", "inf" ,"-inf", "nanf", "+inff", "-inff" , "inff"};
    for (int i = 0; i < 8; i++){
        if (literal == a[i]){
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            if (i < 3)
                std::cout << "float: " << a[i] << "f" << std::endl;
            else
                std::cout << "float: " << a[i] << std::endl;
            if (i < 3)
                std::cout << "double: " << a[i] << std::endl;
            else
                std::cout << "double: " << a[i].substr(0, a[i].size() - 1) << std::endl;
            return 1;
        }
    }
    return 0;
}

void   convertChar(const std::string& literal){
    if (isprint(literal[0]))
        std::cout << "char: '"<< literal[0] << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(literal[0]) << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "double: " << static_cast<double>(literal[0]) << std::endl;
}

void convertInt(const std::string& literal){
    const char *str = literal.c_str();
    double result = strtod(str, NULL);        
        if (result < 0 || result > 127)
            std::cout << "char: impossible" << std::endl;
        else if (!isprint(result))
          std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '"<< static_cast<char>(result) << "'" << std::endl;
        if (result > INT_MAX || result < INT_MIN)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(result) << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(result) << "f" << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "double: " << static_cast<double>(result) << std::endl;
}

void convertFloat(const std::string& literal){
    const char *str = literal.c_str();
        double result = strtod(str, NULL);
        if (result < 0 || result > 127)
            std::cout << "char: impossible" << std::endl;
        else if (!isprint(static_cast<int>(result)))
          std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '"<< static_cast<char>(result) << "'" << std::endl;
        if (result > INT_MAX || result < INT_MIN)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(result) << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(result) << "f" << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "double: " << static_cast<double>(result) << std::endl;
}

void convertDouble(const std::string& literal){
    const char *str = literal.c_str();
        double result = strtod(str, NULL);
        if (result < 0 || result > 127)
            std::cout << "char: impossible" << std::endl;
        else if (!isprint(static_cast<int>(result)))
          std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '"<< static_cast<char>(result) << "'" << std::endl;
        if (result > INT_MAX || result < INT_MIN)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(result) << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(result) << "f" << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "double: " << static_cast<double>(result) << std::endl;
}

void  ScalarConverter::convert(const std::string& literal){
    if (convertPseudu(literal))
        return ;
    else if (literal.length() == 1 && !isdigit(literal[0]))
        convertChar(literal);
    else if ((literal[0] == '+' || literal[0] == '-') && literal.length() > 1 && Check(literal,1))
        convertInt(literal);
    else if (Check(literal,0))
        convertInt(literal);
    else if (isFloat(literal))
        convertFloat(literal);
    else if (isDouble(literal))
        convertDouble(literal);
    else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}