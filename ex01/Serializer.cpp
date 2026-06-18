#include "Serializer.hpp"

Serializer::Serializer(){
    std::cout << "Serializer Default Constructor Called" << std::endl;
}

Serializer::Serializer(const Serializer &Other){
    std::cout << "Serializer Copy Constructor Called" << std::endl;
    *this = Other;
}

Serializer &Serializer::operator=(const Serializer &other){
    std::cout << "Serializer Copy assignment Constructor Called" << std::endl;
    if (this != &other){
    }
    return *this;
}

Serializer::~Serializer(){
    std::cout << "Serializer destructor Called" << std::endl;
}

Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}