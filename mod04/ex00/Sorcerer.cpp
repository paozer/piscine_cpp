/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 01:38:20 by pramella          #+#    #+#             */
/*   Updated: 2020/07/05 01:38:20 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/* CANONICAL FORM & << OVERLOAD */
Sorcerer::Sorcerer()
{ std::cout << "This should never appear." << std::endl; }

Sorcerer::Sorcerer(const std::string& name, const std::string& title) :
    _name(name), _title(title)
{ std::cout << _name << ", " << _title << ", is born!" << std::endl; }

Sorcerer::~Sorcerer()
{ std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl; }

Sorcerer::Sorcerer(const Sorcerer& other)
{
    std::cout << "Copy Constructor" << std::endl;
    *this = other;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& other)
{
    std::cout << "Assignment Operator" << std::endl;
    if (this != &other) {
        _name = other._name;
        _title = other._title;
    }
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Sorcerer& s)
{
    os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
    return (os);
}

/* ACCESSOR FUNCTIONS */
std::string Sorcerer::getName() const { return (_name); }
std::string Sorcerer::getTitle() const { return (_title); }


/* MEMBER FUNCTIONS */
void Sorcerer::polymorph(Victim const& v) const
{ v.getPolymorphed(); }
