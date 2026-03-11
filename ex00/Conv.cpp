#include "Conv.hpp"

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

void  ScalarConverter::convert(const std::string& literal){

}