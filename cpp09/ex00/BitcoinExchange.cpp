/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:13:45 by sforesti          #+#    #+#             */
/*   Updated: 2024/03/15 16:10:13 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#include "BitcoinExchange.hpp"
#endif

std::map<int, float> parseCsv()
{
    std::string s;
    std::ifstream file("data.csv");
    if (!file.is_open())
        throw std::runtime_error("File not open");
    std::map<int, float> data;
    std::getline(file, s, '\n');
    while (std::getline(file, s, '\n'))
    {
        std::string date = s.substr(0, s.find(','));
        std::string value = s.substr(s.find(',') + 1, s.size());
        date.erase(date.find('-'), 1);
        date.erase(date.find('-'), 1);
        std::istringstream d(date.c_str());
        std::istringstream v(value.c_str());
        int dateInt;
        float valueFloat;
        d >> dateInt;
        v >> valueFloat;
        data.insert(std::make_pair(dateInt, valueFloat));
    }
    return (data);
}

bool Error(int errorCode, std::string line, bool statut)
{
    if (statut)
        std::cerr << "\033[0;31m" << line << "\033[0m" << " :" << std::endl;   
    if (errorCode == 1)
        std::cerr << "Error: Bad format of line" << std::endl;
    if (errorCode == 2)
        std::cerr << "Error: Format to month is bad" << std::endl;
    if (errorCode == 3)
        std::cerr << "Error: Format to day is bad" << std::endl;
    if (errorCode == 4)
        std::cerr << "Error: years too low or years to high" << std::endl;
    if (errorCode == 5)
        std::cerr << "Error: too large number" << std::endl;
    if (errorCode == 6)
        std::cerr << "Error: not a positive number" << std::endl;
    return (false);
}

int exportDate(std::string s)
{
    std::string date = s.substr(0, s.find('|'));
    date.erase(date.find('-'), 1);
    date.erase(date.find('-'), 1);
    std::istringstream d(date.c_str());
    int dateInt;
    d >> dateInt;
    return (dateInt);
}

float exportValue(std::string s)
{
    std::string value = s.substr(s.find("| ") + 1, s.size());
    std::istringstream v(value.c_str());
    float valueFloat;
    v >> valueFloat;
    return (valueFloat);
}

bool    verifSyntax(std::string line){
    
    bool statut = true;
    if (line.find('|') == line.npos)
        statut = Error(1, line, statut);
    if (line.substr(line.find("-") + 1, line.find("-") - 2) > "12")
        statut = Error(2, line, statut);
    if (line.substr(line.find_last_of("-") + 1, line.size() - 1) > "31")
        statut = Error(3, line, statut);
    if (line.substr(0, line.find('-')) < "2009" || line.substr(0, line.find('-')) > "2024")
        statut = Error(4, line, statut);
    if (exportValue(line) > 1000)
        statut = Error(5, line, statut);
    if (line[line.find("|") + 2] == '-')
        statut = Error(6, line, statut);
    return (statut);
}

std::map<int, float> compare(std::string fileName){
    std::string content;
    std::map<int, float> data;
    std::string s;
    std::ifstream file(fileName.c_str());
    if (!file.is_open())
        throw std::runtime_error("File not open");
    data = parseCsv();
    std::getline(file, s, '\n');
    while (std::getline(file, s, '\n'))
    {
        if (verifSyntax(s))
        {
            std::map<int, float>::iterator it;
            for (it = data.begin(); it != data.end(); it++)
            {
                if (it->first > exportDate(s))
                {
                    if (it->first != exportDate(s))
                        it --;
                    std::cout << "\033[0;32m" << s.substr(0, s.find('|')) << "=> " \
                    << exportValue(s) << " = " << exportValue(s) * it->second << "\033[0m" << std::endl;
                    break;
                }
            }
        }
    }
    return (data);
}