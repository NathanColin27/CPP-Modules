#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Cure
{
	private:

	public:
		Cure();
		Cure(const Cure & other);
		~Cure();

		Cure&	operator=(const Cure & other);
};

#endif
