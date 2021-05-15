/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:13:06 by nathan            #+#    #+#             */
/*   Updated: 2021/05/15 17:26:07 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	_count = 0;
}

Phonebook::~Phonebook()
{
}

int	 Phonebook::get_count(void)
{
	return this->_count;
}

void Phonebook::add_contact(int num)
{
	if (_count == 8)
		std::cout << "Phonebook already full !" << std::endl;
	else
	{
		_contacts[_count].enter_info(num);
		_count++;
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
	if (this->_count == 0)
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
			if (choice > 0 && choice <= this->_count)
			{
				this->_contacts[choice - 1].display_contact();
				correct = true;
			}
		}
	}
}


void Phonebook::display_phonebook(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->_count; i++)
		this->_contacts[i].contact_summary();
	std::cout << "|-------------------------------------------|" << std::endl;
}
