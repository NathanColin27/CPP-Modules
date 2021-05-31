#include "Cure.class.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure() 
{
}

Cure::Cure(const Cure & other): AMateria("cure")
{
	*this = other;
}

Cure&		Cure::operator=(const Cure & other) {
	if (this != &other)
	{
		this->_xp = other.getXP();
	}
    return *this;
}

void 		Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "’s wounds *" << std::endl;
	AMateria::use(target);
}

Cure*	Cure::clone() const
{
	return (new Cure(*this));
}
