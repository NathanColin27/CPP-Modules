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
		void	addNumber(std::list<int>::iterator begin, std::list<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);
		// Exceptions


		class fullSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Span is already full");
				}
		};
		class emptySpanException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Span is empty");
				}
		};

		class NoSpanFoundException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("No span found");
				}
		};
};	


#endif
