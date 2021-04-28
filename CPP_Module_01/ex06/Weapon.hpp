#ifndef WEAPON__HPP
#define WEAPON__HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		void				setType(std::string type);
		const std::string	&getType(void) const;
};

#endif
