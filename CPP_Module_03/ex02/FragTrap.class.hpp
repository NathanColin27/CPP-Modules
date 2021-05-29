/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 10:49:13 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/29 22:29:58 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		virtual ~FragTrap();

		FragTrap&	operator=(const FragTrap& other);

		void	vaulthunter_dot_exe(std::string const & target);
};

#endif
