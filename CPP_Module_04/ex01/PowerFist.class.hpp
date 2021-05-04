#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "AWeapon.class.hpp"

class PowerFist: public AWeapon
{
	private:

	public:
		PowerFist();
		PowerFist(const PowerFist & other);
		~PowerFist();

		PowerFist&	operator=(const PowerFist & other);

		virtual void attack(void) const;
};

#endif
