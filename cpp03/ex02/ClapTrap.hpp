/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:46:28 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/04 14:57:13 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H

# define CLAPTRAP_H
# include <iostream>

class ClapTrap{

	protected:

		std::string 			_name;
		unsigned int 			_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_attackDamage;
		
	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap & cp);
		~ClapTrap();

		void setName(std::string name);
		std::string getName(void) const;
		void setHitPoints(unsigned int hp);
		unsigned int getHitPoints(void) const;
		void setEnergyPoints(unsigned int ep);
		unsigned int getEnergyPoints(void) const;
		void setAttackDamage(unsigned int ad);
		unsigned int getAttackDamage(void) const;
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
		ClapTrap & operator=(ClapTrap & r);
};

#endif