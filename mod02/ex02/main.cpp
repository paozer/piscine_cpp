#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a (4.32f);
	Fixed b (4.20f);
	Fixed c (4);
	Fixed d (4);

	//std::cout << a << " > " << b << " is " << (a > b) << std::endl;
	//std::cout << a << " >= " << b << " is " << (a >= b) << std::endl;
	//std::cout << a << " < " << b << " is " << (a < b) << std::endl;
	//std::cout << a << " <= " << b << " is " << (a <= b) << std::endl;
	//std::cout << a << " == " << b << " is " << (a == b) << std::endl;
	//std::cout << c << " == " << d << " is " << (c == d) << std::endl;

	//std::cout << a << std::endl;
	//std::cout << ++a << std::endl;
	//std::cout << a << std::endl;
	//std::cout << a++ << std::endl;
	std::cout << a << " * " << b << " = " << (a * b) << std::endl;
	std::cout << a << " * " << d << " = " << (a * d) << std::endl;
	std::cout << a << " / " << d << " = " << (a / d) << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
