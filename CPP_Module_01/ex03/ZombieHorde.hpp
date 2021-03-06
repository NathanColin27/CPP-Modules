/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:11:18 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/28 11:37:10 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <sys/time.h>
#include "Zombie.hpp"

class ZombieHorde
{
	private:
		int		_size;
		Zombie	*_horde;

	public:
		ZombieHorde(int size);
		~ZombieHorde();
		std::string	random_name(void);
		void		announce(void);
};

#endif