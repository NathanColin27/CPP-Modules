#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
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
		std::string		getTarget(void) const;
		// Member functions

		void execute(Bureaucrat const & executor) const;

		// Exceptions

};

std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm const &other);

#endif