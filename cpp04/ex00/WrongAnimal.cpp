/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:16:40 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/04 16:40:55 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal: Default constructor called" << std ::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal & cp)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = cp;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Default destructor called" << std::endl;
}
void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal class has not a specific song" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal & i)
{
	std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	this->_type = i.getType();
	return (*this);
}