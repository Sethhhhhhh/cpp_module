#include "Contact.hpp"

Contact::Contact(void)
{
    this->b_setup = false;
    return ;
}

Contact::~Contact(void)
{
    return ;
}

bool    Contact::is_setup(void)
{
    return (this->b_setup);
}

void    Contact::setup(size_t index)
{
    std::string input;

    this->b_setup = true;
    this->index = index + 1;

    std::cout << "first name: ";
    std::getline(std::cin, input);
    this->first_name = input;

    std::cout << "last name: ";
    std::getline(std::cin, input);
    this->last_name = input;

    std::cout << "nickname: ";
    std::getline(std::cin, input);
    this->nickname = input;

    std::cout << "phone number: ";
    std::getline(std::cin, input);
    this->phone_number = input;

    std::cout << "darkest secret: ";
    std::getline(std::cin, input);
    this->darkest_secret = input;

    std::cout << "Contact has been added with success!" << std::endl;
}

void    Contact::show_column(void)
{
    std::cout << std::setw(10) << this->index << "|";
	std::cout << std::setw(10) << this->first_name << "|";
    std::cout << std::setw(10) << this->last_name << "|";
    std::cout << std::setw(10) << this->nickname << "|";
}

void    Contact::show(void)
{
    std::cout << "first name: " << this->first_name << std::endl;
    std::cout << "last name: " << this->last_name << std::endl;
    std::cout << "nickname: " << this->nickname << std::endl;
    std::cout << "phone number: " << this->phone_number << std::endl;
    std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}