/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:51:49 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 12:53:03 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap: Default constructor called" << std ::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: Default constructor called" << std ::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

void ScavTrap::guardGate()
{
	std::cout << this->getName() << " goes into gate guard mode" << std::endl;
}
void ScavTrap::attack(const std::string & target)
{
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << "ScavTrap " << this->getName() << " attack " + target + ", causing " << this->getAttackDamage() << " points of Damage" << std::endl;
		this->_energyPoints -= 1;
	}
	else
		std::cout << "Impossible action, energy too low" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap & cp) : ClapTrap(cp){

	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & r)
{
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	this->_attackDamage = r.getAttackDamage();
	this->_energyPoints = r.getEnergyPoints();
	this->_hitPoints = r.getHitPoints();
	this->_name = r.getName();
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap: Default destructor called" << std::endl;
}