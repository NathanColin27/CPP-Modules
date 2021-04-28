#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Brain.hpp"

class Human
{
private:
	const Brain _Brain;
public:
	Human();
	~Human();
	const Brain&	getBrain(void) const;
	std::string		identify(void) const;
};

#endif
