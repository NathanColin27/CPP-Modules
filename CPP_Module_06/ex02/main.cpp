/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:13:59 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/20 16:33:33 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.class.hpp"
#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"

Base *generate(void)
{
	int choice = rand() % 3;
	Base *base;
	base = nullptr;
	if (!choice)
		base = new A;
	else if (choice == 1)
		base = new B;
	else
		base = new C;
	return (base);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Child not recognized" << std::endl;
}

void identify_from_reference( Base & p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
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


		A a;
        B b;
        C c;
        identify_from_reference(a);
        identify_from_reference(b);
        identify_from_reference(c);
}