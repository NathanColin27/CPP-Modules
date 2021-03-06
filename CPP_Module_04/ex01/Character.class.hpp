/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:30:52 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 14:28:46 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "AWeapon.class.hpp"
#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"
#include "Enemy.class.hpp"
#include "RadScorpion.class.hpp"
#include "SuperMutant.class.hpp"

class Character
{
	private:
		std::string _name;
		int			_ap;
		AWeapon 	*_weapon;
	public:
		Character(std::string name);
		Character(const Character & other);
		~Character();

		Character&	operator=(const Character & other);

		std::string getName() const;
		AWeapon*	getWeapon(void) const;
		int			getAP(void) const;
		void		recoverAP();
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
};

std::ostream & operator<<(std::ostream &os, Character const &);

#endif
