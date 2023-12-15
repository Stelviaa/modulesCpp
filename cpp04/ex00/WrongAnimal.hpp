/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:11:07 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:57 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal{
	
	protected :
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal & cp);
		virtual ~WrongAnimal();

		void	makeSound() const;
		std::string getType(void) const;
		void setType(std::string type);

		WrongAnimal & operator=(WrongAnimal & i);
};

#endif