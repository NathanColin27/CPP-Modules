/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:11:12 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/26 22:14:47 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Zombie
{
	private:
		std::string	_name;
		std::string _type;
	public:
		Zombie();
		Zombie(std::string name, std::string type);
		~Zombie();
		
		void setName(std::string name);
		void announce(void) const;
};

#endif