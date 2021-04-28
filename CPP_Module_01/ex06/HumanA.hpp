/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:04:18 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/28 15:18:58 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA__HPP
#define HUMANA__HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		HumanA();
		~HumanA();
		void attack(void) const;
		void setWeapon(Weapon &weapon);
};

#endif
