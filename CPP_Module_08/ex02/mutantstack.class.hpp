#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <stack>
#include <deque>
#include <algorithm>

template<typename T>
class MutantStack: public std::stack<T>
{
	private:
	public:
		// constructors & destructors

		MutantStack<T>();
		MutantStack<T>(const MutantStack & x);
		virtual ~MutantStack<T>();


		// Operator overloads

		MutantStack&	operator=(const MutantStack & x);
		typedef typename std::deque<T>::iterator iterator;
		// Getters and Setters

		iterator begin() const
		{
			return this->c.begin();
		}

		iterator end() const
		{
			return this->c.end();
		}

		// Member functions

		// Exceptions

};

#endif