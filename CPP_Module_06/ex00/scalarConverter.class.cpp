#include "scalarConverter.class.hpp"
#include <climits>
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

// Getters and Setters

// Member functions

bool	scalarConverter::isChar(std::string arg)
{
	// std::cout << " length : " << arg.length() << " front : "  << arg.front()  << " back : "  << arg.back()<< std::endl;

	if (arg.length() == 3 && arg.front() == '\'' && arg.back() == '\'')
		return (true);
	return (false);
}

bool	scalarConverter::isFloat(std::string arg)
{
	if (arg == "+inff" || arg == "-inff" || arg == "nanf")
		return (true);
	if (arg.back() != 'f')
		return(false);
	else
		arg.resize(arg.size () - 1);
	if (arg[0] == '-' || arg[0] == '+')
		arg = arg.substr(1);
	if (arg.front() == '.' || arg.back() == '.' || std::count(arg.begin(), arg.end(), '.') != 1 )
		return (false);
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (!isdigit(arg[i]) && !(arg[i] == '.'))
			return (false);
	}
	return (true);
}

bool	scalarConverter::isInt(std::string arg)
{
	//Remove sign
	if (arg[0] == '-' || arg[0] == '+')
		arg = arg.substr(1);
	//Int Check
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (!isdigit(arg[i]))
			return (false);
	}
	if (stol(arg) < INT32_MIN || stol(arg) > INT32_MAX)
		return (false);
	return (true);
}

bool	scalarConverter::isDouble(std::string arg)
{
	//Special cases
	if (arg == "+inf" || arg == "-inf" || arg == "nan")
		return (true);
	//Remove sign
	if (arg[0] == '-' || arg[0] == '+')
		arg = arg.substr(1);
	if (arg.front() == '.' || arg.back() == '.' || std::count(arg.begin(), arg.end(), '.') != 1 )
		return (false);
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (!isdigit(arg[i]) && !(arg[i] == '.'))
			return (false);
	}
	return (true);
}



std::stringstream	convToFloat(std::string value)
{
	std::stringstream res;
	if (value == "nanf" || value == "+inff" || value == "-inff")
		res << value;
	else
	{
		value.resize(value.size() - 1);
		res << value;
	}
	return (res);
}

std::stringstream	convToDouble(std::string value)
{
	std::stringstream res;
	if (value == "nanf" || value == "+inff" || value == "-inff")
		res << value;
	else
	{
		value.resize(value.size() - 1);
		res << value;
	}
	return (res);
}
int		convToInt(std::string value);
char	convToChar(std::string value);
// Exceptions
