/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:11:40 by sforesti          #+#    #+#             */
/*   Updated: 2023/09/21 12:03:59 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
    
    return ;
}

Contact::~Contact(){
    
    return ;
}

void Contact::setLastName(std::string s)
{
    this->_LastName = s;
}

void Contact::setFirstName(std::string s)
{
    this->_FirstName = s;
}
void Contact::setNickName(std::string s)
{
    this->_NickName = s;
}
void Contact::setNumber(std::string s)
{
    this->_Number = s;
}

void Contact::setDarkSecret(std::string s)
{
    this->_DarkSecret = s;
}

std::string Contact::getLastName() const
{

    return (this->_LastName);
}

std::string Contact::getFirstName() const
{

    return (this->_FirstName);
}

std::string Contact::getNickName() const
{

    return (this->_NickName);
}

std::string Contact::getNumber() const
{

    return (this->_Number);
}

std::string Contact::getDarkSecret() const
{

    return (this->_DarkSecret);
}