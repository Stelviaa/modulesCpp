/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:21:11 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 11:38:02 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal{
	
	public:
		Dog();
		Dog(Dog & cp);
		Dog & operator=(Dog & i);
		virtual ~Dog();

		virtual void makeSound() const;
};

#endif