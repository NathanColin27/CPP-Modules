#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Ice
{
	private:

	public:
		Ice();
		Ice(const Ice & other);
		~Ice();

		Ice&	operator=(const Ice & other);
};

#endif
