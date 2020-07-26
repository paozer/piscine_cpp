#include <iostream>
#include "Human.hpp"

int main(void)
{
    Human bob;

    std::cout << bob.identity() << std::endl;
    std::cout << bob.getBrain().identity() << std::endl;
    return (0);
}
