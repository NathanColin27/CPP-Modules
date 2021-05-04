/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:58:27 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/04 12:28:37 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.class.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_damage = damage;
	this->_apcost = apcost;
}

AWeapon::~AWeapon() {
}

AWeapon::AWeapon(const AWeapon & other)
{
	*this = other;
}

AWeapon&		AWeapon::operator=(const AWeapon & other) {
	if (this != &other) {
		this->_name = other._name;
		this->_damage = other._damage;
		this->_apcost = other._apcost;
	}
	return *this;
}

std::string  		AWeapon::getName() const
{
	return (this->_name);
}

int					AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int					AWeapon::getDamage() const
{
	return (this->_damage);
}
