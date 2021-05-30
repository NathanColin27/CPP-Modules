/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:38:43 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 14:45:21 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.class.hpp"

PowerFist::PowerFist(): AWeapon("PowerFist", 8, 50)
{
	std::cout << "PowerFist constructor called" << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << "PowerFist destructor called" << std::endl;
}

PowerFist::PowerFist(const PowerFist & other)
{
	std::cout << "PowerFist copy constructor called" << std::endl;
	*this = other;
}

PowerFist&		PowerFist::operator=(const PowerFist & other)
{
	if (this != &other) 
	{
		this->_name = other._name;
		this->_damage = other._damage;
		this->_apcost = other._apcost;
	}
    return *this;
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}