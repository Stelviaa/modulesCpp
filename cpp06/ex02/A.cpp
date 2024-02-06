/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:07:34 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/06 12:56:10 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#include "Base.hpp"
#include "A.hpp"
#endif

A::A(){
	std::cout << "A: Constructor called" << std::endl;
}

A::~A(){
	std::cout << "A: Destructor called" << std::endl;
}