/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:37:21 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/02 20:14:46 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include "SuperTrap.class.hpp"

int main(void)
{
	{
		srand(time(0));
		std::cout << "Cl4PS CREATION" << std::endl;
		std::cout << "--------------" << std::endl;
		std::cout << std::endl;

		ScavTrap sc4v("sc4v");
		FragTrap fr4g("fr4g");
		ClapTrap cl4p("cl4p");
		NinjaTrap n1nj4("n1nj4");
		SuperTrap sup3r("sup3r");

		std::cout << std::endl;
		std::cout << "TESTING INHERITED CLASS FUNCTIONS" << std::endl;
		std::cout << "---------------------------------" << std::endl;
		std::cout << std::endl;
		
		sup3r.rangedAttack("enemy");
		sup3r.meleeAttack("enemy2");
		sup3r.takeDamage(30);
		sup3r.beRepaired(25);
		sup3r.ninjaShoebox(n1nj4);
		sup3r.ninjaShoebox(sc4v);
		sup3r.ninjaShoebox(fr4g);
		sup3r.ninjaShoebox(cl4p);
		sup3r.vaulthunter_dot_exe("enemy3");
		sup3r.vaulthunter_dot_exe("enemy4");
		sup3r.vaulthunter_dot_exe("enemy5");
		sup3r.vaulthunter_dot_exe("enemy6");
		sup3r.vaulthunter_dot_exe("enemy7");
	
		std::cout << std::endl;
		std::cout << "Cl4PS DESTRUCTION" << std::endl;
		std::cout << "--------------" << std::endl;
		std::cout << std::endl;
	}
	return (0);
}