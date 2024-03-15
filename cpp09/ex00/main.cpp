/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:02:34 by sforesti          #+#    #+#             */
/*   Updated: 2024/03/15 16:11:39 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN
#define MAIN
#include "BitcoinExchange.hpp"
#endif

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "bad number of arguments" << std::endl;
        return (1);
    }
    try {
        std::string s(av[1]);
        compare(s);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}