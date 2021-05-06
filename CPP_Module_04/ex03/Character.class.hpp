#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Character
{
	private:

	public:
		Character();
		Character(const Character & other);
		~Character();

		Character&	operator=(const Character & other);
};

#endif
