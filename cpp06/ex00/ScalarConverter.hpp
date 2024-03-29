/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:24:35 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/10 16:17:01 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <cctype>
#include <exception>
#include <cstdlib>
#include <sstream>
#include <limits>
#endif

class ScalarConverter{

	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter & cp);
	public:
		~ScalarConverter();
		static std::string convert(char *str);

		ScalarConverter & operator=(ScalarConverter & cp);

		static void toFloat(std::string s);
		static void toInt(std::string s);
		static void toDouble(std::string s); 
		static void toChar(std::string s); 
};

std::string chooseType(std::string s);