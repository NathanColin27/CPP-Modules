/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:15:40 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 14:59:50 by ncolin           ###   ########.fr       */
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
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-----------OBJECT INSTANCIATION-------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	std::cout << "On stack" << std::endl;
	{
		Enemy on_stack(10, "enemy");
		Enemy on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Enemy *on_heap = new Enemy(10, "enemy");
		Enemy *on_heap_cpy = new Enemy (*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;
	
	std::cout << "On stack" << std::endl;
	{
		SuperMutant on_stack;
		SuperMutant on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		SuperMutant *on_heap = new SuperMutant();
		SuperMutant *on_heap_cpy = new SuperMutant(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		RadScorpion on_stack;
		RadScorpion on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		RadScorpion *on_heap = new RadScorpion();
		RadScorpion *on_heap_cpy = new RadScorpion(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		Character on_stack("Vault Boy");
		Character on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Character *on_heap = new Character("Vault Boy");
		Character *on_heap_cpy = new Character(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}

	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		PlasmaRifle on_stack;
		PlasmaRifle on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		PlasmaRifle *on_heap = new PlasmaRifle();
		PlasmaRifle *on_heap_cpy = new PlasmaRifle(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}

		std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		PowerFist on_stack;
		PowerFist on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		PowerFist *on_heap = new PowerFist();
		PowerFist *on_heap_cpy = new PowerFist(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}


	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|----------------STORY MODE------------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
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
	Enemy *mutant = new SuperMutant();
	while (me->getAP() > me->getWeapon()->getAPCost())
	{
		std::cout << "SuperMutant HP: "<< mutant->getHP() << std::endl;
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