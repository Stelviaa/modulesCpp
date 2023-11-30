/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:37:25 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/28 18:17:09 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <functional>

class Harl{

	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void 	_error(void);
		void	(Harl::*_ptrFunc[4])(void);
		std::string _nameFunc[4];
	public:
		Harl();
		void 	complain(std::string level);
		~Harl();
};