/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:24:32 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/10 16:55:39 by sforesti         ###   ########.fr       */
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

bool verifyOverflow(std::string s, std::string nb)
{
	std::istringstream iss(nb.c_str());
	if (iss.fail())
	{
		std::cerr << "Failure with iss" << std::endl;
		return (false);
	}
	if (s == "double")
	{
		long double value;
		iss >> value;
		if (value > std::numeric_limits<double>::max() || value < std::numeric_limits<double>::min())
			return (false);
	}
	else if (s == "float")
	{
		double value;
		iss >> value;
		if (value > std::numeric_limits<float>::max() || value < std::numeric_limits<float>::min())
			return (false);
	}
	else if (s == "int")
	{
		long int value;
		iss >> value;
		if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
			return (false);
	}
	return (true);
}

std::string isDoubleFloat(const std::string s){
	size_t i;
	for ((s[0] == '+' || s[0] == '-') ? i = 1 : i = 0; i < s.find('.'); i++)
	{
		if (!std::isdigit(s[i]))
			return ("false");
	}
	for (i = s.find('.') + 1; i < s.size(); i ++)
	{	
		if (s[i] == 'f' && s[i + 1] == '\0')
		{
			if (verifyOverflow("float", s))
				return ("float");
			else
				return ("false");
		}
		else if ((!std::isdigit(s[i])))
			return ("false");
	}
	if (verifyOverflow("double", s))
		return ("double");
	else
		return ("false");
}

std::string isInt(const std::string s){
	size_t i;
	for ((s[0] == '+' || s[0] == '-') ? i = 1 : i = 0; i < s.size(); i++)
	{
		if (s[i] == 'f' && s[i + 1] == '\0')
		{
			if (verifyOverflow("float", s))
				return ("float");
			else
				return ("false");
		}
		else if (!std::isdigit(s[i]))
			return ("false");
	}
	if (verifyOverflow("int", s))
		return ("int");
	else
		return ("false");
}

std::string chooseType(std::string s){
	if (isDoubleFloat(s) != "false")
		return (isDoubleFloat(s));
	if (isInt(s) != "false")
		return (isInt(s));
	if (s == "-inff" || s == "+inff" || s == "nanf" \
	|| s == "-inf" || s == "+inf" || s == "nan" || \
	s == "inf" || s == "inff")
		return ("1");
	if (s.size() == 1)
		return ("char");
	return ("0");
}

void ScalarConverter::toInt(std::string s){
	int value = std::atoi(s.c_str());
	if (value <= 31 || value >= 127)
		std::cout << "char : " << "impossible" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(value) << "'" << std::endl;
	std::cout << "int: " << value << std::endl;
	if (value >= std::numeric_limits<double>::min() && value <= std::numeric_limits<double>::max())
		std::cout << "double: " << static_cast<double>(value) << (s.size() >= 7 ? "\0" : ".0") << std::endl;
	else
		std::cout << "double : impossible" << std::endl;
	if (value >= std::numeric_limits<float>::min() && value <= std::numeric_limits<float>::max())
		std::cout << "float : " << static_cast<float>(value) << (s.size() >= 7 ? "f" : ".0f")<< std::endl;
	else
		std::cout << "float : impossible" << std::endl;
}

void ScalarConverter::toFloat(std::string s){
	
	size_t i;
	float value;
	std::istringstream iss(s.c_str());
	iss >> value;
	if (iss.fail())
	{
		std::cerr << "Failure with iss" << std::endl;
		return ;
	}
	if (value <= 31 || value >= 127)
		std::cout << "char : " << "impossible" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(value) << "'" << std::endl;
	for (i = s.find(".") + 1; i < s.size() && s[i] == '0'; i++);
	if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
	if (s[s.size()-2] == '.' || (s[s.size()-3] == '.' && s[s.size()-2] == '0') || (s.find('.') <= 6) || (s.find('.') == s.npos))
		i = 1;
	else
		i = 0;
	if (value >= std::numeric_limits<double>::min() && value <= std::numeric_limits<double>::max())
		std::cout << "double: " << static_cast<double>(value) << (i == 1 ? ".0" : "\0") << std::endl;
	else
		std::cout << "double : impossible" << std::endl;
	if (value >= std::numeric_limits<float>::min() && value <= std::numeric_limits<float>::max())
		std::cout << "float : " << value << (i == 1? ".0f" : "f") << std::endl;
	else
		std::cout << "float : impossible" << std::endl;
}

void ScalarConverter::toDouble(std::string s){
	size_t i;
	double value;
	std::istringstream iss(s.c_str());
	iss >> value;
	if (iss.fail())
	{
		std::cerr << "Failure with iss" << std::endl;
		return ;
	}
	if (value <= 31.9999 || value >= 127)
		std::cout << "char : " << "impossible" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(value) << "'" << std::endl;
	for (i = s.find(".") + 1; i < s.size() && s[i] == '0'; i++);
	if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
	if (value >= std::numeric_limits<double>::min() && value <= std::numeric_limits<double>::max())
		std::cout << "double: " << value << (i == s.size() && s.find('.') == s.npos ? ".0" : "\0") << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
	if (value >= std::numeric_limits<float>::min() && value <= std::numeric_limits<float>::max())
		std::cout << "float : " << static_cast<float>(value) << (i == s.size() ? ".0f" : "f") << std::endl;
	else
		std::cout << "float : impossible" << std::endl;
}

void ScalarConverter::toChar(std::string s){
		char c;
		size_t i;
		c = s[0];
		if (c <= 31 || c >= 127)
			std::cout << "char : " << "impossible" << std::endl;
		else
			std::cout << "char : '" << c << "'" << std::endl;
		
		for (i = s.find(".") + 1; i < s.size() && s[i] == '0'; i++);
		std::cout << "int :" << static_cast<int>(c) << std::endl;
		std::cout << "float :" << static_cast<float>(c) << (i == s.size()-1 ? ".0f" : "f")  << std::endl;
		std::cout << "double :" << static_cast<double>(c) << (i == s.size()-1 ? ".0" : "\0")<< std::endl;
} 


std::string ScalarConverter::convert(char *str){
	
	std::string s(str);
	if (s == "0" || s == "+0" || s == "-0")
	{
		int value =  std::atoi(s.c_str());
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
		std::cout << "int: " << value << std::endl;
		std::cout << "double: " << static_cast<double>(value) << (s.find("e") ? "\0" : ".0") << std::endl;
		std::cout << "float : " << static_cast<float>(value) << "f" << std::endl;
	}
	else if (chooseType(s) == "int")
		ScalarConverter::toInt(s);
	else if (chooseType(s) == "double")
		ScalarConverter::toDouble(s);
	else if (chooseType(s) == "float")
		ScalarConverter::toFloat(s);
	else if (chooseType(s) == "char")
		ScalarConverter::toChar(s);
	else if (chooseType(s) == "1")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (s.find("ff") != s.npos || s == "nanf")
			std::cout << "float: " << s << std::endl;
		else
			std::cout << "float: " << s + "f" << std::endl;
		if (s == "+inf" || s == "-inf" || s == "nan" || s == "inf")
			std::cout << "double: " << s << std:: endl;
		else
			std::cout << "double: " << (s.substr(0, s.size() - 1)) << std::endl;
	}
	else if (chooseType(s) == "0")
		return ("0");
	std::cout << chooseType(s) << std::endl;
	return ("1");
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter & cp){
	(void) cp;
	return (*this);
}