/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:29:07 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/30 11:50:03 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB{

	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanB(std::string name);
		void 		setName(std::string name);
		std::string	getName(void) const;
		void		setWeapon(Weapon &w);
		Weapon		getWeapon() const;
		void		attack();
		~HumanB();
};

#endif