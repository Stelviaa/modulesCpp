/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:25:49 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/09 14:33:08 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN
#define MAIN
#include "easyfind.hpp"
#endif

template<typename T>
T pushValue(T container)
{
	container.push_back(12);
	container.push_back(23);
	container.push_back(34);
	container.push_back(1909);
	return (container);
}

int main(){

	try{
		std::vector<int> 	p;
		std::deque<int>		p2;
		std::list<int>		p3;
		std::stack<int>		p4;
		//std::queue<int>		p5;

		p = pushValue(p);
		p2 = pushValue(p2);
		p3 = pushValue(p3);
		p4 = pushValue(p4);
		//p5 = pushValue(p5);

		std::cout << easyfind(p, 12) << std::endl;
		std::cout << easyfind(p2, 1909) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
