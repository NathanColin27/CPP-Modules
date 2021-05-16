#include "ShrubberyCreationForm.class.hpp"

// constructors & destructors

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("no_name", 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): Form(other)
{
	*this = other;
}

// Operator overloads

ShrubberyCreationForm&		ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other) 
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm const &other)
{
	os << "" << std::endl;
	return (os);
}

// Getters and Setters

// Member functions

// Exceptions
