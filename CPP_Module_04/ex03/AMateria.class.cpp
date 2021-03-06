/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:15:41 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/31 14:45:09 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria(std::string const &type): _type(type), _xp(0)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria & other): _type(other._type)
{
	*this = other;
}

AMateria&		AMateria::operator=(const AMateria & other) {
	if (this != &other)
	{
		this->_xp = other._xp;
	}
    return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int	AMateria::getXP(void) const
{
	return (this->_xp);
}


void AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	(void)target;	
}