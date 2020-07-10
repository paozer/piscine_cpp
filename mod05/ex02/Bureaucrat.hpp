#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat&);

		Bureaucrat& operator++();
		Bureaucrat& operator--();

		void executeForm(const Form& form);
		std::string getName() const;
		int getGrade() const;

		struct GradeToLow: public std::exception {};
		struct GradeToHigh: public std::exception {};

	private:
		const std::string _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& b);

#endif
