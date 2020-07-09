/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:27:00 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:27:00 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {}
Enemy::~Enemy() {}

Enemy::Enemy(int hp, std::string const& type) :
	_hp(hp), _type(type)
{}

Enemy::Enemy(const Enemy& other)
{ *this = other; }

Enemy& Enemy::operator=(const Enemy& other)
{
	if (this != &other) {
		_hp = other._hp;
		_type = other._type;
	}
	return (*this);
}

void Enemy::takeDamage(int amount)
{
	if (amount > 0) {
		_hp -= amount;
	}
}

std::string Enemy::getType() const { return (_type); }
int Enemy::getHP() const { return (_hp); }
