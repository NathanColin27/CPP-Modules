#include "ShrubberyCreationForm.class.hpp"

// constructors & destructors

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("Shrubbery Creation", 145, 137), _target(target)
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
	os << other.getName() << " :" << std::endl 
	<< "  - " << (other.getSigned() ? "Signed" : "Unsigned") << std::endl
	<< "  - Signing Grade   : " << other.getSignGrade() << std::endl
	<< "  - Execution Grade : " << other.getExecGrade() << std::endl
	<< "  - Target : " << other.getTarget() << std::endl;
	return (os);
}
// Getters and Setters

std::string		ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

// Member functions

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string filename = this->getTarget() + "_shrubbery";
	std::string my_tree = R"(
	   _-_
    /~~   ~~\ 
 /~~         ~~\
{               }
 \  _-     -_  /
   ~  \\ //  ~
_- -   | | _- _
  _ -  | |   -_
      // \\ 
)";

	try
	{
		Form::execute(executor);
		std::ofstream tree(filename);
		tree << my_tree;
		tree.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// Exceptions
