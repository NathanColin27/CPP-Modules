/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:13:09 by nathan            #+#    #+#             */
/*   Updated: 2021/04/26 00:04:49 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip> 
#include <string>
#include "contact.hpp"

class Phonebook
{
    private:
        int count;
        Contact contacts[8];
    
    public:
        Phonebook();

        void add_contact(void);
        void search_contact(void);
        void display_phonebook(void);
		void prompt_message(void);
		void print_row(std::string infos[]);
};

#endif