/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:28:24 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:28:25 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad: public ISquad
{
    public:
        Squad();
        Squad(const Squad&);
        ~Squad();
        Squad &operator=(const Squad&);

        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int) const;
        virtual int push(ISpaceMarine*);
        void deleteSquad();

    private:
        int _nbr_of_units;
        ISpaceMarine** _squad_members;
};

#endif
