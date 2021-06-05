/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:37:00 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/05 12:02:20 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

Form::Form(std::string name, int sign_grade, int exec_grade): _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;
}

Form::~Form()
{
}

Form::Form(const Form & other): _name(other._name), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade)
{
	*this = other;
}

Form&		Form::operator=(const Form & other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return *this;
}

std::string const	Form::getName(void) const
{
	return (this->_name);
}

int					Form::getSignGrade() const
{
	return (this->_sign_grade);
}

int					Form::getExecGrade() const
{
	return (this->_exec_grade);
}

bool				Form::getSigned(void) const
{
	return (this->_signed);
}

void 				Form::beSigned(Bureaucrat const &bureaucrat)
{
	try
	{
		if (this->getSigned())
			throw (Form::AlreadySignedException());
		else if (bureaucrat.getGrade() > this->_sign_grade)
			throw (Form::GradeTooLowException());
		else
		{
			std::cout << this->getName() << " is now signed" << std::endl;
			this->_signed = true;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw (Form::NotSignedException());
	if (executor.getGrade() > this->_exec_grade)
		throw (Form::GradeTooLowException());
}

std::ostream &operator<<(std::ostream &os, Form const &other)
{
	os << other.getName() << " :" << std::endl 
	<< "  - " << (other.getSigned() ? "Signed" : "Unsigned") << std::endl
	<< "  - Signing Grade   : " << other.getSignGrade() << std::endl
	<< "  - Execution Grade : " << other.getExecGrade() << std::endl;
	return (os);
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char * Form::AlreadySignedException::what() const throw()
{
	return ("This form has been signed already");
}

const char * Form::NotSignedException::what() const throw()
{
	return ("This form isn't signed");
}