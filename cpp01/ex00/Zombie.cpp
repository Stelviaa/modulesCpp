/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:07:15 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/27 19:51:20 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string name) : _name(name){
    return ;
}
void    Zombie::announce(void)
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}
std::string Zombie::getName(void) const
{
    return (this->_name);
}

Zombie::~Zombie()
{
    std::cout << this->getName() << " as destroyed" << std::endl ;
    return ;
}