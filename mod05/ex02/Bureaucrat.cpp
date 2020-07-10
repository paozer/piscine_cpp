#include "Bureaucrat.hpp"

/* CONSTRUCTION DESTRUCTION COPY */
Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeToHigh();
	if (grade > 150)
		throw Bureaucrat::GradeToLow();
	_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) { *this = other; }

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other) {
		_grade = other._grade;
	}
	return (*this);
}

/* MEMBER FUNCTIONS */
void Bureaucrat::executeForm(const Form& form)
{

}

std::string Bureaucrat::getName() const { return (_name); }

int Bureaucrat::getGrade() const { return (_grade); }

std::ostream& operator<<(std::ostream& os, Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (os);
}

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
