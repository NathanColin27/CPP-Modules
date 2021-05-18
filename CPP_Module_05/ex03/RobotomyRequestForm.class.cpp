#include "RobotomyRequestForm.class.hpp"

// constructors & destructors

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): Form(other)
{
	*this = other;
}

// Operator overloads

RobotomyRequestForm&		RobotomyRequestForm::operator=(const RobotomyRequestForm & other) 
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &other)
{
	os << other.getName() << " :" << std::endl 
	<< "  - " << (other.getSigned() ? "Signed" : "Unsigned") << std::endl
	<< "  - Signing Grade   : " << other.getSignGrade() << std::endl
	<< "  - Execution Grade : " << other.getExecGrade() << std::endl
	<< "  - Target : " << other.getTarget() << std::endl;
	return (os);
}

// Getters and Setters

std::string		RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

// Member functions
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		Form::execute(executor);
		std::cout << "* Drilling noises *" << std::endl;
		if ((rand() % 2 == 1))
			std::cout << this->getTarget() << " has been robotomized succesfully." << std::endl;
		else
			std::cout << "FAILURE" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
// Exceptions
