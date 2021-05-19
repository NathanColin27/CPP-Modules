#include "scalarConverter.class.hpp"

// constructors & destructors

scalarConverter::scalarConverter(std::string value): _value(value)
{
}

scalarConverter::~scalarConverter()
{
}

scalarConverter::scalarConverter(const scalarConverter &other)
{
	*this = other;
}

// Operator overloads

scalarConverter&		scalarConverter::operator=(const scalarConverter & other) 
{
	if (this != &other)
	{
		this->_value = other._value;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, scalarConverter const &other)
{
	os << "" << std::endl;
	return (os);
}

// Getters and Setters

// Member functions

bool	scalarConverter::isChar(std::string arg)
{
	if (arg.length() == 3 && arg.front() == '\'' && arg.back() == '\'')
		return (true);
}

bool	scalarConverter::isFloat(std::string arg)
{
	//Special cases
	if (arg == "+inf" || arg == "-inf" || arg == "nan")
		return (true);
	//Remove sign
	if (arg[0] == '-' || arg[0] == '+')
		arg = arg.substr(1);
	if ()
}

bool	scalarConverter::isInt(std::string arg)
{
	//Remove sign
	if (arg[0] == '-' || arg[0] == '+')
		arg = arg.substr(1);
	//Int Check
	for (int i = 0; i < arg.length(); i++)
	{
		if (!isdigit(arg[i]))
			return (false);
	}
	if (stol(arg) < INT_MIN || stol(arg) > INT_MAX)
		return (false);
	return (true);
}

bool	scalarConverter::isDouble(std::string arg)
{

}


bool scalarConverter::check_arg()
{
	std::string arg = this->_value;
	//Are all the characters printable ?

	//Single Char Check
	

}

// Exceptions
