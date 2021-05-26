#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Zombie
{
	private:
		std::string	_name;
		std::string _type;
	public:
		Zombie(std::string name);
		Zombie(std::string name, std::string type);
		~Zombie();
		void announce(void) const;
};

#endif