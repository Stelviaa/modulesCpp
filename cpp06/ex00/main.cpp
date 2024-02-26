/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:24:30 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/26 11:54:45 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#include "ScalarConverter.hpp"
#endif
int main(int ac, char **av){
	std::cout.precision(310);
	if (ac != 2)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (1);
	}
	if (ScalarConverter::convert(av[1]) == "0")
	{
		std::cout << "Bad type. Please enter char, int, float, or double." << std::endl;
		return (1);
	}
	return (0);
}