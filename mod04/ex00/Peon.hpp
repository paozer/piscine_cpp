/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 01:38:17 by pramella          #+#    #+#             */
/*   Updated: 2020/07/05 01:38:17 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon: public Victim
{
	public:
		Peon(const std::string& name);
		Peon(const Peon&);
		~Peon();
		Peon &operator=(const Peon&);

		virtual void getPolymorphed() const;

	private:
		Peon();
};

#endif
