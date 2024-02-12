/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:46:16 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/12 18:29:31 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int exportValue(std::string value)
{   
    for (size_t i = 0; i < value.size(); i ++)
    {
        if (!isdigit(value[i]))
            throw std::runtime_error("\033[0;31mError\033[0m: Value is not int");
    }
    std::istringstream v(value.c_str());
    long int valueInt;
    v >> valueInt;
    if (valueInt > std::numeric_limits<int>::max())
        throw std::runtime_error("\033[0;31mError\033[0m: Too large number in the arguments");
    if (valueInt < 0)
        throw std::runtime_error("\033[0;31mError\033[0m: Negative number forbidden in the arguments");
    return (valueInt);
}

void parseArguments(char **str, int ac, std::vector<int> *data)
{
    int i = 1;
    while (i < ac)
    {
        std::string tmp(str[i]);
        data->push_back(exportValue(tmp));
        i++;
    }
}

void parseArguments(char **str, int ac, std::list<int> *data)
{
    int i = 1;
    while (i < ac)
    {
        std::string tmp(str[i]);
        data->push_back(exportValue(tmp));
        i++;
    }
}

void mainAlgo(std::vector<int> *data)
{
    std::vector<int>::iterator exportedValue;
    if (data->size() % 2)
    {
        exportedValue = (data->end() - 1);
        data->pop_back();
    }
    std::vector<std::vector<int>> parent;
    std::vector<int>::iterator nb = data->begin();
    for (size_t i = 0; i < data->size() / 2; i++)
    {
        std::vector<int> child;
        child.push_back(*nb);
        nb++;
        child.push_back(*nb);
        nb++;
        if (child[0] > child[1]){
            int tmp = child[0];
            child[0] = child[1];
            child[1] = tmp;
        }
        parent.push_back(child);
    }
    for (size_t i = 0; i < parent.size(); i++)
    {
        std::cout << parent[i][0] << " | " << parent[i][1] << std::endl;
    }
}

void displayContainer(std::vector<int> data)
{
    std::vector<int>::iterator it;
    it = data.begin();
    while (it != data.end())
        std::cout << *(it++) << " " << std::endl;
}


void displayContainer(std::list<int> data)
{
    std::list<int>::iterator it;
    it = data.begin();
    while (it != data.end())
        std::cout << *(it++) << " " << std::endl;
}