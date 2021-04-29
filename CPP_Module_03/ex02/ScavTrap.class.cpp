/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:31:12 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/29 14:47:10 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap() 
{
}

ScavTrap::ScavTrap(std::string name): _name(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "Look out, everybody, things are about to get awesome!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "I'll get you next time!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
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

void	ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage" << std::endl; 
	std::cout << "You're listening to 'Short-Range Damage Radio'." << std::endl;
}

void	ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage" << std::endl; 
	std::cout << "Meet professor punch!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->_armor_damage_reduction)
		amount = 0;
	else
		amount = amount - this->_armor_damage_reduction;
	if (amount > this->_max_hit_points)
		amount = this->_max_hit_points;
	if (amount >= this->_hit_points)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
	std::cout << "SC4V-TP " << this->_name << " takes " << amount << " damages" << std::endl;
	if (amount > 0)
		std::cout << "I'm leaking!" << std::endl;
	std::cout << "Current HP : " << this->_hit_points << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hit_points += amount;
	if (this->_hit_points > 100)
		this->_hit_points = 100;
	std::cout << "SC4V-TP " << this->_name << " gets repaired, he regains " << amount << " hps" << std::endl;
	std::cout << "Healsies!" << std::endl;
	std::cout << "Current HP : " << this->_hit_points << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
std::string challenges[5] =
	{
		"You versus me! Me versus you! Either way!",
		"I will prove to you my robotic superiority!",
		"Dance battle! Or, you know... regular battle.",
		"Man versus machine! Very tiny streamlined machine!",
		"Care to have a friendly duel?"
	};
	int challenge = rand() % 5;
	std::cout << "SC4V-TP " << this->_name << " challenges you \"" << challenges[challenge] << "\"" << std::endl; 
}
