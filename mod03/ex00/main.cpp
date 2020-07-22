/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 03:17:47 by pramella          #+#    #+#             */
/*   Updated: 2020/07/02 03:17:48 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    srand(time(NULL));
    FragTrap f0 ("f0");
    FragTrap f1 ("f1");
    FragTrap f2 ("f2");
    std::cout << std::endl;

    f0.vaulthunter_dot_exe("a troll");
    f1.meleeAttack("the world");
    f2.rangedAttack("the c++ piscine");
    std::cout << std::endl;

    f0.takeDamage(4);
    f1.takeDamage(40);
    f1.takeDamage(200);
    f2.takeDamage(99);
    std::cout << std::endl;

    f0.beRepaired(9000);
    f1.beRepaired(11);
    f2.beRepaired(94);
    std::cout << std::endl;
    return (0);
}
