/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:38:44 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 12:54:54 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap: Default constructor called" << std ::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: Default constructor called" << std ::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

void FragTrap::highFivesGuys()
{
	std::cout << this->getName() << " does a highFives" << std::endl;
}
void FragTrap::attack(const std::string & target)
{
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << "FragTrap " << this->getName() << " attack " + target + ", causing " << this->getAttackDamage() << " points of Damage" << std::endl;
		this->_energyPoints -= 1;
	}
	else
		std::cout << "Impossible action, energy too low" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & r)
{
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	this->_attackDamage = r.getAttackDamage();
	this->_energyPoints = r.getEnergyPoints();
	this->_hitPoints = r.getHitPoints();
	this->_name = r.getName();
	return (*this);
}

FragTrap::FragTrap(FragTrap & cp) : ClapTrap(cp){

	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap: Default destructor called" << std::endl;
}