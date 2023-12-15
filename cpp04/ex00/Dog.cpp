/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:34:15 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 11:50:26 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog: Default constructor called" << std ::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog & cp) : Animal(cp)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->_type = "Dog";
}

Dog & Dog::operator=(Dog & i)
{
	this->setType(i.getType());
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog: Waf" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog: Default destructor called" << std::endl;
}