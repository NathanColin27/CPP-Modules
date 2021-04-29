/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:37:21 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/29 15:41:03 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"

int main(void)
{
	srand(time(0));
	{
		FragTrap fr4g("fr4g");
		
		fr4g.meleeAttack("skag");
		fr4g.rangedAttack("looter");
		fr4g.takeDamage(10);
		fr4g.takeDamage(3);
		fr4g.beRepaired(30);
		fr4g.vaulthunter_dot_exe("Corrector");
		fr4g.vaulthunter_dot_exe("Corrector");
		fr4g.vaulthunter_dot_exe("Corrector");
		fr4g.takeDamage(150);
	}
	std::cout << std::endl;
	{
		ScavTrap sc4v("sc4v");
		
		sc4v.meleeAttack("skag");
		sc4v.rangedAttack("looter");
		sc4v.takeDamage(10);
		sc4v.takeDamage(3);
		sc4v.beRepaired(30);
		sc4v.challengeNewcomer();
		sc4v.challengeNewcomer();
		sc4v.challengeNewcomer();
		sc4v.challengeNewcomer();
		sc4v.challengeNewcomer();
		sc4v.challengeNewcomer();
		sc4v.challengeNewcomer();
		sc4v.takeDamage(150);
	}
	return (0);
}