#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() {
}

ZombieHorde::ZombieHorde(int size) 
{
	this->horde = new Zombie[size]; 
}

ZombieHorde::~ZombieHorde() {
}


