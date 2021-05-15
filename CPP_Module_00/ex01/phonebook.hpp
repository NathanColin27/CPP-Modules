/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 22:13:09 by nathan            #+#    #+#             */
/*   Updated: 2021/05/15 17:13:46 by ncolin           ###   ########.fr       */
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
        int _count;
        Contact _contacts[8];
    
    public:
        Phonebook();
		~Phonebook();

		int	 get_count(void);
        void add_contact(int num);
        void search_contact(void);
        void display_phonebook(void);
		void prompt_message(void);
		void print_row(std::string infos[]);
};

#endif