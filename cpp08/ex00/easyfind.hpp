/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:39:28 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/08 14:01:46 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <algorithm>
#include <list>
#include <deque>
#include <vector>

class NotFind : public std::exception {
	virtual const char *what() const throw()
	{
		return ("Value not found");
	}
};

template<typename T>
int easyfind(T container, int i)
{
	return (std::find(container.begin(), container.end(), i) == container.end() ? throw NotFind(): i);
}
