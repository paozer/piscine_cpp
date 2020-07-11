#include "Bureaucrat.hpp"
#include "Form.hpp"

/* CONSTRUCTION DESTRUCTION COPY */
Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeToHigh();
	if (grade > 150)
		throw Bureaucrat::GradeToLow();
	_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) :
	_name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		_grade = other._grade;
	return (*this);
}

/* MEMBER FUNCTIONS */
void Bureaucrat::executeForm(const Form& form)
{
	if (!form.isSigned())
		std::cout << form.getName() << " is not signed." << std::endl;
	else {
		try {
			form.execute(*this);
			std::cout << _name << " executes " << form.getName() << std::endl;
		}
		catch (Form::GradeTooLowException& e) {
			std::cout << _name << "'s grade is to low to execute " << form.getName() << std::endl;
		}
	}
}

std::string Bureaucrat::getName() const { return (_name); }

int Bureaucrat::getGrade() const { return (_grade); }

std::ostream& operator<<(std::ostream& os, Bureaucrat& b)
{ return (os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl); }

Bureaucrat& Bureaucrat::operator++()
{
	if (_grade > 1)
		--_grade;
	return (*this);
}

Bureaucrat& Bureaucrat::operator--()
{
	if (_grade < 150)
		++_grade;
	return (*this);
}
