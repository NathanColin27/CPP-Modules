#include "phonebook.hpp"

int main(int argc, char *argv[])
{
    Phonebook phonebook;
    bool done = false;
    std::string input;

    std::cout << "Hello, welcome to the crappy phonebook, please choose amongst one of these options : \
                        \n[=]ADD \
                        \n[=]SEARCH \
                        \n[=]EXIT"
              << std::endl;
    while (!done)
    {

        std::getline(std::cin, input);
        if (input == "ADD")
        {
            phonebook.add_contact();
        }
        else if (input == "SEARCH")
        {
            phonebook.search_contact();
        }
        else if (input == "EXIT")
        {
            std::cout << "Thanks for using the crappy phonebook, bye";
            done = true;
        }
        else
        {
            std::cout << "Please choose amongst one of these options : \
                        \n[=]ADD \
                        \n[=]SEARCH \
                        \n[=]EXIT"
                      << std::endl;
        }
    }
    return (0);
}