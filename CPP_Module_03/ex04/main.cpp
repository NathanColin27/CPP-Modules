/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:37:21 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/29 23:17:34 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include "SuperTrap.class.hpp"

int main(void)
{
	
	srand(time(0));
	std::cout << "On stack" << std::endl;
	{
		SuperTrap on_stack("SuperTrap");
		SuperTrap on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		SuperTrap *on_heap = new SuperTrap("SuperTrap");
		SuperTrap *on_heap_cpy = new SuperTrap(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}

	std::cout << std::endl;
	std::cout << "TESTING INHERITED CLASS FUNCTIONS" << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << std::endl;
	
	SuperTrap sup3r("sup3r");
	std::cout << std::endl;
	ClapTrap clap("clap");
	std::cout << std::endl;
	ScavTrap scav("scav");
	std::cout << std::endl;
	FragTrap frag("frag");
	std::cout << std::endl;
	NinjaTrap ninja("ninja");
	std::cout << std::endl;
	sup3r.rangedAttack("enemy");
	std::cout << std::endl;
	sup3r.meleeAttack("enemy2");
	std::cout << std::endl;
	sup3r.takeDamage(30);
	std::cout << std::endl;
	sup3r.beRepaired(25);
	std::cout << std::endl;
	sup3r.ninjaShoebox(ninja);
	std::cout << std::endl;
	sup3r.ninjaShoebox(scav);
	std::cout << std::endl;
	sup3r.ninjaShoebox(frag);
	std::cout << std::endl;
	sup3r.ninjaShoebox(clap);
	std::cout << std::endl;
	std::cout << std::endl;
	sup3r.vaulthunter_dot_exe("enemy3");
	std::cout << std::endl;
	sup3r.vaulthunter_dot_exe("enemy4");
	std::cout << std::endl;
	sup3r.vaulthunter_dot_exe("enemy5");
	std::cout << std::endl;
	sup3r.vaulthunter_dot_exe("enemy6");
	std::cout << std::endl;
	sup3r.vaulthunter_dot_exe("enemy7");
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Cl4PS DESTRUCTION" << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << std::endl;

	return (0);
}