#include "ScalarConverter.hpp"

bool Check(const std::string& literal, int i){
    std::string allowed = "0123456789";
        size_t pos = literal.find_first_not_of(allowed,i);
    if (pos == std::string::npos)
        return true;
    return false;
}

bool isDouble(const std::string& literal){
    unsigned long i = 0;
    int dotCount = 0;

    if (literal.length() > 1) {
        if (literal[i] == '+' || literal[i] == '-')
            i++;
        for (; i < literal.length(); i++) {
            if (literal[i] == '.')
                dotCount++;
            else if (!isdigit(literal[i]))
                return false;
        }
        if (dotCount == 1)
            return true;
    }    
    return false;
}

bool isFloat(const std::string& literal) {
    unsigned long i = 0;
    int dotCount = 0;

    if (literal.length() > 1 && literal[literal.length() - 1] == 'f') {
        if (literal[i] == '+' || literal[i] == '-')
            i++;
        for (; i < literal.length() - 1; i++) {
            if (literal[i] == '.')
                dotCount++;
            else if (!isdigit(literal[i]))
                return false;
        }
        if (dotCount == 1)
            return true;
    }    
    return false;
}