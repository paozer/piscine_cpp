/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 18:52:35 by pramella          #+#    #+#             */
/*   Updated: 2020/06/22 18:52:35 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"
# include <iostream>
# include <cstdlib>

class ZombieEvent
{
	private:
		std::string _type;


	public:
		ZombieEvent();
		void	setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void	randomChump(void);
};

#endif
