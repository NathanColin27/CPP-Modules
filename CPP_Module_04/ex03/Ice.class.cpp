/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:08:15 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/31 17:34:56 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice() {
}

Ice::Ice(const Ice & other): AMateria("ice")
{
	*this = other;
}

Ice&		Ice::operator=(const Ice & other) {
	if (this != &other)
	{
		this->_xp = other._xp;
	}
    return *this;
}

void 	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + "*" << std::endl;
	_xp += 10;
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}
