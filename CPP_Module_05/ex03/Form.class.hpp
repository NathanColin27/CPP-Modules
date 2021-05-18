/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 18:15:18 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/17 11:12:30 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Bureaucrat.class.hpp"

class Bureaucrat;
class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_sign_grade;
		int const			_exec_grade;
		Form();

	public:
		// constructors & destructors
		Form(std::string name, int sign_grade, int exec_grade);
		Form(const Form & other);
		virtual ~Form();

		// Operator overloads
		Form&	operator=(const Form & other);
		
		// Getters and Setters
		std::string const	getName() const;
		bool				getSigned() const;
		int					getExecGrade() const;
		int					getSignGrade() const;

		// Member functions
		void beSigned(Bureaucrat const &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const;

		// Exceptions
		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

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

		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, Form const &other);

#endif
