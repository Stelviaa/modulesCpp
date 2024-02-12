/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:45:40 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/12 18:21:10 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <iostream>
#include <sstream>
#include <limits>
#include <list>
#include <cctype>

void parseArguments(char **str, int ac,std::list<int> *list);
void parseArguments(char **str, int ac,std::vector<int> *vector);
void displayContainer(std::vector<int> data);
void displayContainer(std::list<int> data);
void mainAlgo(std::vector<int> *data);

#endif