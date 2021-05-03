/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:57:30 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/03 15:22:59 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &other): Victim(other)
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


std::ostream& operator<<(std::ostream& os, Peon const& Peon)
{
	os << "I am " << Peon.get_name() << " and I like otters!" << std::endl;
    return (os);
}

void Peon::getPolymorphed() const
{
	std::cout << this->get_name() << " has been turned into a pink pony!" << std::endl;
}