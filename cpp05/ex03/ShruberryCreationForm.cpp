/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:19:31 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/09 10:00:54 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

ShrubberyCreationForm::ShrubberyCreationForm() : _target("no_target"){
	std::cout << "SCF: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("scf", 137, 145), _target(target){
	std::cout << "SCF: Assignation constructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (this->_signature)
	{
		if (executor.getGrade() <= this->_gradeExec && executor.getGrade() <= this->_gradeSign)
		{
			std::string name = this->_target + "_shrubberry";
			std::ofstream ofs(name.c_str());
			ofs << "\033[38;5;70m"
			<< "    /////  " << std::endl
			<< "   /////// " << std::endl
			<< "  /////////" << std::endl
			<< " ///////////" << std::endl
			<< "   |||||||  " 
			<< "\033[0m" << std::endl
			<< "\033[38;5;138m"
			<< "     |||    " << std::endl
			<< "     |||     "
			<< "\033[0m" << std::endl;
			ofs.close();
		}
		else
			throw GradeTooLowException();
	}
	else
		throw IsSigned();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "SCF: Destructor called" << std::endl;
}