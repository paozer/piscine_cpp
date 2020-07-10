#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomyRequest", 72, 45), _target() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("robotomyRequest", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: RobotomyRequestForm()
{ *this = other; }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other) {
		_target = other._target;
	}
	return (*this);
}

void RobotomyRequestForm::action() const
{
	static bool first_fct_call = true;

	if (first_fct_call) {
		std::cout << "* bruits de perceuse * " << _target << " was successfully robotomized." << std::endl;
		first_fct_call = false;
	}
	else
		std::cout << "robotomizing " << _target << " failed..." << std::endl;
}
