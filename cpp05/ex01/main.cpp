/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2024/01/31 17:06:06 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

int main(void)
{
    Bureaucrat john;
	Bureaucrat johnny("johnny", 150);
	Form		formJohnny("formJohnny", 45, 33);
	Form		formJohn("formJohn", 45, 68);
	std::cout << formJohnny << std::endl;
	std::cout << formJohn << std::endl;
	formJohnny.beSigned(johnny);
	formJohn.beSigned(john);
	std::cout << formJohnny << std::endl;
	std::cout << formJohn << std::endl;
	john.decrementGrade();
	std::cout << john;
	for (int i = 0; i < 150; i ++)
		john.incrementGrade();
	std::cout << john;
	john.decrementGrade();
	std::cout << john;
}