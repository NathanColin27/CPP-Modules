/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:41:47 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/29 23:18:57 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"

class SuperTrap: virtual public NinjaTrap, virtual public FragTrap
{
	public:
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap& other);
		virtual ~SuperTrap();

		SuperTrap&	operator=(const SuperTrap& other);

		using	FragTrap::rangedAttack;
		using	NinjaTrap::meleeAttack;
};

#endif
