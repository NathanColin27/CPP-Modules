/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:37:21 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/29 12:43:01 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

int main(void)
{
	srand(time(0));
	FragTrap fr4gtp("Claptrap");
	
	fr4gtp.meleeAttack("skag");
	fr4gtp.rangedAttack("looter");
	fr4gtp.takeDamage(10);
	fr4gtp.takeDamage(3);
	fr4gtp.beRepaired(30);
	fr4gtp.vaulthunter_dot_exe("Corrector");
	fr4gtp.vaulthunter_dot_exe("Corrector");
	fr4gtp.vaulthunter_dot_exe("Corrector");
	fr4gtp.vaulthunter_dot_exe("Corrector");
	fr4gtp.vaulthunter_dot_exe("Corrector");
	fr4gtp.vaulthunter_dot_exe("Corrector");
	fr4gtp.vaulthunter_dot_exe("Corrector");
	fr4gtp.takeDamage(150);
	return (0);
}