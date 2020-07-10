#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat* tom = new Bureaucrat("tom", 43);
	Form* contract = new Form("server hosting", 42, 21);
	delete tom;
	delete contract;
	return (0);
}
