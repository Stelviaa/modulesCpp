/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:24:32 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/05 18:45:55 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#include "ScalarConverter.hpp"
#endif

ScalarConverter::ScalarConverter(){
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter & cp){
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}
ScalarConverter::~ScalarConverter(){
	std::cout << "Default destructor called" << std::endl;
}

std::string chooseType(std::string s){
	std::size_t start = s.find(".");
	std::size_t end = s.find(".");
	if (std::all_of((s[0] == '+' || s[0] == '-' ? s.begin() + 1 : s.begin()), s.begin() + end - 1, ::isdigit) \
	&& std::all_of(s.begin() + start + 1, s.end(), ::isdigit) && s[end+1] != '\0')
		return ("double");
	end = s.find("f");
	if (std::all_of((s[0] == '+' || s[0] == '-' ? s.begin() + 1 : s.begin()), s.begin() + start - 1, ::isdigit) \
	&& std::all_of((s[0] == '+' || s[0] == '-' ? s.begin() + 1 : s.begin()) + start + 1, s.begin() + end - 1, ::isdigit) && s[end+1] == '\0')
		return ("float");
	if (std::all_of((s[0] == '+' || s[0] == '-' ? s.begin() + 1 : s.begin()), s.end(), ::isdigit))
		return ("int");
	if (s == "-inff" || s == "+inff" || s == "nanf" || s == "-inf" || s == "+inf" || s == "nan")
		return (s);
	return ("0");
}

void	*ScalarConverter::convert(char *str){
	std::string s(str);
	void *cast;
	if (chooseType(s) == "int"){
		cast = reinterpret_cast<void *>(str);
		std::cout << "int: " << s << std::endl;
		std::cout << "double: " << *reinterpret_cast<double*>(cast) << std::endl;
	}
	if (chooseType(s) == "0")
	{
		if (s.size() != 1)
			throw BadType();
		std::cout << "char : '" << s << "'" << std::endl;
		std::cout << "int :" << static_cast<int>(*str) << std::endl;
		std::cout << "float :" << static_cast<float>(*str) << "f" << std::endl;
		std::cout << "double :" << static_cast<double>(*str) << "" << std::endl;
	}
	return (NULL);
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter & cp){
	(void) cp;
	return (*this);
}

const char *ScalarConverter::BadType::what() const throw(){
	return ("Bad type. Please enter char, int, float, or double.");
}