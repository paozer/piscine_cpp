/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:27:51 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:27:51 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
    public:
        SuperMutant();
        SuperMutant(const SuperMutant&);
        ~SuperMutant();
        SuperMutant &operator=(const SuperMutant&);
        virtual void takeDamage(int);
};

#endif

