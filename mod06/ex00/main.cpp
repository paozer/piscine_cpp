#include <iostream>
#include "Convert.hpp"

int main(int ac, char** av)
{
    if (ac != 2) {
        std::cout << "Usage: ./convert [string]" << std::endl;
        return 1;
    }
    Convert convert (av[1]);
    convert.toChar();
    convert.toInt();
    convert.toDouble();
    convert.toFloat();
    return 0;
}
