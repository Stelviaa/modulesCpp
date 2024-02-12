/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:58:33 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/12 13:23:32 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN
#define MAIN
#include <stack>
#include <iostream>
#include <sstream>
#endif

int exportValue(std::string s)
{
    std::string value = s.substr(0, 1);
    std::istringstream v(value.c_str());
    int valueInt;
    v >> valueInt;
    return (valueInt);
}

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "bad number of arguments" << std::endl;
    }
    std::stack<int> data;
    std::string s(av[1]);
    std::string value;
    std::string operand;
    for (size_t i = 0; i < s.size(); i ++)
    {
        value = s.substr(i, 1);
        if (value == " ")
            continue;
        if (value == "*" || value == "/" || value == "-" || value == "+")
        {
            operand = value;
            int a = data.top();
            data.pop();
            int b = data.top();
            data.pop();
            if (value == "*")
                data.push(b * a);
            else if (value == "/")
                data.push(b / a);
            else if (value == "+")
                data.push(b + a);
            else if (value == "-")
                data.push(b - a);
            continue ;
        }
        if (exportValue(value) <= 9 || exportValue(value) >= 0)
        {
            data.push(exportValue(value));
            continue ;
        }
        else
        {
            std::cerr << "Error" << std::endl;
            return (1);
        }
    }
    std::cout << data.top() << std::endl;
}