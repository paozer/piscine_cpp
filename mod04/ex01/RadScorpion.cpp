/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:27:39 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:27:39 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{ std::cout << "* click click click *" << std::endl; }

RadScorpion::~RadScorpion() { std::cout << "* SCROTCH *" << std::endl; }

RadScorpion::RadScorpion(const RadScorpion& other) : Enemy(80, "Rad Scorpion")
{ *this = other; }

RadScorpion& RadScorpion::operator=(const RadScorpion& other)
{
	Enemy::operator=(other);
	return (*this);
}
