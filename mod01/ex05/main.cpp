#include <iostream>
#include "Human.hpp"

int main()
{
    Human bob;
    std::cout << bob.identity() << std::endl;
    std::cout << bob.getBrain().identity() << std::endl;
    return 0;
}
