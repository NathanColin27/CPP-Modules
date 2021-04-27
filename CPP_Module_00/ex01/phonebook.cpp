/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:13:06 by nathan            #+#    #+#             */
/*   Updated: 2021/04/26 00:04:40 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->count = 0;
}

void Phonebook::add_contact(void)
{
	if (this->count == 8)
		std::cout << "Phonebook already full !" << std::endl;
	else
	{
		this->contacts[this->count].enter_info();
		count++;
	}
}

void Phonebook::prompt_message(void)
{
	std::cout << "Please choose amongst one of these options : \
				\n[ADD], [SEARCH] or [EXIT]"
			  << std::endl;
}

void Phonebook::search_contact(void)
{
	int choice;
	bool correct = false;
	if (this->count == 0)
	{
		std::cout << "You need to had a contact first" << std::endl;
	}
	else
	{
		this->display_phonebook();
		std::cout << "Which contact to you wish to display ?" << std::endl;
		while (!correct)
		{
			std::cout << "Please enter the number of an existing contact" << std::endl;
			std::cin >> choice;
			if (choice > 0 && choice < this->count)
			{
				this->contacts[choice].display_contact();
				correct = true;
			}
		}
	}
}

void Phonebook::print_row(std::string infos[])
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << "|";
		std::cout << infos[i];
	}
	std::cout << "|" << std::endl;
}

void Phonebook::display_phonebook(void)
{
	std::string header[4] = {"index", "first name" , "last_name", "nickname"};
	std::cout << std::setfill('-') << std::setw(56);
	this->print_row(header);
}
