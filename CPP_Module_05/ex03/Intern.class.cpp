#include "Intern.class.hpp"

// constructors & destructors

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

// Operator overloads

Intern&		Intern::operator=(const Intern & other) 
{
	(void) other;
	return (*this);
}

// Getters and Setters

// Member functions
Form *makePresidentialPardonForm(std::string const &target)
{
	std::cout << "Intern creates a Presidential Pardon Form" <<std::endl;
	return (new PresidentialPardonForm(target));
}

Form *makeRobotomyRequestForm(std::string const &target)
{
	std::cout << "Intern creates a Robotomy Request Form" <<std::endl;
	return (new RobotomyRequestForm(target));
}

Form *makeShrubberyCreationForm(std::string const &target)
{
	std::cout << "Intern creates a Shrubbery Creation Form" <<std::endl;
	return (new ShrubberyCreationForm(target));
}

Form* Intern::makeForm(std::string const name, std::string const target)
{
	t_form_list list[3] = 
	{
		{"PPF", &makePresidentialPardonForm},
		{"RRF", &makeRobotomyRequestForm},
		{"SCF", &makeShrubberyCreationForm}
	};

	for(int i = 0; i < 3; i++)
		if (list[i].name == name)
			return (list[i].ft_ptr(target));
	std::cout << "Intern couldn't find the form template, back to making coffee" << std::endl;
	return (NULL);
}

// Exceptions
