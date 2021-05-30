/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:37:33 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 12:22:40 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.class.hpp"

Victim::Victim()
{
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name  <<" just died for no apparent reason!" << std::endl;
}

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &other)
{
	*this = other;
}

Victim&		Victim::operator=(const Victim & other)
{
	if (this != &other)
	{
		_name = other._name;
		std::cout << "Damn, that guy looks just like me!" << std::endl;
	}
	return *this;
}


std::string const&  Victim::get_name(void) const
{
	return this->_name;
}

std::ostream& operator<<(std::ostream& os, Victim const& Victim)
{
	os << "I am " << Victim.get_name() << " and I like otters!" << std::endl;
    return (os);
}

void Victim::getPolymorphed() const
{
	std::cout << this->get_name() << " has been turned into a cute little sheep!" << std::endl;
}