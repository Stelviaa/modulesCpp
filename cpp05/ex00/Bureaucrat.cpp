/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:33:33 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/02 16:45:52 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :  _name("John"), _grade(1) {
	std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	std::cout << "Assignation Constructor called" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat & cp) : _name(cp.getName())
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = cp;
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->_grade += 1;
}
void	Bureaucrat::decrementGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_grade -= 1;
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & cp){
	this->_grade = cp.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const & cp){
	out << cp.getName() << ", Bureaucrat grade " << cp.getGrade() << std::endl;
	return (out);
}
Bureaucrat::~Bureaucrat(){
	std::cout << "Default Destructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}