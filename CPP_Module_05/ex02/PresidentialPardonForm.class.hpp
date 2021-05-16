#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Form.class.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;
	public:
		// constructors & destructors

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm & x);
		virtual ~PresidentialPardonForm();

		// Operator overloads

		PresidentialPardonForm&	operator=(const PresidentialPardonForm & x);
		
		// Getters and Setters

		// Member functions

		// Exceptions

};

std::ostream &operator<<(std::ostream &os, PresidentialPardonForm const &other);

#endif