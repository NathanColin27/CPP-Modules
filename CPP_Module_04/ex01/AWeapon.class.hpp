/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:58:32 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 14:11:50 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class AWeapon
{
	protected:
		std::string	_name;
		int			_apcost;
		int			_damage;
		AWeapon();
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon & other);
		virtual ~AWeapon();

		AWeapon&	operator=(AWeapon const & other);
		
		std::string virtual getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		void virtual		attack() const = 0;
};


#endif
