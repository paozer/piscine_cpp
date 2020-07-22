#include "Bureaucrat.hpp"

/* CONSTRUCTION DESTRUCTION COPY */
Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) :
    _name(name), _grade(grade)
{
    if (_grade < 1)
        throw Bureaucrat::GradeToHigh();
    if (_grade > 150)
        throw Bureaucrat::GradeToLow();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) :
    _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        _grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() {}

/* MEMBER FUNCTIONS */
std::string Bureaucrat::getName() const { return (_name); }

int Bureaucrat::getGrade() const { return (_grade); }

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
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
