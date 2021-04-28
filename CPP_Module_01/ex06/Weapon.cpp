/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 20:48:28 by nathan            #+#    #+#             */
/*   Updated: 2021/04/28 20:48:29 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::Weapon(): _type("No Weapon")
{
} 

Weapon::~Weapon() 
{
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string	&Weapon::getType(void) const
{
	return (this->_type);
}
