/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/27 20:26:17 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *ptr = &s;
    std::string &ref = s;

    std::cout << "Memory address of the string: " << &s << std::endl;
    std::cout << "Memory address of the pointer: " << ptr << std::endl;
    std::cout << "Memory address of the reference: " << &ref << std::endl;
    std::cout << std::endl;
    std::cout << "Value of the string: " << s << std::endl;
    std::cout << "Value of the pointer: " << *ptr << std::endl;
    std::cout << "Value of the reference: " << ref << std::endl;
}