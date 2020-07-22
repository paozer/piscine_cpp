#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomyRequest", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
    Form("robotomyRequest", 72, 45), _target(target), _first_execution(true) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
    Form("robotomyRequest", 72, 45), _target(other._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
        _target = other._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::action() const
{
    if (_first_execution) {
        _first_execution = false;
        std::cout << "* bruits de perceuse * " << _target << " was successfully robotomized." << std::endl;
    }
    else
        std::cout << "robotomizing " << _target << " failed..." << std::endl;
}
