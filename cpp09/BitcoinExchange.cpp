/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:13:45 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/09 16:37:11 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#include "BitcoinExchange.hpp"
#endif

std::map<int, float> parsing(std::string fileName, std::string caractere){
    std::ifstream file(fileName.c_str());
    if (!file.is_open())
        throw std::runtime_error("File not open");
    std::string content;
    std::map<int, float> data;
    while (std::getline(file, content, '\n'))
    {
        std::all_of(content.begin(), )
        data.insert(std::stoi(std::all_of()))
    }
}