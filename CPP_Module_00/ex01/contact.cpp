/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:12:56 by nathan            #+#    #+#             */
/*   Updated: 2021/04/25 23:19:28 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}


void Contact::enter_info()
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
}

void Contact::display_contact(void)
{
    std::cout << "\n First Name:" + this->first_name << std::endl;
    std::cout << "\n Last name:" << std::endl;
    std::cout << "\n Nickname:" << std::endl;
    std::cout << "\n Login:" << std::endl;
    std::cout << "\n Postal address:" << std::endl;
    std::cout << "\n Email:" << std::endl;
    std::cout << "\n Phone number:" << std::endl;
    std::cout << "\n Birthday:" << std::endl;
    std::cout << "\n Favourite meal:" << std::endl;
    std::cout << "\n Underwear color:" << std::endl;
    std::cout << "\n Darkest secret:" << std::endl;
}