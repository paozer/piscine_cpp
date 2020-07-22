/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 22:24:35 by pramella          #+#    #+#             */
/*   Updated: 2020/06/24 22:24:36 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
    Human human;

    human.action("meleeAttack", "thomas");
    human.action("rangedAttack", "eric");
    human.action("intimidatingShout", "maria");
    return (0);
}
