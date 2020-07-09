/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:26:49 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:26:50 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const& name) :
	_name(name), _ap(40), _current_weapon(nullptr) {}

Character::~Character() {}

Character::Character(const Character& other) { *this = other; }

Character& Character::operator=(const Character& other)
{
	if (this != &other) {
		_name = other._name;
		_ap = other._ap;
		_current_weapon = other._current_weapon;
	}
	return (*this);
}

void Character::recoverAP()
{
	if (_ap + 10 > 40)
		_ap = 40;
	else
		_ap += 10;
}

void Character::attack(Enemy* enemy)
{
	if (_current_weapon == nullptr || _ap - _current_weapon->getAPCost() < 0)
		return ;
	_ap -= _current_weapon->getAPCost();
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _current_weapon->getName() << std::endl;
	_current_weapon->attack();
	enemy->takeDamage(_current_weapon->getDamage());
	// could have made this more robust by using reference to pointer instead of pointer
	// and setting deleted pointer to nullptr
	// subject demands function signature so yeah...
	if (enemy->getHP() <= 0)
		delete enemy;
}

void Character::equip(AWeapon* weapon) { _current_weapon = weapon; }

std::ostream& operator<<(std::ostream& os, Character& c)
{
	if (c.isArmed())
		os << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeaponName() << std::endl;
	else
		os << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	return (os);
}

std::string Character::getName() const { return (_name); }
std::string Character::getWeaponName() const
{
	if (isArmed())
		return (_current_weapon->getName());
	return ("(no weapon equipped)");
}
int Character::getAP() const { return (_ap); }
bool Character::isArmed() const { return (_current_weapon != nullptr); }
