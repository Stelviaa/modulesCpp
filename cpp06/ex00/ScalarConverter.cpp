/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:24:32 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/05 23:23:40 by sforesti         ###   ########.fr       */
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

void ScalarConverter::toFloat(std::string s){
	
	float value = std::stof(s);	
	std::size_t i = 0;
	
	if (value <= 31 || value >= 127)
		std::cout << "char : " << "impossible" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(value) << "'" << std::endl;
	for (i = s.find(".") + 1; i < s.size() && s[i] == '0'; i++);
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "double: " << static_cast<double>(value) << (i == s.size() ? ".0" : "\0") << std::endl;
	std::cout << "float : " << value << (i == s.size() ? ".0f" : "f") << std::endl;
}

void ScalarConverter::toInt(std::string s){
	int value =  std::stoi(s);
	if (value <= 31 || value >= 127)
		std::cout << "char : " << "impossible" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(value) << "'" << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << "double: " << static_cast<double>(value) << (s.find("e") ? "\0" : ".0") << std::endl;
	std::cout << "float : " << static_cast<float>(value) << "f" << std::endl;
}

void ScalarConverter::toDouble(std::string s){
	std::size_t i = 0;
	double value = std::stod(s);

	if (value <= 31.9999 || value >= 127)
		std::cout << "char : " << "impossible" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(value) << "'" << std::endl;
	for (i = s.find(".") + 1; i < s.size() && s[i] == '0'; i++);
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "double: " << value << (i == s.size() ? ".0" : "\0") << std::endl;
	std::cout << "float : " << static_cast<float>(value) << (i == s.size() ? ".0f" : "f") << std::endl;
}

void ScalarConverter::toChar(std::string s){
		char c;
		
		if (s.size() != 1)
		{
			std::cout << "Bad type. Please enter char, int, float, or double." << std::endl;
			return ;
		}
		c = s[0];
		if (c <= 31 || c >= 127)
			std::cout << "char : " << "impossible" << std::endl;
		else
			std::cout << "char : '" << c << "'" << std::endl;
		std::cout << "int :" << static_cast<int>(c) << std::endl;
		std::cout << "float :" << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double :" << static_cast<double>(c) << "" << std::endl;
} 


std::string ScalarConverter::convert(char *str){
	std::string s(str);
	
	if (s == "0" || s == "+0" || s == "-0")
	{
		int value = std::stoi(s);
		std::cout << "char : impossible" << std::endl;
		if (s == "-0")
		{
			std::cout << "int: " << value << std::endl;
			std::cout << "double: -" << static_cast<double>(value) << ".0" << std::endl;
			std::cout << "float : -" << static_cast<float>(value) << ".0f" << std::endl;
		}
		else if (s == "+0")
		{
			std::cout << "int: " << value << std::endl;
			std::cout << "double: +" << static_cast<double>(value) << ".0" << std::endl;
			std::cout << "float : +" << static_cast<float>(value) << ".0f" << std::endl;
		}
		else
		{
			std::cout << "int: " << value << std::endl;
			std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
			std::cout << "float : " << static_cast<float>(value) << "f" << std::endl;
		}
		return ("a");
	}
	else if (chooseType(s) == "0")
	{
		ScalarConverter::toChar(s);
		return ("a");
	}else if (chooseType(s) == "int"){
		ScalarConverter::toInt(s);
		return ("a");
	}else if (chooseType(s) == "double"){
		ScalarConverter::toDouble(s);
		return ("a");
	}else if (chooseType(s) == "float"){
		ScalarConverter::toFloat(s);
		return ("a");
	}
	return ("b");
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter & cp){
	(void) cp;
	return (*this);
}