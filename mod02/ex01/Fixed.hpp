#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <fstream>
# include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        ~Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);

        int getRawBits() const;
        void setRawBits(int const raw);
        int toInt() const;
        float toFloat() const;

    private:
        int _raw;
        static const int _binary_point;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
