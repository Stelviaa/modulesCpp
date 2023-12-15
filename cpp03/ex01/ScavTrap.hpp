/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:45:29 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 12:53:07 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap & cp);
		~ScavTrap();

		void attack(const std::string & target);
		void guardGate(void);

		ScavTrap & operator=(ScavTrap const & r);
};

#endif