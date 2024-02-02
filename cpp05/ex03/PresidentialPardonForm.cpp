/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:14:57 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/02 18:05:43 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

PresidentialPardonForm::PresidentialPardonForm() : _target("no_target"){
	std::cout << "PPF: Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("ppf", 25, 5), _target(target){
	std::cout << "PPF: Assignation constructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->_signature)
	{
		if (executor.getGrade() <= this->_gradeExec && executor.getGrade() <= this->_gradeSign)
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		else
			throw GradeTooLowException();
	}
	else
		throw IsSigned();
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PPF: Destructor called" << std::endl;
}