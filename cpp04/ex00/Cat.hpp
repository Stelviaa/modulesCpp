/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:21:11 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 11:38:53 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal{
	
	public:
		Cat();
		Cat(Cat & cp);
		Cat & operator=(Cat & i);
		virtual ~Cat();

		virtual void makeSound() const;
};

#endif