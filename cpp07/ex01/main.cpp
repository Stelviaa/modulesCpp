/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:36:13 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/09 14:29:48 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN
#define MAIN
#include "iter.hpp"
#include <iostream>
#endif

int main(){
	
	char str[3] = {'1', '2', '3'};
	std::string s = "Hello World";

	iter(str, 3, ::isdigit);
	iter(s, s.length(), ::isalpha);
}