#pragma once
#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class Form;

class Intern
{
	public:
		Intern();
		Intern(const Intern&);
		Intern &operator=(const Intern&);
		~Intern();

		Form* makeForm(const std::string& type, const std::string& target);
		Form* createRobotomyRequest(const std::string& target);
		Form* createShrubberyCreation(const std::string& target);
		Form* createPresidentialPardon(const std::string& target);
};

#endif
