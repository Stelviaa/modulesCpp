/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2024/01/25 15:57:48 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap foo("foo");

    foo.attack("Zombie");
    foo.takeDamage(20);
    foo.beRepaired(10);
    foo.setEnergyPoints(0);
    foo.attack ("you");
    foo.takeDamage(2147483648);
    foo.beRepaired(10);
    
    return 0;
}