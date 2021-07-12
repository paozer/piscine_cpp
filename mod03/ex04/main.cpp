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

#include "SuperTrap.hpp"

int main(void)
{
    srand(time(NULL));
    FragTrap f0 ("f0");
    NinjaTrap n0 ("n0");
    ScavTrap sc0 ("sc0");
    std::cout << std::endl;
    SuperTrap s0 ("s0");
    std::cout << std::endl;

    s0.takeDamage(66);
    s0.beRepaired(12);
    std::cout << std::endl << "FragTrap rangedAttack" << std::endl;
    s0.rangedAttack("a woman");
    std::cout << std::endl << "NinjaTrap meleeAttack" << std::endl;
    s0.meleeAttack("a man");
    std::cout << std::endl << "Special attacks" << std::endl;
    s0.vaulthunter_dot_exe("yes");
    s0.ninjaShoebox(f0);
    s0.ninjaShoebox(n0);
    s0.ninjaShoebox(sc0);
    std::cout << std::endl;

    return 0;
}
