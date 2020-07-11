#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default_ctor"), _req_signing_grade(0), _req_execution_grade(0) {}

Form::~Form() {}

Form::Form(const std::string& name, const int& req_signing_grade, const int& req_execution_grade)
	: _name(name), _is_signed(false), _req_signing_grade(req_signing_grade), _req_execution_grade(req_execution_grade)
{
	if (_req_signing_grade < 1 || _req_execution_grade < 1)
		throw Form::GradeTooHighException();
	if (_req_signing_grade > 150 || _req_execution_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other)
	: _name(other._name), _is_signed(other._is_signed),
	_req_signing_grade(other._req_signing_grade),
	_req_execution_grade(other._req_execution_grade) {}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		_is_signed = other._is_signed;
	return (*this);
}

/* MEMBER FUNCTIONS */
void Form::execute(Bureaucrat const& executor) const
{
	if (!_is_signed)
		return ;
	if (executor.getGrade() > _req_execution_grade)
		throw Form::GradeTooLowException();
	action();
}

void Form::beSigned(const Bureaucrat& b)
{
	if (_req_signing_grade < b.getGrade())
		throw GradeTooLowException();
	_is_signed = true;
}

void Form::signForm(const Bureaucrat& b)
{
	if (_is_signed) {
		std::cout << _name << " is already signed" << std::endl;
		return ;
	}
	try {
		beSigned(b);
		std::cout << b.getName() << " signs " << _name << std::endl;
	}
	catch (Form::GradeTooLowException& e) {
		std::cout << b.getName() << " can't sign " << _name << " because his grade is to low" << std::endl;
	}
}

const std::string& Form::getName() const { return (_name); }
const int& Form::getReqSigningGrade() const { return (_req_signing_grade); }
const int& Form::getReqExecutionGrade() const { return (_req_execution_grade); }

bool Form::isSigned() const { return (_is_signed); }

std::ostream& operator<<(std::ostream& os, Form& f)
{
	os << "Form [" << f.getName() << "] is ";
	if (!f.isSigned())
		os << "not ";
	os << "signed. It requires grade " << f.getReqSigningGrade() << " for signing and " << f.getReqExecutionGrade() << " for execution" << std::endl;
	return (os);
}
