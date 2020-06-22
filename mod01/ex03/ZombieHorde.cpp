/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 01:53:50 by pramella          #+#    #+#             */
/*   Updated: 2020/06/23 01:53:51 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(void) { std::srand(time(nullptr)); }
ZombieHorde::~ZombieHorde(void) { delete[] zb; }

ZombieHorde::ZombieHorde(int n)
{
	std::string name[5] = {"Xorg", "Pepe", "Angry", "Maria", "Ben"};
	zb = new Zombie[n];
	len = n;

	for (int i = 0; i < n; ++i) {
		zb[i] = Zombie(name[rand() % 5], "more_brainz");
	}
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < len; ++i) {
		zb[i].announce();
	}
}
