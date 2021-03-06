/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 20:48:03 by nathan            #+#    #+#             */
/*   Updated: 2021/04/28 20:48:04 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON__HPP
#define WEAPON__HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		void				setType(std::string type);
		const std::string	&getType(void) const;
};

#endif
