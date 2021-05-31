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
		Cure(const Cure & other);
		virtual ~Cure();
		
		Cure&	operator=(const Cure & other);

		virtual Cure*	clone() const;
		virtual void 			use(ICharacter& target);
};

#endif
