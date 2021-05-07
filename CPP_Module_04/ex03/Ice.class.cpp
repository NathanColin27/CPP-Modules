/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:08:15 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/07 13:10:46 by ncolin           ###   ########.fr       */
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
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " + target.getName() + "*" << std::endl;
	// this->_xp += 10;
}

AMateria*	Ice::clone() const
{
	Ice *clone = new Ice(*this);
	return (clone);
}
