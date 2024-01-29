/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2024/01/29 16:11:03 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat john;
	Bureaucrat johnny("johnny", 151);

	std::cout << johnny << std::endl;
	john.decrementGrade();
	std::cout << john;
	for (int i = 0; i < 150; i ++)
		john.incrementGrade();
	std::cout << john;
	john.decrementGrade();
	std::cout << john;
}