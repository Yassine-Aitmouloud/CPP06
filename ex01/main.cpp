#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main() {
    Data myData;
    myData.id = 1337;
    myData.name = "Yassine";
    std::cout << "Memory Address: " << &myData << std::endl;
    std::cout << "\n" << std::endl;
    uintptr_t raw = Serializer::serialize(&myData);
    std::cout << "Raw integer:    " << raw << std::endl;
    std::cout << "\n" << std::endl;
    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "Memory Address: " << deserializedData << std::endl;
    return 0;
}