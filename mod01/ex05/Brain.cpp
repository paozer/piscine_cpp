/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 03:42:07 by pramella          #+#    #+#             */
/*   Updated: 2020/06/23 03:42:08 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : neurons(41) { ++neurons; }

const std::string	Brain::identity(void) const
{
	std::ostringstream oss;

	oss << this;
	return (oss.str());
}
