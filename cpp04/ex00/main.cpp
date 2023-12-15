/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/04 17:17:35 by sforesti         ###   ########.fr       */
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
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal *bad = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout <<bad->getType() << " " << std::endl;
    std::cout << "i: " << std::endl;
    i->makeSound();
    std::cout << "bad: " << std::endl;
    bad->makeSound();
    std::cout << "j: " << std::endl;
    j->makeSound();
    std::cout << "meta: " << std::endl;
    meta->makeSound();
    std::cout << "meta: " << std::endl;
    delete meta;
    std::cout << "i: " << std::endl;
    delete i;
    std::cout << "j: " << std::endl;
    delete j;
    std::cout << "bad: " << std::endl;
    delete bad;
    return 0;
}