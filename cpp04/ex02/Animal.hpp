/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:11:07 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 12:16:40 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal{
	
	protected :
		std::string _type;
	public:
		Animal();
		Animal(Animal & cp);
		virtual ~Animal();

		virtual void	makeSound() const = 0;
		std::string getType(void) const;
		void setType(std::string type);

		Animal & operator=(Animal & i);
};

#endif