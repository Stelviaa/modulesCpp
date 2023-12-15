/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:37:09 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/05 12:55:12 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap & cp);
		~FragTrap();

		void attack(const std::string & target);
		void highFivesGuys(void);

		FragTrap & operator=(FragTrap const & r);
};

#endif