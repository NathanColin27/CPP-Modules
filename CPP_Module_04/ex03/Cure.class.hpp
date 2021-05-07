#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "AMateria.class.hpp"

class Cure: public AMateria
{
	private:
		std::string _type;
	public:
		Cure();
		~Cure();
		Cure(const Cure & other);
		
		Cure&	operator=(const Cure & other);

		AMateria	*clone(void) const;
		void 		use(ICharacter& target);
};

#endif
