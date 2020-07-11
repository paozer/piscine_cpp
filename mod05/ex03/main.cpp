#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern i;
	Form *f;
	Bureaucrat b("tom", 13);

	f = i.makeForm("unknown type", "target");
	std::cout << "return from unknown type form creation: " << f << std::endl;
	std::cout << std::endl;

	std::cout << "called makeForm(\"robotomy request\", \"target\")" << std::endl;
	f = i.makeForm("robotomy request", "target");
	std::cout << std::endl;

	b.executeForm(*f);
	f->signForm(b);
	b.executeForm(*f);
	return (0);
}
