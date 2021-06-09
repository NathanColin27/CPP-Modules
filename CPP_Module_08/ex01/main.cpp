/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:35:22 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/09 16:57:36 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.class.hpp"

int main()
{
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|---------------SUBJECT MAIN-----------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	{
		try
		{
			Span sp = Span(5);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|---------------LARGER SPANS-----------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	{
		try
		{
			srand(time(0));
			Span sp = Span(100);
			std::list<int>::iterator it;
			it = sp.getNumbers().begin();
			for(int i = 0; i < 100; i++)
			{
				sp.addNumber(rand()%100);
				std::advance(it, 1);
				std::cout << *it << std::endl;
			}
			
			std::cout << "Shortest :" << sp.shortestSpan() << std::endl;
			std::cout << "Longest  :"<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|---------------EXCEPTIONS-------------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	

	{
		try
		{
			srand(time(0));
			Span sp = Span(10);
			std::list<int>::iterator it;
			it = sp.getNumbers().begin();
			for(int i = 0; i < 12; i++) // Tries 2 times more 
			{	
				
				sp.addNumber(rand()%10);
				std::advance(it, 1);
				std::cout << *it << std::endl;
				
			}
			std::cout << "Size :"<< sp.getNumbers().size() << std::endl;
			std::cout << "Shortest :" << sp.shortestSpan() << std::endl;
			std::cout << "Longest  :"<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

		try
		{

			Span sp = Span(1);
			sp.addNumber(1);
			sp.addNumber(2);
			
		
			std::cout << "Size :"<< sp.getNumbers().size() << std::endl;
			std::cout << "Shortest :" << sp.shortestSpan() << std::endl;
			std::cout << "Longest  :"<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

		try
		{

			Span sp = Span(1);
			sp.addNumber(1);			
		
			std::cout << "Size :"<< sp.getNumbers().size() << std::endl;
			std::cout << "Shortest :" << sp.shortestSpan() << std::endl;
			std::cout << "Longest  :"<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

		try
		{

			Span sp = Span(0);		
		
			std::cout << "Size :"<< sp.getNumbers().size() << std::endl;
			std::cout << "Shortest :" << sp.shortestSpan() << std::endl;
			std::cout << "Longest  :"<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|---------------ADD BY RANGE-----------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;

	try
	{
		Span sp = Span(5);
		sp.addNumber(1);			
		sp.addNumber(3);			
		sp.addNumber(5);			
		sp.addNumber(7);			
		sp.addNumber(9);			

		Span sp2 = Span(5);
		sp2.addNumber(sp.getNumbers().begin(), sp.getNumbers().end());
		std::cout << "Size span1 :	"<< sp.getNumbers().size() << std::endl;
		std::cout << "Shortest span1 :" << sp.shortestSpan() << std::endl;
		std::cout << "Longest span1 :	"<< sp.longestSpan() << std::endl;
		
		std::cout << "Size span2 :	"<< sp2.getNumbers().size() << std::endl;
		std::cout << "Shortest span2 :" << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span2 :	"<< sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}