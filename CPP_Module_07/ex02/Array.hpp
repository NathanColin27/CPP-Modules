#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <unistd.h>

template<typename T>
class Array
{
	private:
		T		*_arr;
		size_t	_size;
	public:
		// constructors & destructors
		Array()
		{
			_arr = new T[0];
			_size = 0;
		}
		Array(unsigned int n)
		{
			_arr = new T[n];
			_size = n;
		}
		Array(const Array &other)
		{	
			this->_arr = new T[other._size];
			this->_size = other._size;
			for (size_t i = 0; i < this->_size; i++)
				this->_arr[i] = other._arr[i];
			// this = other;
		}
		virtual ~Array()
		{
			delete [] _arr;
		}

		// Operator overloads

		Array&	operator=(const Array &other)
		{
			this ->_size = other._size;
			for (size_t i = 0; i < this->_size; i++)
				this->_arr[i] = other._arr[i];
			return (*this);
		}

		T&	operator[](size_t index)
		{
			if (index >= _size || index < 0)
				throw(outOfBoundException());
			return (this->_arr[index]);
		}
		
		// Getters and Setters

		T get_elem( size_t index) const
		{
			return this->_arr[index];
		}

		// Member functions
		size_t size(void) const
		{
			return (this->_size);
		}
		// Exceptions

		class outOfBoundException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index out of bound");
				}
		};
};

template<typename T>
std::ostream &operator<<(std::ostream &os, Array<T> const &other)
{
	for (size_t i = 0; i < other.size(); i++)
		os << "Array[" << i << "] : " << other.get_elem(i) << std::endl;
	return (os);
}

#endif