/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:13:06 by nathan            #+#    #+#             */
/*   Updated: 2021/05/26 14:37:29 by ncolin           ###   ########.fr       */
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

int get_int(int min, int max, std::string prompt)
{
	int ret_integer;
	std::string str_number;

	while(true) {

		std::cout << prompt;
		std::getline(std::cin, str_number);
		std::stringstream convert(str_number);

		if(convert >> ret_integer && !(convert >> str_number) && ret_integer >= min && ret_integer <=max)
			return ret_integer;

		std::cin.clear();
		std::cerr << "Input must be >= " << min << " and <= " << max << ". Please try again.\n";
	}
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

		choice = get_int(1, this->_count, "Which contact do you wish to display ?\n");
		
		if (choice < 1 || choice > this->_count)
		{
			std::cout << "This contact does not exist" << std::endl;
		}
		else
		{
			this->_contacts[choice - 1].display_contact();
			correct = true;
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
