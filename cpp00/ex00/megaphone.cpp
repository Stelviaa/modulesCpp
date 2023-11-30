/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:46:18 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/24 15:59:08 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string toUpper(std::string line)
{
	for (int i = 0; i < (int)line.size(); i ++)
		line.at(i) = std::toupper(line.at(i));
	return (line);
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
    {
        for (int i = 1; i < ac; ++i)
        {
            std::string line = av[i];
			line = toUpper(line);
			if (i < ac - 1)
				std::cout << line + ' ';
			else
				std::cout << line << std::endl;
        }
    }
    return (0);
}