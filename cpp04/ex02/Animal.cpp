/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:16:40 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/04 17:26:15 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Default constructor called" << std ::endl;
}
Animal::Animal(Animal & cp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}
Animal::~Animal()
{
	std::cout << "Default destructor called" << std::endl;
}
void	Animal::makeSound() const
{
	std::cout << "Animal class has not a specific song" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

Animal & Animal::operator=(Animal & i)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = i.getType();
	return (*this);
}