/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 02:00:37 by nathan            #+#    #+#             */
/*   Updated: 2021/04/28 03:29:06 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	srand(time(NULL));
	Zombie Zomby = Zombie();
	Zomby.announce();
	Zombie ZomZom = Zombie("ZomZom", "walker");
	ZomZom.announce();
	
	ZombieEvent Event = ZombieEvent();
	Event.setZombieType("crawler");
	Zombie *Bibi = Event.newZombie("Brigitte");
	Bibi->announce();
	delete Bibi;

	Event.randomChump();
	sleep(1);

	Event.randomChump();
	sleep(1);

	Event.randomChump();
	
	return (0);
}