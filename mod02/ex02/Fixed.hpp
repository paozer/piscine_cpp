/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 17:58:21 by pramella          #+#    #+#             */
/*   Updated: 2020/06/29 17:58:22 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
        int getRawBits() const;
        void setRawBits(int const raw);
        int toInt() const;
        float toFloat() const;

        static Fixed& max(Fixed& a, Fixed& b);
        static Fixed& min(Fixed& a, Fixed& b);

    private:
        int fixed_point_value;
        static const int binary_point;
};

/* NON-MEMBER FUNCTIONS */
Fixed& min(Fixed& a, Fixed& b);
Fixed& max(Fixed& a, Fixed& b);
// can't be member fct because first arg is stream not Fixed&
std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
