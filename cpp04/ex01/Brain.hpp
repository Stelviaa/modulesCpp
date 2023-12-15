/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:37:08 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/04 17:43:09 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{

	public:
		Brain();
		Brain(Brain & cp);
		~Brain();

		std::string ideas[100];

		Brain & operator=(Brain & i); 
};

#endif