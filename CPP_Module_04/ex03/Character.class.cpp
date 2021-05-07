/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:02:18 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/07 13:25:49 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character(std::string name): _name(name)
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete(this->_inventory[i]);
}

Character::Character(const Character & other) {
	*this = other;
}

Character&		Character::operator=(const Character & other) {
	if (this != &other) {
		for(int i = 0; i < 4; i++)
			this->_inventory[i] =  other._inventory[i]->clone();
		this->_name = other._name;
	}
    return *this;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = m;
			break;
		}
	// std::cout << m->_type << "equiped in slot " << i << std::endl;
}
void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "index must be between 0 and 3"<< std::endl;
		return ;
	}
	if (this->_inventory[idx])
	{
		this->_inventory[idx] = nullptr;
		// std::cout << m->_type << "unequiped slot " << idx << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "index must be between 0 and 3"<< std::endl;
		return ;
	}
	else if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "This inventory slot is empty"<< std::endl;
}