#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Enemy.class.hpp"

class RadScorpion: public Enemy
{
	private:

	public:
		RadScorpion();
		RadScorpion(int hp, std::string const & type);
		~RadScorpion();
		
		RadScorpion(const RadScorpion & other);
		
		RadScorpion&	operator=(const RadScorpion & other);
};

#endif
