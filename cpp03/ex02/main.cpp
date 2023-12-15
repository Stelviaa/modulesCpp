/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/04 15:51:26 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap foo("foo");
    ScavTrap fuu("fuu");
    FragTrap fii("fii");

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

    fii.attack("Zombie");
    fii.takeDamage(20);
    fii.beRepaired(10);
    fii.setEnergyPoints(0);
    fii.attack ("you");
    fii.highFivesGuys();
    fii.takeDamage(20);
    fii.beRepaired(10);
    
    return 0;
}