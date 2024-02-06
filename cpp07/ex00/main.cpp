/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:36:13 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/06 16:06:49 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(){
	
	int var1 = 1, var2 = 2;
	const char var3 = 'a', var4 = '3';

	swap<int>(var1, var2);
	std::cout << "a: " << var1 << " | b: " <<var2 << std::endl;
	std::cout << "min<char> : " << min<const char>(var3, var4) << std::endl;
	std::cout << "max<char> : " << max<const char>(var3, var4) << std::endl;

	std::cout << " /****** Subject Main ******\\ " << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}