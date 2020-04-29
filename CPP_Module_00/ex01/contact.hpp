#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>

class Contact
{
    public:

        Contact();
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