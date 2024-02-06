/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:07:34 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/06 12:55:50 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#include "Base.hpp"
#include "C.hpp"
#endif

C::C(){
	std::cout << "C: Constructor called" << std::endl;
}

C::~C(){
	std::cout << "C: Destructor called" << std::endl;
}