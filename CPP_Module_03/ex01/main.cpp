/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:37:21 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/29 22:15:35 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include <stdlib.h>

int main(void)
{
		srand(time(0));
	
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-----------OBJECT INSTANCIATION-------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	std::cout << "On stack" << std::endl;
	{
		FragTrap on_stack("Claptrap");
		FragTrap on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		FragTrap *on_heap = new FragTrap("Claptrap");
		FragTrap *on_heap_cpy = new FragTrap(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl;
	
	std::cout << "On stack" << std::endl;
	{
		ScavTrap on_stack("ScavTrap");
		ScavTrap on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		ScavTrap *on_heap = new ScavTrap("ScavTrap");
		ScavTrap *on_heap_cpy = new ScavTrap(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}

	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-------------MEMBER FUNCTIONS---------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;

	{
		FragTrap on_stack("Claptrap");
		std::cout << std::endl;
		on_stack.meleeAttack("skag");
		std::cout << std::endl;
		on_stack.rangedAttack("looter");
		std::cout << std::endl;
		on_stack.takeDamage(50);
		std::cout << std::endl;
		on_stack.takeDamage(3);
		std::cout << std::endl;
		on_stack.beRepaired(30);
		std::cout << std::endl;
		on_stack.beRepaired(200);
		std::cout << std::endl;
		on_stack.takeDamage(200);
		std::cout << std::endl;
	}
	{
		ScavTrap on_stack("ScavTrap");
		std::cout << std::endl;
		on_stack.meleeAttack("skag");
		std::cout << std::endl;
		on_stack.rangedAttack("looter");
		std::cout << std::endl;
		on_stack.takeDamage(50);
		std::cout << std::endl;
		on_stack.takeDamage(3);
		std::cout << std::endl;
		on_stack.beRepaired(30);
		std::cout << std::endl;
		on_stack.beRepaired(200);
		std::cout << std::endl;
		on_stack.takeDamage(200);
		std::cout << std::endl;
	}
	
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|--------------Random attacks----------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	{
		FragTrap on_stack("Claptrap");
		on_stack.vaulthunter_dot_exe("Corrector");
		on_stack.vaulthunter_dot_exe("Corrector");
		on_stack.vaulthunter_dot_exe("Corrector");
		on_stack.vaulthunter_dot_exe("Corrector");
		on_stack.vaulthunter_dot_exe("Corrector");
		on_stack.vaulthunter_dot_exe("Corrector");
	}
		std::cout << std::endl;
	{
		ScavTrap on_stack("ScavTrap");
		on_stack.challengeNewcomer();
		on_stack.challengeNewcomer();
		on_stack.challengeNewcomer();
		on_stack.challengeNewcomer();
		on_stack.challengeNewcomer();
		on_stack.challengeNewcomer();
	}
	return (0);
}