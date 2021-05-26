/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 21:00:48 by nathan            #+#    #+#             */
/*   Updated: 2021/05/26 15:57:32 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony Rincevent = Pony("Rincevent");
	Rincevent.say_name();
	Rincevent.set_age(4);
	Rincevent.get_age();
	Rincevent.sing("Wild horses\nCouldn't drag me away\nWild, wild horses\nCouldn't drag me away\n");
}

void ponyOnTheHeap()
{
	Pony *No_name = new Pony();
	No_name->say_name();
	No_name->set_age(2);
	No_name->get_age();
	No_name->sing("I've been through the desert\nOn a horse with no name\nIt felt good to be out of the rain\nIn the desert, you can remember your name\nCause there ain't no one for to give you no pain");
	delete(No_name);
}

int main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}