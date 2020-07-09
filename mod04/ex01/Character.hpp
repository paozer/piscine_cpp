/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:26:56 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:26:56 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character();
		Character(std::string const& name);
		Character(const Character&);
		~Character();
		Character &operator=(const Character&);

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);

		std::string getName() const;
		std::string getWeaponName() const;
		int getAP() const;
		bool isArmed() const;

	private:
		std::string _name;
		int _ap;
		AWeapon* _current_weapon;
};

std::ostream& operator<<(std::ostream& os, Character& c);

#endif
