#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <unistd.h>
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

		// Member functions

		// Exceptions

};

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &other);

#endif