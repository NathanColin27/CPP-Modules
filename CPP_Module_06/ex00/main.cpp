/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:54:51 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/19 16:03:27 by ncolin           ###   ########.fr       */
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
	for (int i = 0; i < arg.length(); i++)
		if (!isprint(arg[i]))
		{
			std::cout << "non displayable characters found" << std::endl;
			return (false);
		}
	if (converter.isChar(arg))
	{
		
	}	//
	else if (converter.isInt(arg))
	{
		//
	}
	else if (converter.isDouble(arg))
	{

	}
	else if(converter.isFloat(arg))
	{
		
	}
	else
	{
		std::cout << "Arg not convertible" << std::endl;
	}
	
	std::cout << "char:" << std::endl;
	std::cout << "int:" << std::endl;
	std::cout << "float:" << std::endl;
	std::cout << "double:" << std::endl;
	
}