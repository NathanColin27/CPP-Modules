#include "phonebook.hpp"

Phonebook::Phonebook()
{
}

void Phonebook::add_contact(void)
{
    if(this->count == 8)
        std::cout << "Phonebook already full !" << std::endl;
    else
    {
        this->contacts[this->count - 1].enter_info();
        count++;
    }
}

void Phonebook::search_contact(void)
{
    int choice;
    bool correct = false;
    if(this->count == 0)
    {
        std::cout << "You need to had a contact first" << std::endl;
    }
    else 
    {
        this->display_phonebook();
    }
    std::cout << "Wich contact to you wish to display ?" << std::endl;
    while(!correct)
    {   
        std::cout << "Please enter the number of an existing contact" << std::endl;
        std::cin >> choice;
        if(choice > 0 && choice < this->count)
        {
            this->contacts[choice].display_contact();
            correct = true;
        }
    }
}

void Phonebook::display_phonebook(void)
{
    std::cout << "fonbouk";
}

