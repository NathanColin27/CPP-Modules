/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:08:47 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/04 14:08:48 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.class.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("PlasmaRifle", 5, 21)
{
	std::cout << "PlasmaRifle constructor called" << std::endl;
}

PlasmaRifle::~PlasmaRifle() 
{
	std::cout << "PlasmaRifle destructor called" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & other)
{
	std::cout << "PlasmaRifle copy constructor called" << std::endl;
	*this = other;
}


PlasmaRifle&		PlasmaRifle::operator=(const PlasmaRifle & other)
{
	if (this != &other) 
	{
		this->_name = other._name;
		this->_damage = other._damage;
		this->_apcost = other._apcost;
	}
    return *this;
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}