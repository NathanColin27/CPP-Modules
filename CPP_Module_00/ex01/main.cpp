/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:13:02 by nathan            #+#    #+#             */
/*   Updated: 2021/04/25 23:06:58 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	Phonebook phonebook;
	bool done = false;
	std::string input;

	std::cout << "Welcome to the Crappy Phonebook" << std::endl;
	while (!done)
	{
		phonebook.prompt_message();
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
		{
			std::cout << "Thanks for using the crappy phonebook, bye";
			done = true;
		}
		else
		{
			std::cout << "I think you misunderstood.." << std::endl;
		}
	}
	return (0);
}