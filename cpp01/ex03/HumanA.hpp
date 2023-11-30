/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:24:18 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/28 11:23:53 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA{

	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon &Weapon);
		void 		setName(std::string name);
		std::string	getName(void) const;
		void		setWeapon(Weapon w);
		Weapon		getWeapon() const;
		void		attack();
		~HumanA();
};

#endif