/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:48:57 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/02 15:19:12 by sforesti         ###   ########.fr       */
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

Fixed::~Fixed ()
{
	std::cout << "Destructor called" << std::endl;
}

/*------------------operator------------------*/

	/*------assignation------*/
Fixed & Fixed::operator=(Fixed const &i)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = i.getRawBits();
	return (*this);
}

	/*------arithmetic------*/
Fixed Fixed::operator*(Fixed const & i) const
{
	return (Fixed(this->toFloat() * i.toFloat()));
}

Fixed Fixed::operator/(Fixed const & i) const
{
	return (Fixed(this->toFloat() / i.toFloat()));
}
Fixed Fixed::operator-(Fixed const & i) const
{
	return (Fixed(this->toFloat() - i.toFloat()));
}
Fixed Fixed::operator+(Fixed const & i) const
{
	return (Fixed(this->toFloat() + i.toFloat()));
}

	/*------Comparison------*/
bool Fixed::operator<(Fixed const & i) const
{
	return (this->getRawBits() < i.getRawBits());
}

bool Fixed::operator<=(Fixed const & i) const
{
	return (this->getRawBits() <= i.getRawBits());
}

bool Fixed::operator>(Fixed const & i) const
{
	return (this->getRawBits() > i.getRawBits());
}

bool Fixed::operator>=(Fixed const & i) const
{
	return (this->getRawBits() >= i.getRawBits());
}

bool Fixed::operator==(Fixed const & i) const
{
	return (this->getRawBits() == i.getRawBits());
}

bool Fixed::operator!=(Fixed const & i) const
{
	return (this->getRawBits() != i.getRawBits());
}

/*------ incrementation and decremantation ------*/


Fixed& Fixed::operator++(void) {
	this->_value++;
	return (*this);
}

Fixed& Fixed::operator--(void) {
	this->_value--;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->_value++;
	return (tmp);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->_value--;
	return (tmp);
}

std::ostream & operator<<(std::ostream & o, Fixed const & fix) {
	o << fix.toFloat();
	return (o);
}

const Fixed & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
const Fixed & Fixed::max(Fixed const & a, Fixed const & b)
{

	if (a > b)
		return (a);
	else
		return (b);
}
Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}