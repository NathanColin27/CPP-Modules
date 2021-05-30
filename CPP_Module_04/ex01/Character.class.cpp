/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:39:54 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 14:50:54 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character(std::string name):  _name(name), _ap(40), _weapon(nullptr)
{
	std::cout << "New Character " << name << " created" << std::endl;
}

Character::~Character()
{
	std::cout << _name << " destroyed" << std::endl;
}

Character::Character(const Character & other)
{
	*this = other;
	std::cout << _name << " got cloned" << std::endl;
}

Character&		Character::operator=(const Character & other) {
	if (this != &other)
	{
		this->_name = other._name;
		this->_ap = other._ap;
		this->_weapon = other._weapon;
	}
    return *this;
}

void Character::recoverAP()
{
	this->_ap += 10;
	std::cout << this->_name << " regained 10 hp!" << std::endl;
	if (this->_ap >= 40)
	{
		std::cout << this->_name << " is fully rested!" << std::endl;
		this->_ap = 40;
	}
}

void	Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

std::ostream & operator<<(std::ostream &os, Character const &);

void Character::attack(Enemy *enemy)
{
	if (!enemy || _weapon == NULL || _ap <= _weapon->getAPCost())
		return ;
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	_ap -= _weapon->getAPCost();
	if (_ap <= 0)
		_ap = 0;
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete (enemy);
}

std::string Character::getName(void) const
{
	return (this->_name);
}

int Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon* Character::getWeapon(void) const
{
	return (this->_weapon);
}

std::ostream& operator<<(std::ostream &os, Character const &other)
{
	os << other.getName() << " has " << other.getAP() << " AP";
	if (other.getWeapon() == nullptr)
		os << " and is unarmed" << std::endl;
	else
		os << " and wields a " << other.getWeapon()->getName() << std::endl;
	return (os);
}
