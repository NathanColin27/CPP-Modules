#include "PresidentialPardonForm.class.hpp"

// constructors & destructors

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): Form(other)
{
	*this = other;
}

// Operator overloads

PresidentialPardonForm&		PresidentialPardonForm::operator=(const PresidentialPardonForm & other) 
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, PresidentialPardonForm const &other)
{
	os << other.getName() << " :" << std::endl 
	<< "  - " << (other.getSigned() ? "Signed" : "Unsigned") << std::endl
	<< "  - Signing Grade   : " << other.getSignGrade() << std::endl
	<< "  - Execution Grade : " << other.getExecGrade() << std::endl
	<< "  - Target : " << other.getTarget() << std::endl;
	return (os);
}

// Getters and Setters

std::string		PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

// Member functions

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		Form::execute(executor);
		std::cout << this->getTarget() << " has been pardoned by the President Zafod Beeblebrox." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// Exceptions
