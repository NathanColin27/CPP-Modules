/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:04:34 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/28 15:20:34 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB__HPP
#define HUMANB__HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Weapon.hpp"

class HumanB
{

private:
	Weapon		*_weapon;
	std::string _name;
public:
	HumanB(std::string name);
	~HumanB();
	void attack(void) const;
	void setWeapon(Weapon &weapon);
};

#endif
