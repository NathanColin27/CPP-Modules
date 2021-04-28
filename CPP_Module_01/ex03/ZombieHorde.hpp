#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Zombie.hpp"

class ZombieHorde
{
	private:
		int size;
		Zombie *horde;

	public:
		ZombieHorde(int size);
		~ZombieHorde();
		
		void announce(void);
};

#endif