/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 01:59:48 by pramella          #+#    #+#             */
/*   Updated: 2020/06/23 01:59:49 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		s = "HI THIS IS BRAIN";
	std::string*	ptr = &s;
	std::string&	ref = s;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}
