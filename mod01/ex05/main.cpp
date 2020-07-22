/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 03:42:26 by pramella          #+#    #+#             */
/*   Updated: 2020/06/23 03:42:27 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int main(void)
{
    Human bob;

    std::cout << bob.identity() << std::endl;
    std::cout << bob.getBrain().identity() << std::endl;
    return (0);
}
