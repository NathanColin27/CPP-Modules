#include "MutantStack.class.hpp"

// constructors & destructors

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &other)
{
	*this = other;
}

// Operator overloads

// Getters and Setters

// Member functions

// Exceptions
