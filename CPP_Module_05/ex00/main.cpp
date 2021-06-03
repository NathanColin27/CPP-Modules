/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:33:44 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/03 22:48:02 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

int main(void)
{

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "---------CREATE WRONG LEVELS--------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;


	try
	{
		Bureaucrat correct1("Correct", 42);
		std::cout << correct1 << std::endl;
		Bureaucrat wrong1("Wrong", 250);
		std::cout << wrong1 << std::endl;
	
	}
	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat correct2("Correct", 42);
		std::cout << correct2 << std::endl;

		Bureaucrat wrong2("Wrong", -5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "------------------------------------------" << std::endl;
	std::cout << "------------GRADE INC/ DEC----------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	
	Bureaucrat Test_1("Test_1", 1);
	try
	{
		for (; Test_1.getGrade() < 19; Test_1.grade_dec())
			std::cout << Test_1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		for (; Test_1.getGrade() > 10; Test_1.grade_inc())
			std::cout << Test_1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


	std::cout << "------------------------------------------" << std::endl;
	std::cout << "--------GRADE INC/ DEC EXCESS-------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	
	Bureaucrat Test_2("Test_2", 148);
	try
	{
		for (; Test_2.getGrade() < 190; Test_2.grade_dec())
			std::cout << Test_2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat Test_3("Test_3", 5);
	try
	{
		
		for (; Test_3.getGrade() > -5; Test_3.grade_inc())
			std::cout << Test_3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_3-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	try
	{
		Bureaucrat Test_3("Test_3", 0);
		std::cout << Test_3;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_4-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	
	try
	{
		Bureaucrat Test_4("Test_4", 151);
		std::cout << Test_4;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_5-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	Bureaucrat Test_5("Test_5", 5);	
	try
	{
		Bureaucrat Test_5cpy(Test_5);
		std::cout << Test_5cpy;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}