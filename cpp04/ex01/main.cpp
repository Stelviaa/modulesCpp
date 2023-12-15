/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 11:59:15 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    Animal **tab = new Animal*[100];
    for (int i = 0; i < 100; i ++)
    {
        if (i <= 49)
        {
            std ::cout << std::endl;
            tab[i] = new Dog();
            std::cout << i << ": " << std::endl;
            tab[i]->makeSound();
            std ::cout << std::endl;
        }
        else
        {
            std ::cout << std::endl;
            tab[i] = new Cat();
            std::cout << i << ": " << std::endl;
            tab[i]->makeSound();
            std ::cout << std::endl;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        std ::cout << std::endl;
        delete tab[i];
        std::cout << "Animal index: " << i << " is deleted" << std::endl;
        std ::cout << std::endl;
    }
    return 0;
}