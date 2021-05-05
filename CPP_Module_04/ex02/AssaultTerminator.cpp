/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:42:07 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/05 19:48:08 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() 
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator & other) {
	*this = other;
}

AssaultTerminator&		AssaultTerminator::operator=(const AssaultTerminator & other) 
{
	(void)other;
	return *this;
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	AssaultTerminator *clone = new AssaultTerminator(*this);
	return (clone);
}

void 	AssaultTerminator::battleCry() const
{
	std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout <<  "* attacks with chainfists *" << std::endl;
}