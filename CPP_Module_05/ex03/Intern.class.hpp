#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "Form.class.hpp"

class Intern
{
	private:
		typedef struct s_form_list
		{
			std::string name;
			Form *(*ft_ptr)(std::string const &form_target);
		} t_form_list;
	public:
		// constructors & destructors

		Intern();
		Intern(const Intern & x);
		virtual ~Intern();

		// Operator overloads

		Intern&	operator=(const Intern & x);
		
		// Getters and Setters

		// Member functions
		Form* makeForm(std::string const name, std::string const target);
		// Exceptions

};

#endif