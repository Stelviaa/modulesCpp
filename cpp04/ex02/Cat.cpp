/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:34:15 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 11:49:59 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat: Default constructor called" << std ::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat & cp) : Animal(cp)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat: Miaou" << std::endl;
}

Cat & Cat::operator=(Cat & i)
{
	this->setType(i.getType());
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat: Default destructor called" << std::endl;
	delete this->_brain;
}