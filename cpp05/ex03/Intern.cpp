/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:49:52 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/03 13:45:28 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

Intern::Intern()
{
	std::cout << "Intern: Default Constructor called" << std::endl;
}

Intern::Intern(Intern & cp)
{
	std::cout << "Intern: Copy Constructor called" << std::endl;
	(void) cp;
}


Form *makeScf(std::string target){
	return (new ShrubberyCreationForm(target));
}
Form *makeRrf(std::string target){
	return (new RobotomyRequestForm(target));
}
Form *makePpf(std::string target){
	return (new PresidentialPardonForm(target));
}

Intern::~Intern()
{
	std::cout << "Intern: Default Desstructor called" << std::endl;
}

Intern & Intern::operator=(Intern & cp)
{
	(void) cp;
	std::cout << "nothing to assign" << std::endl;
	return (*this);
}

Form *Intern::makeForm(std::string target, std::string name)
{
	int i;
	std::string title[3] = {"scf", "rrf", "ppf"};
	Form *(*p[3])(std::string) = {&makeScf, &makeRrf, &makePpf};
	
	for (i = 0; target != title[i] && i < 3; i ++);
	if (i == 3)
		throw UnknownType();
	return ((p[i])(name));
}
const char* Intern::UnknownType::what() const throw(){
	return ("Form's type not found");
}