#ifndef Span_HPP
#define Span_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <unistd.h>
#include <list>

class Span
{
	private:
		std::list<int>	_numbers;
		size_t			_size;
		Span();
	public:
		// constructors & destructors
		Span(unsigned int size);
		Span(const Span & x);
		virtual ~Span();

		// Operator overloads

		Span&	operator=(const Span & x);
		
		// Getters and Setters

		std::list<int>&	getNumbers(void);
		// Member functions
		void	addNumber(int num);
		int		shortestSpan(void);
		int		longestSpan(void);
		// Exceptions

};


#endif
