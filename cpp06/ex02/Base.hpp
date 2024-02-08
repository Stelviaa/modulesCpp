/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:51:18 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/08 16:11:17 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <cstdlib>

class Base {
	public:
		Base();
		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif