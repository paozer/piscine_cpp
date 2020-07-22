/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:27:35 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:27:35 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
    public:
        PowerFist();
        PowerFist(const PowerFist&);
        ~PowerFist();
        PowerFist &operator=(const PowerFist&);

        virtual void attack() const;
};

#endif
