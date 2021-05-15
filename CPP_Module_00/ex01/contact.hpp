/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:12:59 by nathan            #+#    #+#             */
/*   Updated: 2021/05/15 17:15:20 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
    public:
        Contact(int num);
		Contact();
		~Contact();
		int			index;
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

        void enter_info(int num);
		void contact_summary(void);
        void display_contact(void);
};



#endif