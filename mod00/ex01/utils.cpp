/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:15:25 by pramella          #+#    #+#             */
/*   Updated: 2020/06/21 17:15:31 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact create_contact_from_input()
{
	std::string info[11];
	std::string message[11] = {"First Name: ", "Last Name: ", "Nickname: ", "Login : ", "Postal Address: ", "Email Address: ", "Phone Number: ", "Birthday Date: ", "Favorite Meal: ", "Underwear Color: ", "Darkest Secret: "};

	std::cout << "Enter contact information:" << std::endl;
	for (int i = 0; i < 11; ++i) {
		std::cout << message[i];
		std::getline(std::cin, info[i]);
	}
	return (Contact(info));
}

void	display_all_contacts(Contact pb[], int &pb_size)
{
	std::string header[4] = {"Index", "First Name", "Last Name", "Login"};

	for (int i = 0; i < 4; ++i) {
		print_f(header[i]);
	}
	std::cout << "|" << std::endl;
	for (int i = 0; i < pb_size; ++i) {
		std::cout << '|' << std::setw(10) << std::setfill(' ') << i;
		print_f(pb[i].get_first_name());
		print_f(pb[i].get_last_name());
		print_f(pb[i].get_login());
		std::cout << "|" << std::endl;
	}
}

void	print_f(std::string str)
{
	if (str.length() > 10) {
		std::cout << '|' << str.substr(0, 9) << '.';
	}
	else {
		std::cout << '|' << std::setw(10) << std::setfill(' ') << str;
	}
}
