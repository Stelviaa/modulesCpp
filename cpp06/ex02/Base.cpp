/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:51:18 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/06 13:08:33 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#endif

Base::Base(){
	std::cout << "Base: Constructor called" << std::endl;
}

Base::~Base()
{
	std::cout << "Default Destructor called" << std::endl;
}

Base *generate(void){
	std::random_device rd;
    std::mt19937 gen(rd());
	Base *var = NULL;

	int min = 1;
    int max = 3;
    std::uniform_int_distribution<int> dis(min, max);
	
	int randomValue = dis(gen);
	if (randomValue == 1)
		var = new A();
	else if (randomValue == 2)
		var = new B();
	else if (randomValue == 3)
		var = new C();
	return (var);
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "Type of p is : A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type of p is : B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type of p is : C" << std::endl;
	else
		std::cout << "Unknown Type" << std::endl;
}

void identify(Base& p){
	Base *tmp = &p;
	identify(tmp);
}