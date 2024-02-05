/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:24:30 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/05 23:20:10 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#include "ScalarConverter.hpp"
#endif
int main(int ac, char **av){
	if (ac != 2)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (1);
	}
	try{
		if (ScalarConverter::convert(av[1]) == "b")
		{
			std::cout << "Bad type. Please enter char, int, float, or double." << std::endl;
			return (1);
		}
	}
	catch (std::out_of_range & e)
	{
			std::cout << "Please note that the input value is out of range" << std::endl;
	}
}