/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:32 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/28 18:21:55 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->_ptrFunc[0] = &Harl::_debug;
	this->_ptrFunc[1] = &Harl::_info;
	this->_ptrFunc[2] = &Harl::_warning;
	this->_ptrFunc[3] = &Harl::_error;
	this->_nameFunc[0] = "DEBUG";
	this->_nameFunc[1] = "INFO";
	this->_nameFunc[2] = "WARNING";
	this->_nameFunc[3] = "ERROR";
	return ;
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
}

void Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::_warning (void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int i;
	for (i = 0; i < 4 ; i++)
		if (this->_nameFunc[i] == level)
			(void)(this->*_ptrFunc[i])();
}

Harl::~Harl()
{
	return ;
}