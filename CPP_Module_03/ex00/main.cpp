/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:37:21 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/28 16:58:52 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

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
	// fr4gtp.vaulthunter_dot_exe("Corrector");
	// fr4gtp.vaulthunter_dot_exe("Corrector");
	// fr4gtp.vaulthunter_dot_exe("Corrector");
	// fr4gtp.vaulthunter_dot_exe("Corrector");
	// fr4gtp.vaulthunter_dot_exe("Corrector");
	// fr4gtp.vaulthunter_dot_exe("Corrector");
	// fr4gtp.vaulthunter_dot_exe("Corrector");
	// fr4gtp.takeDamage(150);
	// fr4gtp.beRepaired(30);
	return (0);
}