/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRiffle.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:08:47 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/04 14:08:48 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRiffle.class.hpp"

PlasmaRiffle::PlasmaRiffle(): AWeapon("PlasmaRiffle", 5, 21)
{
}

PlasmaRiffle::~PlasmaRiffle() {
}

PlasmaRiffle::PlasmaRiffle(const PlasmaRiffle & other) {
	*this = other;
}


PlasmaRiffle&		PlasmaRiffle::operator=(const PlasmaRiffle & other)
{
	if (this != &other) 
	{
		this->_name = other._name;
		this->_damage = other._damage;
		this->_apcost = other._apcost;
	}
    return *this;
}

void	PlasmaRiffle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}