/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:02:18 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/01 16:19:35 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character(): _name("")
{
	std::cout << "Constructor by default called" << std::endl;
}

Character::Character(std::string name): _name(name)
{
	std::cout << "Constructor with parameter called" << std::endl;
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	std::cout << "Destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		if (_inventory[i])
			delete(this->_inventory[i]);
}

Character::Character(const Character & other): _name(other._name)
{
	std::cout << "Constructor by copy called" << std::endl;
	*this = other;
}

Character&		Character::operator=(const Character & other)
{
	int	i;

	if (this != &other)
	{
		_name = other._name;
		i = -1;
		while (++i < 4 && _inventory[i])
			delete _inventory[i];
		i = -1;
		while (++i < 4 && other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	int done = 0;
	if (!m)
		return;
	while (i < 4 && !done)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			done = 1;
		}
		i++;
	}
	// std::cout << m->_type << "equiped in slot " << i << std::endl;
}
void Character::unequip(int idx)
{
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return;
	if(this->_inventory[idx])
		this->_inventory[idx]->use(target);
}