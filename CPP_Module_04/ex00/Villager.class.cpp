#include "Villager.class.hpp"


Villager::~Villager()
{
	std::cout << "DOH!" << std::endl;
}

Villager::Villager(std::string name): Victim(name)
{
	std::cout << "Mmmmmmmmmh" << std::endl;
}

Villager::Villager(const Villager &other): Victim(other)
{
	*this = other;
}

Villager&		Villager::operator=(const Villager & other)
{
	if (this != &other)
		_name = other._name;
	return *this;
}

std::ostream& operator<<(std::ostream& os, Villager const& Villager)
{
	os << "I am " << Villager.get_name() << ", I'll trade two apples for a stack of diamond." << std::endl;
    return (os);
}

void Villager::getPolymorphed() const
{
	std::cout << this->get_name() << " has been turned into a golem!" << std::endl;
}