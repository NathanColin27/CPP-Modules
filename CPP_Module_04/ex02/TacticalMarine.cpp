/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:27:17 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/05 19:44:15 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout <<  "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() 
{
	std::cout <<  "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine & other) {
	*this = other;
}


TacticalMarine&		TacticalMarine::operator=(const TacticalMarine & other)
{	
	(void)other;
	return *this;
}

ISpaceMarine*	TacticalMarine::clone() const
{
	TacticalMarine *clone = new TacticalMarine(*this);
	return (clone);
}

void TacticalMarine::battleCry() const
{
	std::cout <<  "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const
{
	std::cout <<  "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const
{
	std::cout <<  "* attacks with a chainsword *" << std::endl;
}