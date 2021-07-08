#include "Contact.class.hpp"
#include <iostream>

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    if (first_name.empty())
        this->first_name = first_name;
    if (last_name.empty())
        this->last_name = last_name;
    if (nickname.empty())
        this->nickname = nickname;
    if (phone_number.empty())
        this->phone_number = phone_number;
    if (darkest_secret.empty())
        this->darkest_secret = darkest_secret;
}

Contact::~Contact()
{
    std::cout << "this contact has been deleted!" << std::endl;
}