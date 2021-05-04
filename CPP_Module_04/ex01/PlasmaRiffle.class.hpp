/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRiffle.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:08:52 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/04 14:08:53 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFFLE_HPP
#define PLASMARIFFLE_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "AWeapon.class.hpp"

class PlasmaRiffle: public AWeapon
{
	private:

	public:
		PlasmaRiffle();
		// PlasmaRiffle(std::string const & name, int apcost, int damage);
		PlasmaRiffle(const PlasmaRiffle & other);
		~PlasmaRiffle();

		PlasmaRiffle&	operator=(const PlasmaRiffle & other);

		virtual void attack(void) const;
};

#endif
