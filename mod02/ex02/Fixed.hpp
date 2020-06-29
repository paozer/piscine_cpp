#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <fstream>
# include <cmath>

class Fixed
{
	public:
		/* CONSTRUCTION & DESTRUCTION */
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed& other);
		~Fixed();

		/* OPERATOR OVERLOADS */
		Fixed& operator=(const Fixed& other);
		bool operator<(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		Fixed operator++(int); // post-increment
		Fixed operator--(int); // post-decrement
		Fixed& operator++(); // pre-increment
		Fixed& operator--(); // pre-decrement

		/* MEMBER FUNCTIONS */
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;

	private:
		int fixed_point_value;
		static const int binary_point = 8;
};

// can't be member fct because first arg is stream not Fixed&
std::ostream& operator<<(std::ostream& os, const Fixed& f);

Fixed& min(Fixed& a, Fixed& b);
Fixed& max(Fixed& a, Fixed& b);

#endif
