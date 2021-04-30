/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:51:37 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/30 15:33:11 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.class.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name), NinjaTrap(name),  FragTrap(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "Hey everybody! Check out my package!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other): ClapTrap(other)
{
	*this = other;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& other) {
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

void	SuperTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage" << std::endl; 
	std::cout << "Eat bomb, baddie!" << std::endl;
}

void	SuperTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage" << std::endl; 
	std::cout << "Pain school is now in session." << std::endl;
}