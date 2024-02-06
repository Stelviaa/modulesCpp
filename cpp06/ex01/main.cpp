/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:15:55 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/06 11:42:48 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#include "Serializer.hpp"
#endif

int main(){
	Data a;
	uintptr_t tmp;
	a.a = 1;
	a.b = 2;
	std::cout << &a << std::endl;
	tmp = Serializer::serialize(&a);
	std::cout << &tmp << std::endl;
	Data *b = Serializer::deserialize(tmp);
	std::cout << b <<  " | " << b->a <<  " | " << b->b << std::endl;
}