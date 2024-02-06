/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:07:34 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/06 12:56:04 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#include "Base.hpp"
#include "B.hpp"
#endif

B::B(){
	std::cout << "B: Constructor called" << std::endl;
}

B::~B(){
	std::cout << "B: Destructor called" << std::endl;
}