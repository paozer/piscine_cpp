#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat* tom = new Bureaucrat("tom", 43);
	Form* contract = new Form("server hosting", 42, 21);

	std::cout << "\t*** INTERACTIONS OF FORM & BUREAUCRATS" << std::endl;
	std::cout << *tom;
	std::cout << *contract;
	std::cout << std::endl;

	try {
		contract->beSigned(*tom);
		std::cout << "[ERROR] beSigned" << std::endl;
	}
	catch (Form::GradeTooLowException& e) {
		std::cout << "[OK] caught GradeTooLowException" << std::endl;
	}
	std::cout << std::endl;

	contract->signForm(*tom);
	std::cout << ++*tom;
	contract->signForm(*tom);
	std::cout << std::endl;

	std::cout << "\t*** CREATING FORBIDDEN FORMS" << std::endl;
	try {
		Form* fail = new Form("total fail", 0, 21);
		std::cout << "[ERROR] " << *fail;
	}
	catch (Form::GradeTooHighException& e) {
		std::cout << "[OK] caught GradeTooHighException" << std::endl;
	}
	try {
		Form* fail = new Form("total fail", 151, 21);
		std::cout << "[ERROR] " << *fail;
	}
	catch (Form::GradeTooLowException& e) {
		std::cout << "[OK] caught GradeTooLowException" << std::endl;
	}
	delete tom;
	delete contract;
	return (0);
}
