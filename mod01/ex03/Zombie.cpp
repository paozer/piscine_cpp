/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 18:52:24 by pramella          #+#    #+#             */
/*   Updated: 2020/06/22 18:52:25 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

void Zombie::announce()
{ std::cout << _name << "\t(" << _type << ")\tBRAIIIIIIIIIIIINS"<< std::endl; }
