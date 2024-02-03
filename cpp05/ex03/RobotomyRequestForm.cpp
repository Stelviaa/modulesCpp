/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:19:31 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/03 13:31:04 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#endif

RobotomyRequestForm::RobotomyRequestForm() : _target("no_target"){
	std::cout << "RRF: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("rrf", 45, 72), _target(target){
	std::cout << "RRF: Assignation constructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (this->_signature)
	{
		if (executor.getGrade() <= this->_gradeExec && executor.getGrade() <= this->_gradeSign)
		{
			std::cout << "<drilling noises>" << std::endl;
			std::srand(static_cast<unsigned int>(std::time(0)));
			if (rand() % 2)
				std::cout << this->_target << " has been robotized" << std::endl;
			else
				std::cout << this->_target << " has not been robotized" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		throw IsSigned();
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RRF: Destructor called" << std::endl;
}