/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:19:06 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/29 23:04:41 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "ClapTrap.class.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & x);
		virtual ~ScavTrap();

		ScavTrap&	operator=(const ScavTrap & x);
		
		void	challengeNewcomer(void);
};


#endif