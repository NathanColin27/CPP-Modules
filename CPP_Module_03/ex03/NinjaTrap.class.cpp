/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:01:06 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/29 23:11:39 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	std::cout << "Viva La Robolution!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Nonono! You'll never take me alive!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& other): ClapTrap(other)
{
	*this = other;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& other)
{
	if (this != &other) 
	{
		this->_hit_points = other._hit_points;
		this->_max_hit_points = other._max_hit_points;
		this->_energy_points = other._energy_points;
		this->_max_energy_points = other._max_energy_points;
		this->_level = other._level;
		this->_melee_attack_damage = other._melee_attack_damage;
		this->_ranged_attack_damage = other._ranged_attack_damage;
		this->_armor_damage_reduction =other._armor_damage_reduction;
	}
    return *this;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap& ninja)
{
	(void)ninja;
	std::cout << "N1NJ4-TP " << this->_name << " greets his friend " << ninja._name <<  std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap& frag)
{
	std::cout << "N1NJ4-TP " << this->_name << " heals FR4G-TP!" << std::endl;
	frag.beRepaired(10);
}

void	NinjaTrap::ninjaShoebox(ClapTrap& clap)
{
	std::cout << "N1NJ4-TP" << this->_name << " attacks CL4P-TP with its fists!" << std::endl;
	clap.takeDamage(this->_melee_attack_damage);
}

void	NinjaTrap::ninjaShoebox(ScavTrap& scav)
{
	std::cout << "N1NJ4-TP " << this->_name << " attacks SC4V-TP whith a grenade!" << std::endl;
	scav.takeDamage(this->_ranged_attack_damage);
}