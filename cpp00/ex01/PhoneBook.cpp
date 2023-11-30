/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:15:43 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/24 18:55:22 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook(){

    _NumberContact = -1;
    return ;
}

PhoneBook::~PhoneBook(){

    return ;
}

void PhoneBook::setNumberContact()
{
    if (this->_NumberContact < 7)
        this->_NumberContact ++;
}

int PhoneBook::getNumberContact() const{

    return (this->_NumberContact);
}

void PhoneBook::setContacts(std::string firstName, std::string lastName, std::string nickName, std::string n, std::string darkSecret, int i)
{
    this->_Contacts[i].setLastName(lastName);
    this->_Contacts[i].setFirstName(firstName);
    this->_Contacts[i].setNickName(nickName);
    this->_Contacts[i].setNumber(n);
    this->_Contacts[i].setDarkSecret(darkSecret);
}

void PhoneBook::setContactsToAdd(std::string firstName, std::string lastName, std::string nickName, int i)
{
    this->_ContactsToAdd[i].setFirstName(this->_format(firstName, 0));
    this->_ContactsToAdd[i].setLastName(this->_format(lastName, 0));
    this->_ContactsToAdd[i].setNickName(this->_format(nickName, 1));
    this->setNumberContact();
}

Contact PhoneBook::getContactsToAdd(int i) const
{
    return (this->_ContactsToAdd[i]);
}

Contact PhoneBook::getContacts(int i) const
{
    return (this->_Contacts[i]);
}

void PhoneBook::display_line()
{
    std::string i;
    int index;
    
    std::cout << "Enter index of contact: ";
    if (std::getline(std::cin, i).eof() || i.size() == 0)
        return ;
    if (i.size() > 1 || (i.at(0) > '7' || i.at(0) < '0'))
    {
        std::cout << "Wrong type" << std::endl;
        return ;
    }
    std::istringstream iss(i);
    iss >> index;
    if (index > this->getNumberContact())
    {
        std::cout << "Unknown contact" << std::endl;
        return ;
    }
    std::cout << "FirstName :" << this->getContacts(index).getFirstName() << std::endl;
    std::cout << "LastName :" << this->getContacts(index).getLastName() << std::endl;
    std::cout << "NickName :" << this->getContacts(index).getNickName() << std::endl;
    std::cout << "Number :" << this->getContacts(index).getNumber() << std::endl;
    std::cout << "DarkSecret :" << this->getContacts(index).getDarkSecret() << std::endl;
}

void PhoneBook::display_tab(int index)
{
    std::string i;
    std::stringstream ss;
    
    ss << index;
    i = ss.str();
    std::cout << this->_format(i, 0);
    std::cout << this->getContactsToAdd(index).getLastName();
    std::cout << this->getContactsToAdd(index).getFirstName();
    std::cout << this->getContactsToAdd(index).getNickName();
    std::cout << std::endl;
    index ++;
}

std::string PhoneBook::_format(std::string s, int i)
{
    long diff;

    diff = 10 - s.size();
    if (s.size() > 10)
    {
        s.resize(9);
        s.append(1, '.');
    }
    if (s.size() < 10)
        s.insert(0, diff, ' ');
    s.insert(0, "|");
    if (i == 1)
        s.append("|");
    return (s);
}