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

Contact::Contact() {} // necessary to declare array of contacts

Contact::Contact(std::string info[11]) :
    first_name(info[0]), last_name(info[1]), nickname(info[2]), login(info[3]),
    postal_address(info[4]), email_address(info[5]), phone_number(info[6]),
    birthday_date(info[7]), favorite_meal(info[8]), underwear_color(info[9]),
    darkest_secret(info[10])
{}

std::string Contact::get_first_name(void) { return (first_name); }
std::string Contact::get_last_name(void) { return (last_name); }
std::string Contact::get_login(void) { return (login); }

void Contact::str()
{
    (!first_name.empty()) ? std::cout << first_name << std::endl : std::cout;
    (!last_name.empty()) ? std::cout << last_name << std::endl : std::cout;
    (!nickname.empty()) ? std::cout << nickname << std::endl : std::cout;
    (!login.empty()) ? std::cout << login << std::endl : std::cout;
    (!postal_address.empty()) ? std::cout << postal_address << std::endl : std::cout;
    (!email_address.empty()) ? std::cout << email_address << std::endl : std::cout;
    (!phone_number.empty()) ? std::cout << phone_number << std::endl : std::cout;
    (!birthday_date.empty()) ? std::cout << birthday_date << std::endl : std::cout;
    (!favorite_meal.empty()) ? std::cout << favorite_meal << std::endl : std::cout;
    (!underwear_color.empty()) ? std::cout << underwear_color << std::endl : std::cout;
    (!darkest_secret.empty()) ? std::cout << darkest_secret << std::endl : std::cout;
}
