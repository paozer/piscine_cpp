#pragma once
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

// has to be abstract class
class Form
{
	public:
		Form(const Form&);
		Form(const std::string& name, const int& req_signing_grade, const int& req_execution_grade);
		~Form();
		Form &operator=(const Form&);

		void beSigned(const Bureaucrat&);
		void signForm(const Bureaucrat&);
		void execute(Bureaucrat const& executor) const;

		const std::string& getName() const;
		const int& getReqSigningGrade() const;
		const int& getReqExecutionGrade() const;
		bool isSigned() const;

		struct GradeTooHighException: public std::exception {};
		struct GradeTooLowException: public std::exception {};

	private:
		Form();
		const std::string _name;
		bool _is_signed;
		const int _req_signing_grade;
		const int _req_execution_grade;
};

std::ostream& operator<<(std::ostream& os, Form& f);

#endif
