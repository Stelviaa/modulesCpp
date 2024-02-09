/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:39:28 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/09 14:39:09 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <exception>
#include <algorithm>
#include <list>
#include <deque>
#include <vector>
#include <stack>
#endif

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
