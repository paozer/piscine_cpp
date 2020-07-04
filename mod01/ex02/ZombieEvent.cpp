/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 18:52:31 by pramella          #+#    #+#             */
/*   Updated: 2020/06/22 18:52:31 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type) { _type = type; }

Zombie* ZombieEvent::newZombie(std::string name) { return (new Zombie(name, _type)); }

void	ZombieEvent::randomChump()
{
	std::string name[5] = {"Xorg", "Pepe", "Angry", "Maria", "Ben"};
	Zombie z = Zombie(name[rand() % 5], _type);
	z.announce();
}
