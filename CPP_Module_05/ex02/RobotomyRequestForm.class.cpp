#include "RobotomyRequestForm.class.hpp"

// constructors & destructors

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("no_name", 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	*this = other;
}

// Operator overloads

RobotomyRequestForm&		RobotomyRequestForm::operator=(const RobotomyRequestForm & other) 
{
	if (this != &other)
	{
		this->a = other.a;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &other)
{
	os << "" << std::endl;
	return (os);
}

// Getters and Setters

// Member functions

// Exceptions
