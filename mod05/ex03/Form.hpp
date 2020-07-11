#pragma once
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string& name, const int& req_signing_grade, const int& req_execution_grade);
		Form(const Form&);
		Form &operator=(const Form&);
		virtual ~Form();

		void beSigned(const Bureaucrat&);
		void signForm(const Bureaucrat&);
		void execute(Bureaucrat const& executor) const;
		virtual void action() const = 0;

		const std::string& getName() const;
		const int& getReqSigningGrade() const;
		const int& getReqExecutionGrade() const;
		bool isSigned() const;

		struct GradeTooHighException: public std::exception {};
		struct GradeTooLowException: public std::exception {};

	private:
		const std::string _name;
		bool _is_signed;
		const int _req_signing_grade;
		const int _req_execution_grade;
};

std::ostream& operator<<(std::ostream& os, Form& f);

#endif
