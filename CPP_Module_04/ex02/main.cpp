/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:23:39 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/31 14:04:14 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|---------------SUBJECT MAIN-----------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-----------OBJECT INSTANCIATION-------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	std::cout << "On stack" << std::endl;
	{
		AssaultTerminator on_stack;
		AssaultTerminator on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		AssaultTerminator *on_heap = new AssaultTerminator();
		AssaultTerminator *on_heap_cpy = new AssaultTerminator (*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		TacticalMarine on_stack;
		TacticalMarine on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		TacticalMarine *on_heap = new TacticalMarine();
		TacticalMarine *on_heap_cpy = new TacticalMarine (*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;
	
	std::cout << "[Uncomment contructors/destructor messages in Squad.cpp to see output]" << std::endl;

	std::cout << "On stack" << std::endl;
	{	
		Squad on_stack;
		Squad on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Squad *on_heap = new Squad();
		Squad *on_heap_cpy = new Squad (*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}

	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|--------------SOME MORE TESTS---------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	ISpaceMarine* marine1 = new TacticalMarine;
	ISpaceMarine* marine2 = new TacticalMarine;
	ISpaceMarine* marine3 = new TacticalMarine;

	Squad* squad = new Squad;
	std::cout << "Adding marine1 to squad" << std::endl;
	squad->push(marine1);
	std::cout << "Adding marine1 to squad" << std::endl;
	squad->push(marine1);
	std::cout << "Adding marine1 to squad" << std::endl;
	squad->push(marine1->clone());
	std::cout << "Squad size : " << squad->getCount() << std::endl;
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;
	

	std::cout << "Creating squad 2 form squad" << std::endl;
	Squad* squad2 = new Squad(*squad);
	
	std::cout << "Squad size : " << squad->getCount() << std::endl;
	std::cout << "Squad 2 size : " << squad2->getCount() << std::endl;
	
	std::cout << "Adding 2 marines to squad2" << std::endl;
	squad2->push(marine3);
	squad2->push(marine2);
	
	std::cout << "Squad 2 size : " << squad2->getCount() << std::endl;
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "Deleting squad 1" << std::endl;
	delete squad;
	std::cout << "Deleting squad 2" << std::endl;

	delete squad2;

}