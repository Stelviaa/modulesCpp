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
        std::deque<int> l;
        parseArguments(av, ac, &p);
        parseArguments(av, ac, &l);
        displayContainer(p, "Before: ");
        std::chrono::time_point<std::chrono::high_resolution_clock> startTime = std::chrono::high_resolution_clock::now();
        mainAlgo(&p);
        std::chrono::time_point<std::chrono::high_resolution_clock> endTime = std::chrono::high_resolution_clock::now();
        std::chrono::time_point<std::chrono::high_resolution_clock> startTimel = std::chrono::high_resolution_clock::now();
        mainAlgo(&l);
        std::chrono::time_point<std::chrono::high_resolution_clock> endTimel = std::chrono::high_resolution_clock::now();
        displayContainer(p, "After : ");
        displayInformation(std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime), p);
        displayInformation(std::chrono::duration_cast<std::chrono::microseconds>(endTimel - startTimel), l);  
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}