#ifndef Span_HPP
#define Span_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Span
{
	private:
		int			*_arr;
		int const	_size;
		int			_len;
		Span();
	public:
		// constructors & destructors
		Span(unsigned int size);
		Span(const Span & x);
		virtual ~Span();

		// Operator overloads

		Span&	operator=(const Span & x);
		
		// Getters and Setters

		// Member functions
		void	addNumber(int num);
		void	addNumber(std::iterator<int, int> range);
		int		shortestSpan(void);
		int		longestSpan(void);
		// Exceptions

};

#endif
