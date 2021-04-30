/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:37:21 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/30 12:51:12 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"
#include "NinjaTrap.class.hpp"

int main(void)
{
	{
		ScavTrap sc4v("sc4v");
		FragTrap fr4g("fr4g");
		ClapTrap cl4p("cl4p");
		NinjaTrap n1nj4("n1nj4");
		NinjaTrap n1nj4_friend("n1nj4_friend");

		std::cout << std::endl;  
		n1nj4.ninjaShoebox(n1nj4_friend);
		std::cout << std::endl;  
		n1nj4.ninjaShoebox(cl4p);
		std::cout << std::endl;
		n1nj4.ninjaShoebox(fr4g);
		std::cout << std::endl;
		n1nj4.ninjaShoebox(sc4v);
	}
	return (0);
}