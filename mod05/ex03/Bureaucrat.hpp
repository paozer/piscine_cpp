#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();

		void executeForm(const Form& form);
		std::string getName() const;
		int getGrade() const;
		Bureaucrat& operator++();
		Bureaucrat& operator--();

		struct GradeToLow: public std::exception {};
		struct GradeToHigh: public std::exception {};

	private:
		Bureaucrat();
		const std::string _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif
