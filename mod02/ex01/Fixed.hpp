/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 17:11:32 by pramella          #+#    #+#             */
/*   Updated: 2020/06/27 17:11:32 by pramella         ###   ########lyon.fr   */
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
        int fixed_point_value;
        static const int binary_point;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
