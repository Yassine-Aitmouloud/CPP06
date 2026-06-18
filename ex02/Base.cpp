#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base::~Base() {
}
Base * generate(void) {
    int random = rand() % 3;

    if (random == 0) {
        return new A();
    } 
    else if (random == 1) {
        return new B();
    } 
    else {
        return new C();
    }
}
void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL) {
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B*>(p) != NULL) {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C*>(p) != NULL) {
        std::cout << "C" << std::endl;
    }
    else {
        std::cout << "Unknown Type" << std::endl;
    }
}
void identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return;
    } catch (std::exception& e) {}
    try {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return;
    } catch (std::exception& e) {}
    try {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return;
    } catch (std::exception& e) {}

    std::cout << "Unknown Type" << std::endl;
}