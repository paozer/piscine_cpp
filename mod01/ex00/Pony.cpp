/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:23:09 by pramella          #+#    #+#             */
/*   Updated: 2020/06/22 17:23:10 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) { std::cout << "Object created.\n"; }
Pony::~Pony(void) { std::cout << "Object destroyed.\n"; }
void	Pony::set_name(std::string name) { _name = name; }
void	Pony::set_color(std::string color) { _color = color; }
void	Pony::set_age(int age) { _age = age; }
void	Pony::set_height(int height) { _height = height; }

void Pony::ponyOnTheStack(std::string name, std::string color, int age, int height)
{
	Pony my_pony;

	my_pony.set_name(name);
	my_pony.set_color(color);
	my_pony.set_age(age);
	my_pony.set_height(height);
	std::cout << my_pony.repr() << std::endl;
}

void Pony::ponyOnTheHeap(std::string name, std::string color, int age, int height)
{
	Pony* my_pony = new Pony;

	my_pony->set_name(name);
	my_pony->set_color(color);
	my_pony->set_age(age);
	my_pony->set_height(height);
	std::cout << my_pony->repr() << std::endl;
	delete my_pony;
}

std::string Pony::repr(void)
{
	std::string repr;

	repr = _name + " is a " + std::to_string(_age) + " year old pony with " + _color + " hair.\n";
	repr += "This pony is " + std::to_string(_height) + " cm tall.";
	return (repr);
}
