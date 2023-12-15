/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:43:42 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/04 17:49:32 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ()
{
	std::cout << "Brain: Default constructor called" << std ::endl;
}

Brain::Brain(Brain & cp)
{
	std::cout << "Brain: copy constructor called" << std ::endl;
	*this = cp;
}

Brain::~Brain()
{
	std::cout << "Brain: Default destructor called" << std ::endl;
}

Brain & Brain::operator=(Brain & i)
{
	for (int j = 0; j < 100; j ++)
		this->ideas[j] = i.ideas[j];
	return (*this);
}