/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:37:31 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 12:23:50 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead! Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title): _title(title), _name(name)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
	*this = other;
}

Sorcerer&		Sorcerer::operator=(const Sorcerer & other)
{
	if (this != &other)
	{
		_name = other._name;
		_title = other._title;
		std::cout << "I cloned myself!" << std::endl;
	}
	return *this;
}


std::string const& Sorcerer::get_title(void) const
{
	return this->_title;
}

std::string const&  Sorcerer::get_name(void) const
{
	return this->_name;
}

std::ostream& operator<<(std::ostream& os, Sorcerer const& sorcerer)
{
	os << "I am " << sorcerer.get_name() << ", " << sorcerer.get_title() << ", and I like ponies!" << std::endl;
    return (os);
}

void Sorcerer::polymorph(Victim const& victim) const
{
	victim.getPolymorphed();
}