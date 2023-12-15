/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:34:15 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 11:50:21 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat: Default constructor called" << std ::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat & cp) : Animal(cp)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat & i)
{
	this->setType(i.getType());
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat: Miaou" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat: Default destructor called" << std::endl;
}