/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequest.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:45:54 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/01 17:34:45 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

class RobotomyRequestForm : public AForm {
	
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		
		virtual	void	execute(Bureaucrat const & executor) const;
};