/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 02:03:32 by nathan            #+#    #+#             */
/*   Updated: 2021/04/28 03:24:48 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type; 
}

void Zombie::announce(void) const
{
	std::string message = "<" + this->_name + " - " + this->_type + ">" + " Braiiiiiiinnnssss ...";
	std::cout << message << std::endl;
}