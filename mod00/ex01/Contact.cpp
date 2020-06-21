/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:13:55 by pramella          #+#    #+#             */
/*   Updated: 2020/06/21 17:14:38 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::Contact(std::string info[])
{
	first_name = info[0];
	last_name = info[1];
	nickname = info[2];
	login = info[3];
	postal_address = info[4];
	email_address = info[5];
	phone_number = info[6];
	birthday_date = info[7];
	favorite_meal = info[8];
	underwear_color = info[9];
	darkest_secret = info[10];
}

std::string Contact::get_first_name(void) { return (first_name); }
std::string Contact::get_last_name(void) { return (last_name); }
std::string Contact::get_login(void) { return (login); }

void Contact::str(void)
{
	std::cout << first_name << '\n';
	std::cout << last_name << '\n';
	std::cout << nickname << '\n';
	std::cout << login << '\n';
	std::cout << postal_address << '\n';
	std::cout << email_address << '\n';
	std::cout << phone_number << '\n';
	std::cout << birthday_date << '\n';
	std::cout << favorite_meal << '\n';
	std::cout << underwear_color << '\n';
	std::cout << darkest_secret << '\n';
}
