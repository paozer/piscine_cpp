#pragma once
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(const std::string& name, int req_signing_grade, int req_execution_grade);
		Form(const Form&);
		Form &operator=(const Form&);
		~Form();

		struct GradeTooHighException: public std::exception {};
		struct GradeTooLowException: public std::exception {};

		void beSigned(const Bureaucrat&);
		void signForm(const Bureaucrat&);
		const std::string& getName() const;
		const int& getReqSigningGrade() const;
		const int& getReqExecutionGrade() const;
		bool isSigned() const;

	private:
		Form();
		const std::string _name;
		bool _is_signed;
		const int _req_signing_grade;
		const int _req_execution_grade;
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif
