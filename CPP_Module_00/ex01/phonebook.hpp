#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
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
};


#endif