/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:37:00 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/16 18:46:34 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat & other): _name(other._name)
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
		std::cout << this->getName() <<" cannot sign " << form.getName() << " because ";
		throw(Form::AlreadySignedException());
	}
	else if (this->getGrade() > form.getSignGrade())
	{
		std::cout << this->getName() <<" cannot sign " << form.getName() << " because ";
	}
	else
	{
		std::cout << this->getName() <<" signs " << form.getName() << std::endl;
	}
	form.beSigned(*this);
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
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl; 
	return (os);
}