/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 03:42:13 by pramella          #+#    #+#             */
/*   Updated: 2020/06/23 03:43:52 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain& Human::getBrain(void)
{
	return (_brain);
}

std::string Human::identity(void) { return (_brain.identity()); }
