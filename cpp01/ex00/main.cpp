/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/27 20:16:32 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void    randomChump(std::string name);

int main(void)
{
    Zombie *z = newZombie("foo");
    randomChump("chump");
    delete z;
    return (0);
}