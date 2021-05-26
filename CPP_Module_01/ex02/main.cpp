/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 02:00:37 by nathan            #+#    #+#             */
/*   Updated: 2021/05/26 21:59:01 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	srand(time(NULL));
	std::cout << "Test 1 - Zombie with name" << std::endl << std::endl;
	{
		Zombie Zombie_1 = Zombie("Cramberry");
		Zombie_1.announce();
	}
	std::cout << std::endl << "Test 2 - Zombie with name and type" << std::endl << std::endl;
	Zombie Zombie_2 = Zombie("ZomZom", "walker");
	Zombie_2.announce();
	
	std::cout << std::endl << "Test 3 - Zombie event" << std::endl << std::endl;
	
	ZombieEvent Event = ZombieEvent();
	Event.setZombieType("crawler");
	Zombie *Zombie_3 = Event.newZombie("Brigitte");
	Zombie_3->announce();
	
	std::cout << std::endl << "Test 4 - random Zombie" << std::endl << std::endl;
	
	Event.randomChump();
	sleep(1);
	std::cout << std::endl << "Test 5 - random Zombie with another type" << std::endl << std::endl;
	Event.setZombieType("walker");
	Event.randomChump();
	sleep(1);

	delete Zombie_3;

	return (0);
}