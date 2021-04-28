/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 21:00:59 by nathan            #+#    #+#             */
/*   Updated: 2021/04/27 22:22:37 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void Pony::sing(std::string song)
{	
	std::cout << this->_name << " is_singing!" << std::endl;
	std::cout << std::endl;
	std::cout << song << std::endl;
	std::cout << std::endl;
	return;
}

void Pony::say_name(void)
{
	std::cout << "my name is " << this->get_name() << std::endl;
}

Pony::Pony(void)
{
	std::cout << "created a Pony" << std::endl;
	this->set_age(0);
	this->set_name("not set");
	return;
}

Pony::~Pony()
{
	std::cout << "destroyed a Pony named " << this->_name << std::endl;
	return;
}

void Pony::set_age(int age)
{
	this->_age = age;
}

int Pony::get_age(void) const
{
	std::cout << "this pony is " << this->_age << " year(s) old"<< std::endl;
	return (this->_age);
}

void Pony::set_name(std::string name)
{
	this->_name = name;
}

std::string Pony::get_name(void) const
{
	return (this->_name);
}

Pony::Pony(std::string name)
{
	std::cout << "created a Pony named " << name << std::endl;
	this->_name = name;
	return;
}