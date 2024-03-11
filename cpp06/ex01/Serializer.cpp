/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:10:03 by sforesti          #+#    #+#             */
/*   Updated: 2024/03/11 17:24:30 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#include "Serializer.hpp"
#endif

Serializer::Serializer(){
	std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer(Serializer & cp){
	std::cout << "Copy constructor called" << std::endl;
	(void) cp;
}

Serializer::~Serializer(){

	std::cout << "Default destructor called" << std::endl;
}

uintptr_t Serializer::serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(reinterpret_cast<void*>(ptr)));
}

Data *Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

Serializer & Serializer::operator=(Serializer & cp){
	(void) cp;
	return (*this);
}