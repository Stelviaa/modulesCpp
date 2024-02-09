/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:46:13 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/09 14:38:46 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_CPP
#define SPAN_CPP
#include "Span.hpp"
#endif

int main ()
{
    try {
        Span list(100000u);

        list.addNumber(100000u);
        list.addNumber(1u);
        list.fillSpan(10);
        list.printContent();
        std::cout << list.longestSpan() << std::endl;
        std::cout << list.shortestSpan() << std::endl;

        /*Subject Main*/
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}