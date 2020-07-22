/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:23:01 by pramella          #+#    #+#             */
/*   Updated: 2020/06/22 17:23:02 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

int main(void)
{
    std::cout << "this is main talking" << std::endl << std::endl;
    Pony::ponyOnTheStack("John", "Green", 10, 129);
    std::cout << std::endl << "this is main talking" << std::endl << std::endl;
    Pony::ponyOnTheHeap("Doe", "Brown", 1, 25);
    std::cout << std::endl << "this is main talking" << std::endl;
    return (0);
}
