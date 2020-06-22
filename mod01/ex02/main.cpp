/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 18:52:21 by pramella          #+#    #+#             */
/*   Updated: 2020/06/22 18:52:22 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(void)
{
	ZombieEvent ze;

	std::cout << "Type is [really angry]\n";
	ze.setZombieType("really angry");
	ze.randomChump();
	Zombie* z0 = ze.newZombie("z0");
	Zombie* z1 = ze.newZombie("z1");
	z0->announce();
	z1->announce();

	std::cout << "\nType is [not so angry]\n";
	ze.setZombieType("not so angry");
	ze.randomChump();
	Zombie* z2 = ze.newZombie("z2");
	z2->announce();

	std::cout << "\nType is [friendly]\n";
	ze.setZombieType("friendly");
	Zombie* z3 = ze.newZombie("z3");
	z0->announce();
	z1->announce();
	z2->announce();
	z3->announce();
	ze.randomChump();
	delete z0;
	delete z1;
	delete z2;
	delete z3;
}
