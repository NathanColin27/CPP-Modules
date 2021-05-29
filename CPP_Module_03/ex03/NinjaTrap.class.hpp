/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:01:03 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/29 22:57:28 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		virtual ~NinjaTrap();
		NinjaTrap(const NinjaTrap& other);

		NinjaTrap&	operator=(const NinjaTrap& other);

		void	ninjaShoebox(ClapTrap& clap);
		void	ninjaShoebox(ScavTrap& scav);
		void	ninjaShoebox(FragTrap& frag);
		void	ninjaShoebox(NinjaTrap& ninja);
};



#endif
