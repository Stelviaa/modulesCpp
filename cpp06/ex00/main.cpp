/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:24:30 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/04 18:58:18 by sforesti         ###   ########.fr       */
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
	ScalarConverter a;
	a.convert(av[1]);
}