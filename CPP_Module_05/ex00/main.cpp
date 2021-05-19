/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:33:44 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/16 15:00:49 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

int main(void)
{

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_1-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	
	Bureaucrat Test_1("Test_1", 1);
	for (; Test_1.getGrade() < 42; Test_1.grade_dec())
		std::cout << Test_1;
	for (; Test_1.getGrade() > 19; Test_1.grade_inc())
		std::cout << Test_1;


	std::cout << "------------------------------------------" << std::endl;
	std::cout << "-----------------TEST_2-------------------" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	
	try
	{
		Bureaucrat Test_2("Test_2", 150);
		std::cout << Test_2;
		Test_2.grade_dec();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
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

	try
	{
		Bureaucrat Test_5(Test_1);
		std::cout << Test_5;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}