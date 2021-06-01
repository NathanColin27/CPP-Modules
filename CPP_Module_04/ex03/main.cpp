/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:06:57 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/01 16:35:04 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"
#include "Character.class.hpp"
#include "AMateria.class.hpp"
#include "Cure.class.hpp"
#include "MateriaSource.class.hpp"

int main(void)
{

	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|---------------SUBJECT MAIN-----------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;

	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-----------OBJECT INSTANCIATION-------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	std::cout << "On stack" << std::endl;
	{
		Character on_stack("Char");
		Character on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Character *on_heap = new Character("Char");
		Character *on_heap_cpy = new Character(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		Ice on_stack;
		Ice on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Ice *on_heap = new Ice();
		Ice *on_heap_cpy = new Ice(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		Cure on_stack;
		Cure on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		Cure *on_heap = new Cure();
		Cure *on_heap_cpy = new Cure(*on_heap);

		delete on_heap;
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	std::cout << "On stack" << std::endl;
	{
		MateriaSource on_stack;
		MateriaSource on_stack_cpy(on_stack);
	}
	std::cout << std::endl << "On heap" << std::endl;
	{
		MateriaSource *on_heap = new MateriaSource();
		MateriaSource *on_heap_cpy = new MateriaSource(*on_heap);

		delete on_heap;		
		delete on_heap_cpy;
	}
	
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|-----------------MORE TESTS-----------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* bob = new Character("bob");
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	std::cout << std::endl << "-----------Creating unexisting materia------------"<< std::endl << std::endl;
	
	tmp = src->createMateria("not existing");
	me->equip(tmp);
	if (tmp == NULL)
		std::cout << "the material does not exist" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	
	std::cout << std::endl << "-----------Creating and equiping------------"<< std::endl << std::endl;
	
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	bob->use(0, *me);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	bob->use(1, *me);
	
	std::cout << std::endl << "-----------Trying unexisting indexes------------"<< std::endl << std::endl;
	
	bob->use(-1, *me);
	bob->use(4, *me);
	bob->use(19, *me);

	std::cout << std::endl << "-----------Trying empty indexes------------"<< std::endl << std::endl;

	bob->use(2, *me);
	bob->use(3, *me);
	
	std::cout << std::endl << "-----------Unequip------------"<< std::endl << std::endl;

	bob->use(1, *me);
	bob->unequip(1);
	bob->use(1, *me);
	
	std::cout << std::endl << "-----------Deleting------------"<< std::endl << std::endl;
		
	delete bob;
	delete me;
	delete src;
	delete tmp;

	return 0;
}