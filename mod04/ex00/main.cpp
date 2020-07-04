/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 01:38:07 by pramella          #+#    #+#             */
/*   Updated: 2020/07/05 01:38:08 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	std::cout << "########## SUBJECT MAIN ##########" << std::endl;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	std::cout << std::endl;

	std::cout << "##########   MY  MAIN   ##########" << std::endl;
	Victim* duke = new Peon("duke");
	std::cout << *duke;
	robert.polymorph(*duke);
	std::cout << std::endl;

	delete duke;
	return 0;
}
