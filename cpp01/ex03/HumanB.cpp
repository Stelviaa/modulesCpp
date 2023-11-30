/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:54:18 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/30 11:50:17 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}
void	HumanB::setName(std::string name)
{
	this->_name = name;
}

std::string HumanB::getName(void) const
{
	return (this->_name);
}

void	HumanB::setWeapon(Weapon &w)
{
	this->_weapon = &w;
}

Weapon HumanB::getWeapon(void) const
{
	return (this->_weapon->getType());
}

void	HumanB::attack(void)
{
	if (!this->_weapon || !this->_weapon->getType().size())
		std::cout << this->_name << " has no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;	
}

HumanB::~HumanB()
{
	return ;
}