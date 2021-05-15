/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:12:56 by nathan            #+#    #+#             */
/*   Updated: 2021/05/15 17:31:46 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip>

Contact::Contact(int num)
{
	this->index = num;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}


void Contact::enter_info(int num)
{
    std::cout << "Please enter the following contact info:" << std::endl;
    std::cout << "\nFirst Name:" << std::endl;
    std::getline(std::cin, this->first_name);
    std::cout << "\nLast name:" << std::endl;
    std::getline(std::cin, this->last_name);
    std::cout << "\nNickname:" << std::endl;
    std::getline(std::cin, this->nickname);
    std::cout << "\nLogin:" << std::endl;
    std::getline(std::cin, this->login);
    std::cout << "\nPostal address:" << std::endl;
    std::getline(std::cin, this->address);
    std::cout << "\nEmail:" << std::endl;
    std::getline(std::cin, this->email);
    std::cout << "\nPhone number:" << std::endl;
    std::getline(std::cin, this->phone);
    std::cout << "\nBirthday:" << std::endl;
    std::getline(std::cin, this->birthday);
    std::cout << "\nFavourite meal:" << std::endl;
    std::getline(std::cin, this->meal);
    std::cout << "\nUnderwear color:" << std::endl;
    std::getline(std::cin, this->underwear);
    std::cout << "\nDarkest secret:" << std::endl;
    std::getline(std::cin, this->secret);
	this->index = num;
}

void Contact::contact_summary(void)
{
	std::cout << "|" << std::setw(10) << this->index << "|";
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->nickname << "|";
	std::cout << std::endl;
}


void Contact::display_contact(void)
{
    std::cout << "\n First Name:	" + this->first_name << std::endl;
    std::cout << "\n Last name:	" + this->last_name << std::endl;
    std::cout << "\n Nickname:	" + this->nickname << std::endl;
    std::cout << "\n Login:	" + this->login << std::endl;
    std::cout << "\n Postal address:	" + this->address  << std::endl;
    std::cout << "\n Email	:" + this->email << std::endl;
    std::cout << "\n Phone number:	" + this->phone << std::endl;
    std::cout << "\n Birthday:	" + this->birthday << std::endl;
    std::cout << "\n Favourite meal:	" + this->meal << std::endl;
    std::cout << "\n Underwear color:	" + this->underwear << std::endl;
    std::cout << "\n Darkest secret:	" + this->secret << std::endl;
}