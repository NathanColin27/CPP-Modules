#include "Cure.class.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure() {
}

Cure::Cure(const Cure & other): AMateria("cure")
{
	*this = other;
}

Cure&		Cure::operator=(const Cure & other) {
	if (this != &other) {
		this->_type = other._type;
		this->_xp = other._xp;

	}
    return *this;
}

void 		Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "’s wounds *" << std::endl;
	this->_xp += 10;
}

AMateria*	Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}
