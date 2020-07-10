#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidentialPardon", 25, 5), _target() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("presidentialPardon", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: PresidentialPardonForm()
{ *this = other; }

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other) {
		_target = other._target;
	}
	return (*this);
}

void PresidentialPardonForm::action() const
{ std::cout << _target << " was pardoned by Zafod Beeblebrox." << std::endl; }
