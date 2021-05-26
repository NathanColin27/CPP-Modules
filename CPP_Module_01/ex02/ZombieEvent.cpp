/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 02:10:06 by nathan            #+#    #+#             */
/*   Updated: 2021/05/26 21:53:39 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type = "None";
	std::cout << "ZombieEvent created" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent destroyed" << std::endl;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{	
	return (new Zombie(name, this->_type));
}

void ZombieEvent::randomChump(void)
{
	std::string name;
	int number;
	
	std::ifstream file("names");
	number = rand() % 199 + 1;
	for (int i = 0; i < number; i++)
		std::getline(file, name);
	
	Zombie *zomb = new Zombie(name, this->_type);
	zomb->announce();
	delete zomb;
}

