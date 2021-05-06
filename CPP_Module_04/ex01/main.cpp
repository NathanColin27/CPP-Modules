/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:15:40 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/05 17:23:37 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.class.hpp"
#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"
#include "Enemy.class.hpp"
#include "SuperMutant.class.hpp"
#include "RadScorpion.class.hpp"
#include "Character.class.hpp"

int main(void)
{
	Character* me = new Character("Vault Boy");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Enemy *mutant = new SuperMutant();
	while (me->getAP() > me->getWeapon()->getAPCost())
	{
		std::cout << "SuperMutant HP: "<<mutant->getHP() << std::endl;
		std::cout << std::endl;
		me->attack(mutant);
		std::cout << *me;
	}
	while (me->getAP() < 40)
	{
		me->recoverAP();
	}
	me->equip(pf);
	std::cout << "SuperMutant HP: "<< mutant->getHP() << std::endl;
	std::cout << std::endl;
	me->attack(mutant);
	std::cout << *me;
	std::cout << "SuperMutant HP: "<< mutant->getHP() << std::endl;
	std::cout << std::endl;
	me->attack(mutant);
	std::cout << *me;
	std::cout << "SuperMutant HP: "<< mutant->getHP() << std::endl;
	std::cout << std::endl;
	me->attack(mutant);
	std::cout << *me;
	delete me;
	delete pr;
	delete pf;
	return 0;
}