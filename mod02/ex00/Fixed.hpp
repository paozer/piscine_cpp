#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        int getRawBits() const;
        void setRawBits(int const raw);

    private:
        int _raw;
        static const int _binary_point;
};

#endif
