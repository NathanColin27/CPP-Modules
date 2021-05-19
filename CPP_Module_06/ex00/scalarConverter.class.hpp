#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <sstream>

class scalarConverter
{
	private:
		std::string _value;
		scalarConverter();
	public:
		// constructors & destructors
		scalarConverter(std::string value);
		scalarConverter(const scalarConverter & x);
		virtual ~scalarConverter();

		// Operator overloads
		scalarConverter&	operator=(const scalarConverter & x);
		
		// Getters and Setters

		// Member functions
		bool	check_arg();

		bool	isChar(std::string value);
		bool	isFloat(std::string value);
		bool	isInt(std::string value);
		bool	isDouble(std::string value);
		
		float	convToFloat(std::string value);
		double	convToDouble(std::string value);
		int		convToInt(std::string value);
		char	convToChar(std::string value);

		// Exceptions

};


#endif
