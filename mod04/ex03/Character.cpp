/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:28:44 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:28:45 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* CONSTRUCTION DESTRUCTION */
Character::Character() :
	_name(), _inventory_size(0),  _inventory(new AMateria*[4]()) {}

Character::Character(std::string name) :
	_name(name), _inventory_size(0),  _inventory(new AMateria*[4]()) {}

Character::~Character() { deleteInventory(); }

Character::Character(const Character& other) { *this = other; }

Character& Character::operator=(const Character& other)
{
	if (this != &other) {
		deleteInventory();
		_name = other._name;
		_inventory_size = other._inventory_size;
		_inventory = new AMateria*[4];
		for (int i = 0; i < _inventory_size; ++i) {
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = nullptr;
		}
	}
	return (*this);
}

/* MEMBER FUNCTIONS */
void Character::deleteInventory()
{
	for (int i = 0; i < _inventory_size; ++i)
		delete _inventory[i];
	delete[] _inventory;
}

void Character::equip(AMateria* m)
{
	if (_inventory_size == 4 || m == nullptr)
		return ;
	int i = 0;
	while (i < 4 && _inventory[i])
		++i;
	_inventory[i] = m;
	++_inventory_size;
}

void Character::unequip(int idx)
{
	if (idx < 0 || 3 < idx)
		return ;
	if (_inventory[idx]) {
		_inventory[idx] = nullptr;
		--_inventory_size;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || 3 < idx)
		return ;
	if (_inventory[idx])
		_inventory[idx]->use(target);
}

std::string const& Character::getName() const { return (_name); }
