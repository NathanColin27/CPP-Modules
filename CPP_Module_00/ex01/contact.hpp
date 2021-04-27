/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:12:59 by nathan            #+#    #+#             */
/*   Updated: 2021/04/25 23:11:06 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>

class Contact
{
	
    public:
        Contact();
		~Contact();
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string address;
        std::string email;
        std::string phone;
        std::string birthday;
        std::string meal;
        std::string underwear;
        std::string secret;

        void enter_info(void);
        void display_contact(void);
};



#endif