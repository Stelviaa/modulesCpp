/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:21:11 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 11:38:25 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	
	public:
		WrongCat();
		WrongCat(WrongCat & cp);
		WrongCat & operator=(WrongCat & i);
		virtual ~WrongCat();

		void makeSound() const;
};

#endif