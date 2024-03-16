/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:45:40 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/13 15:29:03 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <iostream>
#include <sstream>
#include <limits>
#include <deque>
#include <cctype>
#include <sys/time.h>
#include <iomanip>

void parseArguments(char **str, int ac,std::deque<int> *list);
void parseArguments(char **str, int ac,std::vector<int> *vector);
void displayContainer(std::vector<int> data, std::string s);
void displayContainer(std::deque<int> data, std::string s);
void mainAlgo(std::vector<int> *data);
void mainAlgo(std::deque<int> *data);
void displayInformation(suseconds_t time, std::deque<int> p);
void displayInformation(suseconds_t time, std::vector<int> p);
#endif