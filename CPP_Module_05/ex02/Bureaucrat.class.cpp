/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:37:00 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/05 11:44:05 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat & other): _name(other._name), _grade(other._grade)
{
	*this = other;
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat & other)
{
	if (this != &other)
	{	
		this->_grade = other.getGrade();
	
	}
	return *this;
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int					Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void				Bureaucrat::grade_dec()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	

}

void				Bureaucrat::grade_inc()
{
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void				Bureaucrat::signForm(Form &form)
{	
	if (form.getSigned())
	{
		std::cout << *this << " cannot sign " << form.getName() 
			<< " because the form is already signed." << std::endl;
	}
	else if (this->_grade > form.getSignGrade())
	{
		std::cout << *this << " cannot sign " << form.getName()
			<< " because it's grade is too low" << std::endl;
	}
	else
	{
		std::cout <<*this << " signs " << form.getName() << std::endl;
	}
	form.beSigned(*this);	
}

void Bureaucrat::executeForm(Form const& form) const
{
	if (!form.getSigned())
	{
		std::cout << *this << " cannot execute " << form.getName()
				<< " because the form is unsigned." << std::endl;
	}
	else if (form.getExecGrade() < this->_grade)
	{
		std::cout << *this << " cannot execute " << form.getName()
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " executes " << form.getName() << std::endl;
	}
	form.execute(*this);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other)
{
	os << other.getName() << ", bureaucrat grade " << other.getGrade(); 
	return (os);
}