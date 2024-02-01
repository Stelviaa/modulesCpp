/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:33:33 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/01 19:14:17 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

Bureaucrat::Bureaucrat() :  _name("John"), _grade(1) {
	std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	std::cout << "Assignation Constructor called" << std::endl;
	try {
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (GradeTooLowException & e)
	{
		std::cerr << this->getName() << ": " << e.what() << ", grade set at 1 by default." << std::endl;
		this->_grade = 1;
	}
	catch (GradeTooHighException & e)
	{
		std::cerr << this->getName() << ": " << e.what() << ", grade set at 1 by default." << std::endl;
		this->_grade = 1;
	}
	
}

Bureaucrat::Bureaucrat(Bureaucrat & cp)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = cp;
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}


void	Bureaucrat::incrementGrade()
{
	try{
		if (this->_grade + 1 > 150)
			throw GradeTooLowException();
		else
			this->_grade += 1;
	}
	catch(GradeTooLowException & e){
		std::cerr << this->getName() << ": " << e.what() << std::endl;
	}
}
void	Bureaucrat::decrementGrade()
{
	try {
		if (this->_grade - 1 < 1)
			throw GradeTooHighException();
		else
			this->_grade -= 1;
	}
	catch(GradeTooHighException & e){
		std::cerr << this->getName() << ": " << e.what() << std::endl;
	}
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::setGrade(int grade){
	try {
		if (grade > 150)
			throw GradeTooLowException();	
		else if (grade < 1)
			throw GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (GradeTooHighException & e)
	{
		std::cerr << "accessors set : " << e.what() << std::endl;
	}
	catch (GradeTooLowException & e)
	{
		std::cerr << "accessors set : " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception & e){
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(AForm &form){
	try
	{
		if (form.getSignature())
			std::cout << this->_name << " signed " << form.getName() << std::endl;
		else
			throw GradeTooLowException();
	}
	catch (GradeTooLowException & e)
	{
		std::cerr << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << " or value not set" << std::endl;
	}
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