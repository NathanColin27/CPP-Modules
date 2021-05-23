/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:56:13 by nathan            #+#    #+#             */
/*   Updated: 2021/05/24 00:01:59 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{

	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|------------------TEST1---------------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	Array<int> test1(3);
	std::cout << test1.size() << std::endl;
	std::cout << "[test1]" << std::endl << test1 << std::endl;

	try
	{
		for (size_t i = 0; i < test1.size(); i++)
			test1[i] = i;
			
		std::cout << "[test1]" << std::endl << test1 << std::endl;
		test1[2] = 6.0; //implicit demotion
		test1[1] = static_cast<int>(9.5f); //explicit demotion
		std::cout << "[test1]" << std::endl << test1 << std::endl;
		test1[-1] = 5; // index out of bound
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|------------------TEST2---------------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;

	
	Array<int> test2 = test1;
	std::cout << "[test1]" << std::endl << test1 << std::endl;
	std::cout << "[test2]" << std::endl << test2 << std::endl;
	test1[0] = 42;
	std::cout << "[test1]" << std::endl << test1 << std::endl;
	std::cout << "[test2]" << std::endl << test2 << std::endl;
	
	std::cout << std::endl << 	">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << 				"|------------------TEST3---------------------|" << std::endl;
	std::cout << 				"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	Array<Array<int>> test3(3);
	std::cout << "[test3]" << std::endl << test3 << std::endl;
	
}