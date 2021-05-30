/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:03:03 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 14:14:53 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"
#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"
#include "Villager.class.hpp"

int main()
{
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-----------OBJECT INSTANCIATION-------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	std::cout << "On stack" << std::endl;
	{
		Sorcerer on_stack("Sorcerer", "The Mighty");
		Sorcerer on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Sorcerer *on_heap = new Sorcerer("Sorcerer", "The Mighty");
		Sorcerer *on_heap_cpy = new Sorcerer(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;
	
	std::cout << "On stack" << std::endl;
	{
		Victim on_stack("Victim");
		Victim on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Victim *on_heap = new Victim("Victim");
		Victim *on_heap_cpy = new Victim(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		Peon on_stack("Peon");
		Peon on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Peon *on_heap = new Peon("Peon");
		Peon *on_heap_cpy = new Peon(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

		std::cout << "On stack" << std::endl;
	{
		Villager on_stack("Villager");
		Villager on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Villager *on_heap = new Villager("Villager");
		Villager *on_heap_cpy = new Villager(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-------------MEMBER FUNCTIONS---------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;

	Sorcerer	sorcerer("Sorcerer", "The Magician");
	Victim		victim("Victim");
	Villager	villager("Villager");
	Peon		peon("Peon");

	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << sorcerer << std::endl;
	std::cout << victim << std::endl;
	std::cout << peon << std::endl;
	std::cout << villager << std::endl;
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	sorcerer.polymorph(victim);
	sorcerer.polymorph(peon);
	sorcerer.polymorph(villager);
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;
	
	return (0);
}