/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:23:10 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/04 14:28:55 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.class.hpp"

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(): Enemy(80,"RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion & other): Enemy(other)
{
	*this = other;
}

RadScorpion&		RadScorpion::operator=(const RadScorpion & other) 
{
	if (this != &other) {
		this->_hp = other._hp;
	this->_type = other._type;
	}
    return *this;
}
