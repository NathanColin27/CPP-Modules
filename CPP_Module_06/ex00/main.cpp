/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:54:51 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/19 22:50:49 by nathan           ###   ########.fr       */
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
	std::string arg = av[1];
	scalarConverter converter(arg);
	for (size_t i = 0; i < arg.length(); i++)
		if (!isprint(arg[i]))
		{
			std::cout << "non displayable characters found" << std::endl;
			return (false);
		}
	if (converter.isChar(arg))
	{
		std::cout << "CHAR" << std::endl;
	}	//
	else if (converter.isInt(arg))
	{
		std::cout << "INT" << std::endl;
	}
	else if (converter.isDouble(arg))
	{
		std::cout << "DOUBLE" << std::endl;
	}
	else if(converter.isFloat(arg))
	{
		std::cout << "FLOAT" << std::endl;
	}
	else
	{
		std::cout << "Arg not convertible" << std::endl;
	}
	double print;
	converter.convToFloat(arg) >> print;
	
	std::cout << "char:" << std::endl;
	std::cout << "int:" << std::endl;
	std::cout << "float:" << converter.convToFloat(arg) << std::endl;
	std::cout << "double:" << converter.convToDouble(arg) << std::endl;
	
}