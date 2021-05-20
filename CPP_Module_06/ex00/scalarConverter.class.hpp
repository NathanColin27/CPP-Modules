#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <sstream>
#include <algorithm>
#include <math.h> 

class scalarConverter
{
	private:
		std::string _value;
		
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
		
		double	convToFloat(std::string value);
		double	convToDouble(std::string value);
		double	convToInt(std::string value);
		double	convToChar(std::string value);

		// Exceptions

};


#endif
