/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:13:59 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/07 23:56:10 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Base.class.hpp"
#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"

Base *generate(void)
{
	int choice = rand() % 3;
	Base *base;
	base = NULL;
	if (!choice)
	{
		base = new A;
		std::cout << "A generated" << std::endl;
	}
	else if (choice == 1)
	{
		base = new B;
		std::cout << "B generated" << std::endl;
	}
	else
	{
		base = new C;
		std::cout << "C generated" << std::endl;
	}
	return (base);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Child not recognized" << std::endl;
}

void identify_from_reference(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Child not recognized" << std::endl;
}

int main(void)
{
	Base *a = new A();
	Base *b = new B();
	Base *c = new C();
	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);
	delete a;
	delete b;
	delete c;

	A d;
	B e;
	C f;
	identify_from_reference(d);
	identify_from_reference(e);
	identify_from_reference(f);

	for (int i = 0; i < 5; i++)
	{
		Base *test = generate();
		identify_from_reference(*test);
		identify_from_pointer(test);
		delete test;
	}
}