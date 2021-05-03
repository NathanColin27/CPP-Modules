/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:57:30 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/03 15:07:42 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"

Peon::Peon()
{
}

Peon::~Peon()
{
	std::cout << "Peon " << this->_name << " just died for no apparent reason!" << std::endl;
}

Peon::Peon(std::string name): _name(name)
{
	std::cout << "Some random Peon called " << name << " just appeared!" << std::endl;
}

Peon::Peon(const Peon &other)
{
	*this = other;
}

Peon&		Peon::operator=(const Peon & x)
{
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}


std::string const&  Peon::get_name(void) const
{
	return this->_name;
}

std::ostream& operator<<(std::ostream& os, Peon const& Peon)
{
	os << "I am " << Peon.get_name() << " and I like otters!" << std::endl;
    return (os);
}

void Peon::getPolymorphed() const
{
	std::cout << this->get_name() << " has been turned into a cute little sheep!" << std::endl;
}