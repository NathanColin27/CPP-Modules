#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <time.h>
#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string _type;
	public:
		ZombieEvent();
		~ZombieEvent();
		void setZombieType(std::string name);
		void randomChump(void);
		Zombie* newZombie(std::string name);
};

#endif