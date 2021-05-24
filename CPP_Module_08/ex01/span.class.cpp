#include "Span.class.hpp"

// constructors & destructors

Span::Span(unsigned int size): _size(size)
{
	_len = 0;
	_arr = new int[size];
}

Span::~Span()
{
	delete _arr;
}

Span::Span(const Span &other): _size(other._size), _len(other._len)
{
	_arr = new int[other._size];
	for (size_t i = 0; i < other._size; i++)
		this->_arr[i] = other._arr[i];
}

// Operator overloads

Span&		Span::operator=(const Span & other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < this->_size; i++)
			this->_arr[i] = other._arr[i];
		return (*this);
	}
	return (*this);
}

// Getters and Setters

// Member functions

void	Span::addNumber(int num)
{
	if (_len == _size)
		throw std::exception();
	else
	{	
		_arr[_len] = num;
		_len++;
	}
}
void	Span::addNumber(std::iterator<int, int> range)
{
	if (_len == _size)
		throw std::exception();
	else
	{	
	}
}
int		Span::shortestSpan(void)
{

}
int		Span::longestSpan(void)
{

}


// Exceptions
