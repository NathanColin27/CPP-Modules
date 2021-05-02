/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 10:49:13 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/02 20:17:19 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "ClapTrap.class.hpp"

class FragTrap : public virtual ClapTrap
{
	private:

	public:
		FragTrap(std::string name);
		virtual ~FragTrap();
		FragTrap(const FragTrap& other);

		FragTrap&	operator=(const FragTrap& other);
		
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	vaulthunter_dot_exe(std::string const & target);
};

#endif
