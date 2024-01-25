/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:58:33 by sforesti          #+#    #+#             */
/*   Updated: 2024/01/25 15:57:08 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("no name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)  
{
	std::cout << "Default constructor called" << std ::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)  
{
	std::cout << "Default constructor called" << std ::endl;
}

ClapTrap::ClapTrap(ClapTrap & cp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}
std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

void ClapTrap::setHitPoints(unsigned int hp)
{
	this->_hitPoints = hp;
}
unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}
void ClapTrap::setEnergyPoints(unsigned int ep)
{
	this->_energyPoints = ep;
}
unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}
void ClapTrap::setAttackDamage(unsigned int ad)
{
	this->_attackDamage = ad;
}
unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() >= 1)
	{
		std::cout << "ClapTrap " << this->getName() << " attack " + target + ", causing " << this->getAttackDamage() << " points of Damage" << std::endl;
		this->_energyPoints -= 1;
	}
	else
		std::cout << "Impossible action, energy too low" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 2147483647 || amount < 1)
	{
		std::cout << "Impossible action, value not accepted for this action" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " take " << amount << " points of Damage" << std::endl;
	if (this->getHitPoints() > amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
	return ;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount <= 2147483647 || amount < 1)
	{
		std::cout << "ClapTrap " << this->getName() << " recovers " << amount << " hit points and " << amount << " energy points" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints += amount - 1;
	}
	else
		std::cout << "Impossible action, value not accepted for this action" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & r)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_attackDamage = r.getAttackDamage();
	this->_energyPoints = r.getEnergyPoints();
	this->_hitPoints = r.getHitPoints();
	this->_name = r.getName();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}