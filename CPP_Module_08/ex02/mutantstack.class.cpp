#include "mutantstack.class.hpp"

// constructors & destructors

template<typename T>
mutantstack<T>::mutantstack(): std::stack<T>()
{
}

template<typename T>
mutantstack<T>::mutantstack(const mutantstack &other)
{
	*this = other;
}

// Operator overloads

// Getters and Setters

// Member functions

// Exceptions
