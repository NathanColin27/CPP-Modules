/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:41:47 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/30 15:36:04 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
	private:

	public:
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap& other);
		virtual ~SuperTrap();

		SuperTrap&	operator=(const SuperTrap& other);
		
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
};

#endif
