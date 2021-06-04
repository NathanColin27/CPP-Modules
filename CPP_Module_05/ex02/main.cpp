/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:33:44 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/04 17:40:14 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "Form.class.hpp"

int main(void)
{

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat patrice("Patrice", 25); // 1
	std::cout << "1: " << patrice << std::endl;
	patrice.grade_inc(); // 2
	std::cout << "2: " << patrice << std::endl;
	patrice.grade_dec(); // 3
	std::cout << "3: "<< patrice << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;
	shrub->beSigned(supervisor);
	shrub->execute(patrice);

	Form *pres = new PresidentialPardonForm("patrice");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	pres->execute(supervisor);

	Form *robot = new RobotomyRequestForm("Bender");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);
	robot->execute(patrice);
	patrice.executeForm(*robot);
	patrice.executeForm(*robot);

	std::cout << "try 1" << std::endl;

	try
	{
		patrice.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Try 2" << std::endl;

	try
	{
		RobotomyRequestForm robot = RobotomyRequestForm("Bender");
		std::cout << robot << std::endl;
		robot.execute(supervisor);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Try 3" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("patrice");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		pres.execute(patrice);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Try 4" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("patrice");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		patrice.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}