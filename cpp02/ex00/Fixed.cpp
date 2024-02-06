/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:48:57 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/02 13:37:12 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & cp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{	
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed & Fixed::operator=(Fixed const &i)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = i.getRawBits();
	return (*this);
}

Fixed::~Fixed ()
{
	std::cout << "Destructor called" << std::endl;
}