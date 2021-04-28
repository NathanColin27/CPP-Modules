/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:11:15 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/28 11:59:36 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


std::string ZombieHorde::random_name(void)
{
	std::string name;
	struct timeval tval;
	int number;
    gettimeofday(&tval, NULL);
	
	std::ifstream file("names");
	number = tval.tv_usec % 199 + 1;
	for (int i = 0; i < number; i++)
		std::getline(file, name);

	return (name);
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_size; i++)
		this->_horde[i].announce();
}

ZombieHorde::ZombieHorde(int size) 
{
	this->_size = size;
	this->_horde = new Zombie[size];
	
	for (int i = 0; i < size; i++)
	{
		_horde[i] = Zombie(ZombieHorde::random_name(), "default");
	}
	std::cout << "horde of " << this->_size << " zombies created" << std::endl;
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_horde;
	std::cout << "Horde deleted" << std::endl; 
}


