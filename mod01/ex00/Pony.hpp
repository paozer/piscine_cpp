/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:23:17 by pramella          #+#    #+#             */
/*   Updated: 2020/06/22 17:23:28 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {
	private:
		std::string _name;
		std::string _color;
		int			_age;
		int			_height;


	public:
		Pony(void);
		~Pony(void);
		void 		set_name(std::string name);
		void 		set_color(std::string color);
		void 		set_age(int age);
		void 		set_height(int height);
		static void ponyOnTheStack(std::string name, std::string color, int age, int height);
		static void ponyOnTheHeap(std::string name, std::string color, int age, int height);
		std::string	repr(void);
};

#endif