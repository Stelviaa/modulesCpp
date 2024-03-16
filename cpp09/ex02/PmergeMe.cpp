/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:46:16 by sforesti          #+#    #+#             */
/*   Updated: 2024/03/15 16:59:54 by sforesti         ###   ########.fr       */
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

void parseArguments(char **str, int ac, std::deque<int> *data)
{
    int i = 1;
    while (i < ac)
    {
        std::string tmp(str[i]);
        data->push_back(exportValue(tmp));
        i++;
    }
}

void recursiveSort(std::vector<std::vector<int> >& parent, size_t startIndex) {
    if (startIndex >= parent.size() - 1)
        return ;
    size_t minIndex = startIndex;
    for (size_t i = startIndex + 1; i < parent.size(); ++i) {
        if (parent[i][1] < parent[minIndex][1]) {
            minIndex = i;
        }
    }
    if (minIndex != startIndex) {
        std::swap(parent[minIndex], parent[startIndex]);
    }
    recursiveSort(parent, startIndex + 1);
}

void recursiveSort(std::deque<std::deque<int> >& parent, size_t startIndex) {
    if (startIndex >= parent.size() - 1)
        return ;
    size_t minIndex = startIndex;
    for (size_t i = startIndex + 1; i < parent.size(); ++i) {
        if (parent[i][1] < parent[minIndex][1]) {
            minIndex = i;
        }
    }
    if (minIndex != startIndex) {
        std::swap(parent[minIndex], parent[startIndex]);
    }
    recursiveSort(parent, startIndex + 1);
}

void displayContainer(std::vector<int> data, std::string s)
{
    std::vector<int>::iterator it;
    it = data.begin();
    std::cout << s;
    while (it != data.end())
        std::cout << *(it++) << " ";
    std::cout << std::endl;
}


void displayContainer(std::deque<int> data, std::string s)
{
    std::deque<int>::iterator it;
    it = data.begin();
    std::cout << s;
    while (it != data.end())
        std::cout << *(it++) << " ";
    std::cout << std::endl;
}

void addElement(std::vector<int> *data, std::vector<int> *pend)
{
    size_t start = 0;
    size_t end = data->size() - 1;
    size_t i = (start + end) / 2;
    if ((*data)[0] > pend->back())
    {
        data->insert(data->begin(), pend->back());
        pend->pop_back();
        return ;
    }
    else if (data->back() < pend->back())
    {
        data->insert(data->end() - 1, pend->back());
        pend->pop_back();
        return ;
    }
    while (start <= end)
    {
        if ((*data)[i] < pend->back())
            start = i + 1;
        else if ((*data)[i] > pend->back())
            end = i - 1;
        else
            break;
        i = (start + end) / 2;
    }
    data->insert(data->begin() + i + 1, pend->back());
    pend->pop_back();
}

void addElement(std::deque<int> *data, std::deque<int> *pend)
{
    size_t start = 0;
    size_t end = data->size() - 1;
    size_t i = (start + end) / 2;
    if ((*data)[0] > pend->back())
    {
        data->insert(data->begin(), pend->back());
        pend->pop_back();
        return ;
    }
    else if (data->back() < pend->back())
    {
        data->insert(data->end() - 1, pend->back());
        pend->pop_back();
        return ;
    }
    while (start <= end)
    {
        if ((*data)[i] < pend->back())
            start = i + 1;
        else if ((*data)[i] > pend->back())
            end = i - 1;
        else
            break;
        i = (start + end) / 2;
    }
    data->insert(data->begin() + i + 1, pend->back());
    pend->pop_back();
}

void mainAlgo(std::vector<int> *data)
{
    std::vector<int>::iterator exportedValue;
    bool oddNumber = false;
    if (data->size() % 2)
    {
        exportedValue = (data->end() - 1);
        oddNumber = true;
        data->pop_back();
    }
    std::vector<std::vector<int> > parent;
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
    recursiveSort(parent, 0);
    std::vector<int> pend;
    data->clear();
    for (size_t i = 0; i < parent.size(); i++)
    {
        data->push_back(parent[i][1]);
        if (i > 0)
            pend.push_back(parent[i][0]);
    }
    data->insert(data->begin(),parent[0][0]);
    while (!pend.empty())
        addElement(data, &pend);
    std::vector<int> lastValue(1);
    if (oddNumber)
    {
        lastValue.push_back(*(exportedValue));
        addElement(data, &lastValue);
    }
}

void mainAlgo(std::deque<int> *data)
{
    std::deque<int>::iterator exportedValue;
    bool oddNumber = false;
    if (data->size() % 2)
    {
        exportedValue = (data->end() - 1);
        oddNumber = true;
        data->pop_back();
    }
    std::deque<std::deque<int> > parent;
    std::deque<int>::iterator nb = data->begin();
    for (size_t i = 0; i < data->size() / 2; i++)
    {
        std::deque<int> child;
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
    recursiveSort(parent, 0);
    std::deque<int> pend;
    data->clear();
    for (size_t i = 0; i < parent.size(); i++)
    {
        data->push_back(parent[i][1]);
        if (i > 0)
            pend.push_back(parent[i][0]);
    }
    data->insert(data->begin(),parent[0][0]);
    while (!pend.empty())
        addElement(data, &pend);
    std::deque<int> lastValue(1);
    if (oddNumber)
    {
        addElement(data, &lastValue);
        lastValue.push_back(*(exportedValue));
    }
}


void displayInformation(suseconds_t time, std::deque<int> p){
    
    std::cout << "Time to process a range of " << p.size() << " elements with std::deque<int> : " << time << " us" << std::endl;
}
void displayInformation(suseconds_t time, std::vector<int> p){
    std::cout << "Time to process a range of " << p.size() << " elements with std::vector<int> : " << time << " us" << std::endl;
}