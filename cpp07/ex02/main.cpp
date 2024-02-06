/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:36:13 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/06 22:28:32 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	try {
		Array<char> p(3);
		for (unsigned int i = 0; i < p.size(); i ++)
			p[i] = 'a';
		// for (unsigned int i = 0; i < p.size(); i ++){
		// 	std::cout << p[i + 1] << std::endl; //out of range test
		// }
		std::cout << p.size() << std::endl;
		
		Array<char> p2(p);
		p[0] = 'b';
		for (unsigned int i = 0; i < p.size(); i ++){
			std::cout << "p: " << p[i] << std::endl;
		}
		for (unsigned int i = 0; i < p2.size(); i ++){
			std::cout << "p2: " << p2[i] << std::endl;
		}
		p2 = p;
		p[1] = 'c';
		for (unsigned int i = 0; i < p.size(); i ++){
			std::cout << "p: " << p[i] << std::endl;
		}
		for (unsigned int i = 0; i < p2.size(); i ++){
			std::cout << "p2: " << p2[i] << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}