#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <stack>
#include <deque>
#include <algorithm>

template<typename T>
class mutantstack: public std::stack<T>
{
	private:
	public:
		// constructors & destructors

		mutantstack<T>();
		mutantstack<T>(const mutantstack & x);
		virtual ~mutantstack<T>();


		// Operator overloads

		mutantstack&	operator=(const mutantstack & x);
		typedef typename std::deque<T>::iterator iterator;
		// Getters and Setters

		// Member functions

		// Exceptions

};

#endif