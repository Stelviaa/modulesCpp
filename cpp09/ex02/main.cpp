/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:58:33 by sforesti          #+#    #+#             */
/*   Updated: 2024/03/15 16:55:58 by sforesti         ###   ########.fr       */
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
        std::vector<int> display;
        std::deque<int> l;
        timeval preTime;
        timeval afterTime;
        parseArguments(av, ac, &display);
        displayContainer(display, "Before: ");
        gettimeofday(&preTime, NULL);
        parseArguments(av, ac, &p);
        mainAlgo(&p);
        gettimeofday(&afterTime, NULL);
        displayContainer(p, "After : ");
        displayInformation(afterTime.tv_usec - preTime.tv_usec, p);
        gettimeofday(&preTime, NULL);
        parseArguments(av, ac, &l);
        mainAlgo(&l);
        gettimeofday(&afterTime, NULL);
        displayInformation(afterTime.tv_usec - preTime.tv_usec, l);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}