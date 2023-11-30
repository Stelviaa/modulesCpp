/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:21:08 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/28 12:10:46 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon{

	private:
		std::string _type;
	public:
		Weapon(void);
		Weapon(std::string type);
		void setType(std::string type);
		std::string	getType(void) const;
		~Weapon();	
};

#endif