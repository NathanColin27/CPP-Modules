#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "Form.class.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;
	public:
		// constructors & destructors

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & x);
		virtual ~RobotomyRequestForm();

		// Operator overloads

		RobotomyRequestForm&	operator=(const RobotomyRequestForm & x);
		
		// Getters and Setters
		std::string		getTarget(void) const;
		// Member functions
		void execute(Bureaucrat const & executor) const;

		// Exceptions

};

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &other);

#endif