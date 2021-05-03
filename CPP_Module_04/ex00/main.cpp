/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:03:03 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/03 14:54:00 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"
#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"

int main()
{
	Sorcerer test("SHAZAM", "magicien");
	std::cout << test << std::endl;
	Victim test1("Jonathan");
	std::cout << test1 << std::endl;
	
	test.polymorph(test1);
}