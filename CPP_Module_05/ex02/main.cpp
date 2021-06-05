/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:33:44 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/05 12:41:33 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "Form.class.hpp"

int main(void)
{

	srand(time(NULL));
	
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-----------OBJECT INSTANCIATION-------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	std::cout << "On stack" << std::endl;
	{
		Bureaucrat on_stack("Buro", 5);
		Bureaucrat on_stack_cpy(on_stack);
		
		std::cout << on_stack << std::endl;
		std::cout << on_stack_cpy << std::endl;
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Bureaucrat *on_heap = new Bureaucrat("Buro", 5);
		Bureaucrat *on_heap_cpy = new Bureaucrat(*on_heap);

		std::cout << *on_heap << std::endl;
		std::cout << *on_heap_cpy << std::endl;
		
		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;


	std::cout << "On stack" << std::endl;
	{
		PresidentialPardonForm on_stack("Target");
		PresidentialPardonForm on_stack_cpy(on_stack);

		std::cout << on_stack << std::endl;
		std::cout << on_stack_cpy << std::endl;
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		PresidentialPardonForm *on_heap = new PresidentialPardonForm("Target");
		PresidentialPardonForm *on_heap_cpy = new PresidentialPardonForm(*on_heap);

		std::cout << *on_heap << std::endl;
		std::cout << *on_heap_cpy << std::endl;

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		RobotomyRequestForm on_stack("Target");
		RobotomyRequestForm on_stack_cpy(on_stack);

		std::cout << on_stack << std::endl;
		std::cout << on_stack_cpy << std::endl;
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		RobotomyRequestForm *on_heap = new RobotomyRequestForm("Target");
		RobotomyRequestForm *on_heap_cpy = new RobotomyRequestForm(*on_heap);

		std::cout << *on_heap << std::endl;
		std::cout << *on_heap_cpy << std::endl;

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		ShrubberyCreationForm on_stack("Target");
		ShrubberyCreationForm on_stack_cpy(on_stack);

		std::cout << on_stack << std::endl;
		std::cout << on_stack_cpy << std::endl;
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		ShrubberyCreationForm *on_heap = new ShrubberyCreationForm("Target");
		ShrubberyCreationForm *on_heap_cpy = new ShrubberyCreationForm(*on_heap);

		std::cout << *on_heap << std::endl;
		std::cout << *on_heap_cpy << std::endl;

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-------------------TESTS--------------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	std::cout << std::endl << "-----PresidentialPardonForm-----"<< std::endl << std::endl;

	{
		try
		{
			PresidentialPardonForm presForm("Target");
			std::cout << presForm << std::endl;
			Bureaucrat Buro("Almost president", 26);
			std::cout << Buro << std::endl;
			
			std::cout << std::endl << "--EXECUTE UNSIGNED FORM--"<< std::endl << std::endl;
			
			Buro.executeForm(presForm);
			
			std::cout << std::endl << "--------SIGN----------"<< std::endl << std::endl;
			
			Buro.signForm(presForm);
			Buro.grade_inc();
			std::cout << Buro << std::endl;
			Buro.signForm(presForm);
			std::cout << presForm << std::endl;
			
			std::cout << std::endl << "-------EXECUTE-------"<< std::endl << std::endl;
			
			std::cout << Buro << std::endl;
			Buro.executeForm(presForm);
			while (Buro.getGrade() > 5)
				Buro.grade_inc();
			std::cout << Buro << std::endl;
			Buro.executeForm(presForm);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "-----RobotomyRequestForm-----"<< std::endl << std::endl;
	
	{
		try
		{
			RobotomyRequestForm roboForm("Target");
			std::cout << roboForm << std::endl;
			Bureaucrat Buro("Generic_Name", 73);
			std::cout << Buro << std::endl;
			
			std::cout << std::endl << "--EXECUTE UNSIGNED FORM--"<< std::endl << std::endl;
			
			Buro.executeForm(roboForm);
			
			std::cout << std::endl << "--------SIGN----------"<< std::endl << std::endl;
			
			Buro.signForm(roboForm);
			Buro.grade_inc();
			std::cout << Buro << std::endl;
			Buro.signForm(roboForm);
			std::cout << roboForm << std::endl;
			
			std::cout << std::endl << "-------EXECUTE-------"<< std::endl << std::endl;
			
			std::cout << Buro << std::endl;
			Buro.executeForm(roboForm);
			while (Buro.getGrade() > 45)
				Buro.grade_inc();
			std::cout << Buro << std::endl;
			Buro.executeForm(roboForm);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl << "-----ShrubberyCreationForm-----"<< std::endl << std::endl;
	
	try
	{
		ShrubberyCreationForm shrubForm("Target");
		std::cout << shrubForm << std::endl;
		Bureaucrat Buro("Generic_Name", 146);
		std::cout << Buro << std::endl;
		
		std::cout << std::endl << "--EXECUTE UNSIGNED FORM--"<< std::endl << std::endl;
		
		Buro.executeForm(shrubForm);
		
		std::cout << std::endl << "--------SIGN----------"<< std::endl << std::endl;
		
		Buro.signForm(shrubForm);
		Buro.grade_inc();
		std::cout << Buro << std::endl;
		Buro.signForm(shrubForm);
		std::cout << shrubForm << std::endl;
		
		std::cout << std::endl << "-------EXECUTE-------"<< std::endl << std::endl;
		
		std::cout << Buro << std::endl;
		Buro.executeForm(shrubForm);
		while (Buro.getGrade() > 137)
			Buro.grade_inc();
		std::cout << Buro << std::endl;
		Buro.executeForm(shrubForm);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}