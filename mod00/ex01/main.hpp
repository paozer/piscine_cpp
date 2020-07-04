/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:15:02 by pramella          #+#    #+#             */
/*   Updated: 2020/06/21 17:15:14 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

/* Main */
void	search_phone_book(Contact* pb, int pb_size);

/* Utils */
Contact create_contact_from_input();
void	display_all_contacts(Contact pb[], int &pb_size);
void 	print_f(std::string str);

#endif
