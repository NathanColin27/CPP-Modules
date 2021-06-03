/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:33:44 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/03 23:00:21 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
int main(void)
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_1-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	
	Bureaucrat	Buro_1("Buro_1", 49);
	std::cout << Buro_1;
	

	std::cout << "------------------------------------------" << std::endl;
	
	try
	{
		Form		Form_1("Form_1", 50, 0);
		std::cout << Form_1;	
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------------------------------------------" << std::endl;
	
	
	try
	{
		Form		Form_1("Form_1", 0, 0);
		std::cout << Form_1;	
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------------------" << std::endl;
	
	try
	{
		Form		Form_1("Form_1", 50, 200);
		std::cout << Form_1;	
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------------------" << std::endl;
	
	Form		Form_1("Form_1", 50, 50);
	std::cout << Form_1;	
	std::cout << "------------------------------------------" << std::endl;
	
	try
	{
		Buro_1.signForm(Form_1);
		std::cout << Form_1;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_2-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	
	try
	{	
		Buro_1.signForm(Form_1);
		std::cout << Form_1;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_3-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	Form		Form_2("Form_2", 50, 50);
	std::cout << Form_2;
	try
	{
		Buro_1.grade_dec();
		std::cout << Buro_1;
		Buro_1.grade_dec();
		std::cout << Buro_1;
		Buro_1.signForm(Form_2);
		std::cout << Form_2;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_4-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	
	Form		Form_3("Form_3", 50, 50);
	std::cout << Form_3;
	
	try
	{
		Buro_1.grade_inc();
		std::cout << Buro_1;
		Buro_1.signForm(Form_3);
		std::cout << Form_3;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_5-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	
	Form		Form_4("Form_4", 100, 100);
	std::cout << Form_4;
	try
	{
		std::cout << Buro_1;
		Form_4.beSigned(Buro_1);
		std::cout << Form_4;

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_6-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	
	Form		Form_5(Form_4);
	std::cout << Form_5;
	try
	{
		std::cout << Buro_1;
		Form_5.beSigned(Buro_1);
		std::cout << Form_5;

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}