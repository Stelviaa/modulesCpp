/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:45:22 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/30 11:39:21 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	return ;
}
void	HumanA::setName(std::string name)
{
	this->_name = name;
}

std::string HumanA::getName(void) const
{
	return (this->_name);
}

void	HumanA::setWeapon(Weapon w)
{
	this->_weapon = w;
}

void	HumanA::attack(void)
{
	if (!this->_weapon.getType().size())
		std::cout << this->_name << " has no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;	
}

Weapon	HumanA::getWeapon(void) const
{
	return (this->_weapon);
}

HumanA::~HumanA()
{
	return ;
}