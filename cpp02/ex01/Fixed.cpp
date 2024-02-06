/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:48:57 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/02 13:42:06 by sforesti         ###   ########.fr       */
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

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value * (1 << this->_bits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_bits));
}

int Fixed::toInt(void) const
{
	return (this->_value / (1 << this->_bits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_bits));
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

std::ostream & operator<<(std::ostream & o, Fixed const & fix) {
	o << fix.toFloat();
	return (o);
}