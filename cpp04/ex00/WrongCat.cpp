/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:34:15 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/04 16:49:09 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat: Default constructor called" << std ::endl;
}

WrongCat::WrongCat(WrongCat & cp) : WrongAnimal(cp)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat: Miaou" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat & i)
{
	this->setType(i.getType());
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat: Default destructor called" << std::endl;
}