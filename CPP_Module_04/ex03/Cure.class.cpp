#include "Cure.class.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Constructor by default called" << std::endl;
}

Cure::~Cure() 
{
	std::cout << "Destructor called" << std::endl;
}

Cure::Cure(const Cure & other): AMateria("cure")
{
	std::cout << "Constructor by copy called" << std::endl;
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
