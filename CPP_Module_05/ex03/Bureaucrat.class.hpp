/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 18:15:15 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/17 11:56:09 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.class.hpp"
#include <string>
#include <iostream>
#include <unistd.h>
class Form;
class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
		Bureaucrat();
	public:
		// constructors & destructors
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		virtual ~Bureaucrat();

		// Operator overloads
		Bureaucrat&	operator=(const Bureaucrat & other);

		// Getters and Setters
		std::string const	getName(void) const;
		int					getGrade() const; 

		// Member functions
		void grade_inc(void);
		void grade_dec(void);
		void signForm(Form &form);
		void executeForm(Form const &form) const;

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);

#endif
