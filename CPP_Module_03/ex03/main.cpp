/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:37:21 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/29 22:53:57 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.class.hpp"
#include "ClapTrap.class.hpp"
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
		ClapTrap on_stack("ClapTrap");
		ClapTrap on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		ClapTrap *on_heap = new ClapTrap("ClapTrap");
		ClapTrap *on_heap_cpy = new ClapTrap(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << "-----------------------"<< std::endl;


	std::cout << "On stack" << std::endl;
	{
		FragTrap on_stack("Fragtrap");
		FragTrap on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		FragTrap *on_heap = new FragTrap("Fragtrap");
		FragTrap *on_heap_cpy = new FragTrap(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << "-----------------------"<< std::endl;

	
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
	std::cout << "-----------------------"<< std::endl;

	
	std::cout << "On stack" << std::endl;
	{
		NinjaTrap on_stack("NinjaTrap");
		NinjaTrap on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		NinjaTrap *on_heap = new NinjaTrap("NinjaTrap");
		NinjaTrap *on_heap_cpy = new NinjaTrap(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	

	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-------------MEMBER FUNCTIONS---------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;

	{
		ClapTrap on_stack("ClapTrap");
		std::cout << std::endl;
		on_stack.meleeAttack("skag");
		std::cout << std::endl;
		on_stack.rangedAttack("looter");
		on_stack.takeDamage(50);
		std::cout << std::endl;
		std::cout << std::endl;
		on_stack.beRepaired(30);
		std::cout << std::endl;
	}
		std::cout << "-----------------------"<< std::endl;
	{
		FragTrap on_stack("Fragtrap");
		std::cout << std::endl;
		on_stack.meleeAttack("skag");
		std::cout << std::endl;
		on_stack.rangedAttack("looter");
		on_stack.takeDamage(50);
		std::cout << std::endl;
		std::cout << std::endl;
		on_stack.beRepaired(30);
		std::cout << std::endl;
	}
		std::cout << "-----------------------"<< std::endl;
	{
		ScavTrap on_stack("ScavTrap");
		std::cout << std::endl;
		on_stack.meleeAttack("skag");
		std::cout << std::endl;
		on_stack.rangedAttack("looter");
		on_stack.takeDamage(50);
		std::cout << std::endl;
		std::cout << std::endl;
		on_stack.beRepaired(30);
		std::cout << std::endl;
	}
	std::cout << "-----------------------"<< std::endl;
	{
		NinjaTrap on_stack("NinjaTrap");
		std::cout << std::endl;
		on_stack.meleeAttack("skag");
		std::cout << std::endl;
		on_stack.rangedAttack("looter");
		on_stack.takeDamage(50);
		std::cout << std::endl;
		std::cout << std::endl;
		on_stack.beRepaired(30);
		std::cout << std::endl;
	}
	
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|--------------Random attacks----------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	{
		FragTrap on_stack("Fragtrap");
		on_stack.vaulthunter_dot_exe("Corrector");
		on_stack.vaulthunter_dot_exe("Corrector");
	}
	std::cout << "-----------------------"<< std::endl;
	{
		ScavTrap on_stack("ScavTrap");
		on_stack.challengeNewcomer();
		on_stack.challengeNewcomer();
	}
	std::cout << "-----------------------"<< std::endl;
	{
		ClapTrap clap("clap");
		std::cout << std::endl;
		ScavTrap scav("scav");
		std::cout << std::endl;
		FragTrap frag("frag");
		std::cout << std::endl;
		NinjaTrap ninja("ninja");
		std::cout << std::endl;
		NinjaTrap ninja2("ninja2");
		std::cout << std::endl;

		ninja.ninjaShoebox(clap);
		std::cout << std::endl;

		ninja.ninjaShoebox(scav);
		std::cout << std::endl;

		ninja.ninjaShoebox(frag);
		std::cout << std::endl;

		ninja.ninjaShoebox(ninja2);
		std::cout << std::endl;
	}
	
	return (0);
}