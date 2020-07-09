/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:28:42 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:28:42 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(const std::string & type);
		AMateria(const AMateria&);
		virtual ~AMateria();
		AMateria &operator=(const AMateria&);

		std::string const& getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	private:
		unsigned int _xp;
		std::string _type;
};

#endif
