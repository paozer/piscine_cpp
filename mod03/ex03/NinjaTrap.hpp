/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 23:53:45 by pramella          #+#    #+#             */
/*   Updated: 2020/07/02 23:53:45 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp" // inheritance
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(const std::string& name);
		NinjaTrap(const NinjaTrap&);
		~NinjaTrap();
		NinjaTrap &operator=(const NinjaTrap&);

		void ninjaShoebox(FragTrap& ft);
		void ninjaShoebox(NinjaTrap& nt);
		void ninjaShoebox(ScavTrap& nt);
};

#endif

