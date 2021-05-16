#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Form.class.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string _target;
	public:
		// constructors & destructors

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & other);
		virtual ~ShrubberyCreationForm();

		// Operator overloads

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm & other);
		
		// Getters and Setters

		// Member functions

		// Exceptions

};

std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm const &other);

#endif