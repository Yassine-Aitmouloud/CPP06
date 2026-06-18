#include "Base.hpp"
int main() {
    srand(time(NULL)); 
    Base *a = generate();
    identify(a);
    identify(*a);
    delete a;
}