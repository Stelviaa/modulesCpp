/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:58:33 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/12 18:21:20 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av)
{
    if (ac < 2){
        std::cerr << "Bad number of arguments" << std::endl;
        return (1);
    }
    try {
        std::vector<int> p;
        std::list<int> l;
        parseArguments(av, ac, &p);
        parseArguments(av, ac, &l);
        mainAlgo(&p);
        //displayContainer(p);
        //displayContainer(l);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}