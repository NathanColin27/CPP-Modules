#ifndef VILLAGER_HPP
#define VILLAGER_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Victim.class.hpp"

class Villager : public Victim
{
	private:

	public:
		Villager(std::string name);
		Villager(Villager const& other);
		virtual ~Villager();

		Villager&	operator=(Villager const& other);

		virtual void getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& os, Villager const &other);

#endif
