/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:21:56 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/09 15:13:28 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <algorithm>

int main(void)
{
	{
		std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
		std::cout << "|-----------------INT LIST-------------------|" << std::endl;
		std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
		std::list<int> l;
		try
		{
			std::cout << "|EMPTY CONTAINER|" << std::endl;
			std::cout << easyfind(l,0) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "|FILLED CONTAINER|" << std::endl;
			for (int i = 0; i < 5; i++)
				l.push_back(i);
			for (int i = 0; i < 5; i++)
				std::cout << "list[" << i << "] : " << easyfind(l,i) << std::endl;
			std::cout  << std::endl << "|NON-EXISTING INDEX|" << std::endl;
			std::cout << easyfind(l,10) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
		std::cout << "|----------------INT VECTOR------------------|" << std::endl;
		std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
		std::vector<int> v;
		try
		{
			std::cout << "|EMPTY CONTAINER|" << std::endl;
			std::cout  << std::endl << easyfind(v,0) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			std::cout  << std::endl << "|FILLED CONTAINER|" << std::endl;
			for (int i = 0; i < 5; i++)
				v.push_back(i);
			for (int i = 0; i < 5; i++)
				std::cout << "vector[" << i << "] : " << easyfind(v,i) << std::endl;
			std::cout << std::endl  << "|NON-EXISTING INDEX|" << std::endl;
			std::cout << easyfind(v,10) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	

	
}