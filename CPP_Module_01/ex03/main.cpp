/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 02:00:37 by nathan            #+#    #+#             */
/*   Updated: 2021/05/26 22:18:27 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{	
	std::cout << "Test 1" << std::endl << std::endl;
	{
		ZombieHorde Horde(3);
		std::cout << std::endl;
		Horde.announce();
		std::cout << std::endl;
	}
	std::cout << "Test 2" << std::endl << std::endl;
	ZombieHorde *Horde = new ZombieHorde(5);
	Horde->announce();
	std::cout << std::endl;
	delete Horde;
	return (0);
}