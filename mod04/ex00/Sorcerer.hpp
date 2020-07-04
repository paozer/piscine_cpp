/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 01:38:23 by pramella          #+#    #+#             */
/*   Updated: 2020/07/05 01:38:24 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(const std::string& name, const std::string& title);
		Sorcerer(const Sorcerer&);
		~Sorcerer();
		Sorcerer &operator=(const Sorcerer&);

		std::string getName() const;
		std::string getTitle() const;

		void polymorph(const Victim&) const;

	private:
		Sorcerer();
		std::string _name;
		std::string _title;
};

std::ostream& operator<<(std::ostream& os, const Sorcerer& s);

#endif
