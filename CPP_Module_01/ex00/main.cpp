/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 21:00:48 by nathan            #+#    #+#             */
/*   Updated: 2021/04/27 22:23:20 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main(void)
{
	Pony Rincevent = Pony("Rincevent");
	Pony *No_name = new Pony();
	Rincevent.say_name();
	Rincevent.set_age(4);
	Rincevent.get_age();
	Rincevent.sing("Wild horses\nCouldn't drag me away\nWild, wild horses\nCouldn't drag me away\n");
	No_name->say_name();
	No_name->sing("I've been through the desert\nOn a horse with no name\nIt felt good to be out of the rain\nIn the desert, you can remember your name\nCause there ain't no one for to give you no pain");
	delete(No_name);
}