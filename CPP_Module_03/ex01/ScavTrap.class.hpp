/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:19:06 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/29 14:35:13 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class ScavTrap
{
private:
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_max_hit_points;
	unsigned int	_energy_points;
	unsigned int	_max_energy_points;
	unsigned int	_level;
	unsigned int	_melee_attack_damage;
	unsigned int	_ranged_attack_damage;
	unsigned int	_armor_damage_reduction;
	
	ScavTrap();
public:
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap & x);

	ScavTrap&	operator=(const ScavTrap & x);
	
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(void);
};


#endif