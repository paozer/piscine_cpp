/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 22:24:30 by pramella          #+#    #+#             */
/*   Updated: 2020/06/24 22:24:30 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>


class Human
{
	private:
		void meleeAttack(std::string const& target);
		void rangedAttack(std::string const& target);
		void intimidatingShout(std::string const& target);

	public:
		void action(std::string const& action_name, std::string const& target);

};

#endif

