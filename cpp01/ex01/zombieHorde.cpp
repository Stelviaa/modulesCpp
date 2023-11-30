/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:57:58 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/27 19:58:20 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie *z = new Zombie[n];

	for (int i = 0; i < n; i ++)
	{
		z[i].setName(name);
		std::cout << i << ": ";
		z->announce();
	}
	return z;
}