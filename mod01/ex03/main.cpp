/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 01:51:55 by pramella          #+#    #+#             */
/*   Updated: 2020/06/23 01:51:56 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

int main(void)
{
    std::srand(time(nullptr));
    ZombieHorde zh0 = ZombieHorde(5);
    zh0.announce();
    std::cout << std::endl;
    ZombieHorde zh1 = ZombieHorde(32);
    zh1.announce();
    std::cout << std::endl;
    ZombieHorde zh2 = ZombieHorde(1);
    zh2.announce();
    return (0);
}
