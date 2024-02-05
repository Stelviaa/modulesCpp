/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:24:35 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/05 18:18:01 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <cctype>
#include <algorithm>
#include <exception>
#endif

class ScalarConverter{

	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter & cp);
	public:
		~ScalarConverter();
		static void	*convert(char *str);

		ScalarConverter & operator=(ScalarConverter & cp);
		
		class BadType : public std::exception{
			virtual const char* what() const throw(); 	
		};
};

std::string chooseType(std::string s);