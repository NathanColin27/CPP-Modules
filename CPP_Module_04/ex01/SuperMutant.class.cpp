/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:01:34 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 14:39:57 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.class.hpp"

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(): Enemy(170,"SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & other): Enemy(other)
{
	std::cout << "SuperMutant has a Twin!" << std::endl;
}

SuperMutant&		SuperMutant::operator=(const SuperMutant & other) {
	if (this != &other) 
	{
		this->_hp = other._hp;
		this->_type = other._type;
	}
    return *this;
}

void				SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}