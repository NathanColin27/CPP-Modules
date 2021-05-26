/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 02:03:32 by nathan            #+#    #+#             */
/*   Updated: 2021/05/26 22:15:51 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " is dead for real now." << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type; 
}
void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void) const
{
	std::string message = "<" + this->_name + " - " + this->_type + ">" + " Braiiiiiiinnnssss ...";
	std::cout << message << std::endl;
}