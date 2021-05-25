/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:42:13 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/25 17:21:03 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.class.hpp"

// constructors & destructors

Span::Span(unsigned int size): _size(size)
{
}

Span::~Span()
{
}

Span::Span(const Span &other)
{
	*this = other;
}

// Operator overloads

Span&		Span::operator=(const Span & other)
{
	if (this != &other)
	{
		this->_size = other._size;
		this->_numbers = other._numbers;
	}
	return (*this);
}



// Getters and Setters
std::list<int>&	Span::getNumbers(void)
{
	return (_numbers);
}
// Member functions

void	Span::addNumber(int num)
{
	try
	{
		if (_numbers.size() == _size)
			throw std::exception();
		else
			_numbers.push_back(num);
	}
	catch (std::exception &e)
	{
		std::cout << "MAX_SIZE";
	}
}

int		Span::shortestSpan(void)
{
	try
	{
		if (_numbers.empty())
			throw std::exception();
		std::list<int> tmp(_numbers);
		std::list<int>::iterator it;
		std::list<int>::iterator it2;
		int min = longestSpan();
		tmp.sort();
		for (it = tmp.begin(); it != tmp.end(); it++)
		{
			it2 = it;
			for (std::advance(it2,1);it2 != tmp.end(); ++it2)
			{
				if (abs(*it - *it2) < min && abs(*it - *it2) != 0)
				{
					min = abs(*it - *it2);
					std::cout << "NUMS " << *it << " " << *it2 << std::endl; 
				}

			}
		}
		return min;
	}
	
	catch (std::exception &e)
	{
		std::cout << "No values contained in span" << std::endl;
		return (0);
	}
}

int		Span::longestSpan(void)
{
	try
	{
		if (_numbers.empty())
			throw std::exception();
		int max = *(std::max_element(_numbers.begin(), _numbers.end()));
		int min = *(std::min_element(_numbers.begin(), _numbers.end()));
		return (max - min);
	}
	catch (std::exception &e)
	{
		std::cout << "No values contained in span" << std::endl;
		return (0);
	}
}


// Exceptions
