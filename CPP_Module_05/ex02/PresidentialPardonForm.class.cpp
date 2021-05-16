#include "PresidentialPardonForm.class.hpp"

// constructors & destructors

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	*this = other;
}

// Operator overloads

PresidentialPardonForm&		PresidentialPardonForm::operator=(const PresidentialPardonForm & other) 
{
	if (this != &other)
	{
		this->a = other.a;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, PresidentialPardonForm const &other)
{
	os << "" << std::endl;
	return (os);
}

// Getters and Setters

// Member functions

// Exceptions
