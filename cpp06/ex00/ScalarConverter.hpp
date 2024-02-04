/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:24:35 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/04 18:58:40 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <cctype>
#include <algorithm>
#endif

class ScalarConverter{

	private:
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter & cp);
		~ScalarConverter();
		void	*convert(char *str);

		ScalarConverter & operator=(ScalarConverter & cp);
};

std::string chooseType(std::string s);