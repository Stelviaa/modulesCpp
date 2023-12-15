/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/04 15:32:19 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap foo("foo");
    ScavTrap fuu("fuu");

    foo.attack("Zombie");
    foo.takeDamage(20);
    foo.beRepaired(10);
    foo.setEnergyPoints(0);
    foo.attack ("you");
    foo.takeDamage(20);
    foo.beRepaired(10);

    fuu.attack("Zombie");
    fuu.takeDamage(20);
    fuu.beRepaired(10);
    fuu.setEnergyPoints(0);
    fuu.attack ("you");
    fuu.guardGate();
    fuu.takeDamage(20);
    fuu.beRepaired(10);
    
    return 0;
}