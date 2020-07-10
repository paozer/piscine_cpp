#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm&);

		void action() const;

	private:
		std::string _target;
};

#endif

