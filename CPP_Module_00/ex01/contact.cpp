#include "contact.hpp"

Contact::Contact()
{

}


void Contact::enter_info()
{
    std::cout << "Please enter the following contact info:" << std::endl;
    std::cout << "\n First Name:" << std::endl;
    std::getline(std::cin, this->first_name);
    std::cout << "\n Last name:" << std::endl;
    std::getline(std::cin, this->last_name);
    std::cout << "\n Nickname:" << std::endl;
    std::getline(std::cin, this->nickname);
    std::cout << "\n Login:" << std::endl;
    std::getline(std::cin, this->login);
    std::cout << "\n Postal address:" << std::endl;
    std::getline(std::cin, this->address);
    std::cout << "\n Email:" << std::endl;
    std::getline(std::cin, this->email);
    std::cout << "\n Phone number:" << std::endl;
    std::getline(std::cin, this->phone);
    std::cout << "\n Birthday:" << std::endl;
    std::getline(std::cin, this->birthday);
    std::cout << "\n Favourite meal:" << std::endl;
    std::getline(std::cin, this->meal);
    std::cout << "\n Underwear color:" << std::endl;
    std::getline(std::cin, this->underwear);
    std::cout << "\n Darkest secret:" << std::endl;
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