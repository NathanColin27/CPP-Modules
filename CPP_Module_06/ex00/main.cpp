/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:54:51 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/20 11:48:23 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "scalarConverter.class.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter one and only one argument" << std::endl;
		return (-1);
	}
	double tmp = 0.0;
	std::string arg = av[1];
	scalarConverter converter(arg);
	for (size_t i = 0; i < arg.length(); i++)
		if (!isprint(arg[i]))
		{
			std::cout << "non displayable characters found" << std::endl;
			return (-1);
		}
	if (arg.empty())
	{
		std::cout << "Empty arg" << std::endl;
		return (-1);
	}
	if (converter.isChar(arg))
		tmp = converter.convToChar(arg);
	else if (converter.isInt(arg))
		tmp = converter.convToInt(arg);
	else if (converter.isDouble(arg))
		tmp = converter.convToDouble(arg);
	else if(converter.isFloat(arg))
		tmp = converter.convToFloat(arg);
	else
	{
		std::cout << "Arg not convertible" << std::endl;
		return (-1);
	}
	if (tmp >= 0 && tmp <= 255 && !isnan(tmp))
	{
		char c = static_cast<char>(tmp);
		if (isprint(c))
			std::cout << "char: '" << c <<  "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;		
	}
	else
		std::cout << "char: impossible" << std::endl;
	if(tmp >= INT32_MIN && tmp <= INT32_MAX && !isnan(tmp))
		std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (tmp == static_cast<int>(tmp))
	{
		std::cout << "float: " 	<< std::fixed<<std::setprecision(1) << static_cast<float>(tmp) << "f" << std::endl;
		std::cout << "double: " << std::fixed<<std::setprecision(1) << tmp << std::endl;
	}
	else
	{std::cout << "float: " << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << tmp << std::endl;}
}