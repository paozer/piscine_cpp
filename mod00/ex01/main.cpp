/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:14:58 by pramella          #+#    #+#             */
/*   Updated: 2020/06/21 17:14:59 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int		main(void)
{
	Contact pb[8];
	int		pb_size = 0;

	std::string cmd = "INIT";
	std::cout << "usage:\n- ADD\n- SEARCH (view/select from Phonebook)\n- EXIT\n\n";
	while (cmd != "EXIT") {
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD") {
			if (pb_size == 8) {
				std::cout << "ERROR: Phonebook is full.\n";
			}
			else {
				pb[pb_size] = create_contact_from_input();
				++pb_size;
			}
		}
		else if (cmd == "SEARCH") {
			search_phone_book(pb, pb_size);
		}
	}
	return (0);
}

void	search_phone_book(Contact* pb, int pb_size)
{
	std::string index;

	if (pb_size == 0) {
		std::cout << "Empty Phonebook.\n";
		return ;
	}
	display_all_contacts(pb, pb_size);
	std::cout << "Select contact via index: ";
	std::getline(std::cin, index);
	try {
		std::stoi(index);
	}
	catch (const std::exception& e) {
		std::cout << "nice try !\n";
		return ;
	}
	if (index.find_first_not_of("0123456789", 0) != std::string::npos
			|| std::stoi(index) > pb_size - 1 || std::stoi(index) < 0) {
		std::cout << "nice try !\n";
		return ;
	}
	pb[std::stoi(index)].str();
}