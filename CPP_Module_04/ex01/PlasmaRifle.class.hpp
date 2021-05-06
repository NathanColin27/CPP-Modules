/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:08:52 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/04 14:08:53 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PlasmaRifle_HPP
#define PlasmaRifle_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "AWeapon.class.hpp"

class PlasmaRifle: public AWeapon
{
	private:

	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle & other);
		~PlasmaRifle();

		PlasmaRifle&	operator=(const PlasmaRifle & other);

		virtual void attack(void) const;
};

#endif
