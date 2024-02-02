/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:41:17 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/02 18:11:04 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

AForm::AForm() : _name("defaultName"), _signature(false), _gradeExec(1), _gradeSign(1)
{
	std::cout << "AForm: Default Constructor called" << std::endl;
}
AForm::AForm(std::string name, int gradeExec, int gradeSign) : _name(name), _signature(false), _gradeExec(gradeExec), _gradeSign(gradeSign)
{
	std::cout << "Assignation Constructor called" << std::endl;
	if (this->_gradeExec > 150)
		throw GradeTooLowException();
	else if (this->_gradeExec < 1)
		throw GradeTooHighException();
	if (this->_gradeSign > 150)
		throw GradeTooLowException();
	else if (this->_gradeSign < 1)
		throw GradeTooHighException();
}
AForm::AForm(AForm & cp) : _name(cp._name), _signature(false), _gradeExec(cp._gradeExec), _gradeSign(cp._gradeSign)
{
	std::cout << "Copy Constructor called" << std::endl;
	if (this->_gradeExec > 150)
		throw GradeTooLowException();
	else if (this->_gradeExec < 1)
		throw GradeTooHighException();
	if (this->_gradeSign > 150)
		throw GradeTooLowException();
	else if (this->_gradeSign < 1)
		throw GradeTooHighException();
}
std::string		AForm::getName() const{
	return (this->_name);
}
bool				AForm::getSignature() const
{
	return (this->_signature);
}
int			AForm::getGradeExec() const
{
	return (this->_gradeExec);
}
int			AForm::getGradeSign() const{
	return (this->_gradeSign);
}

AForm::~AForm()
{
	std::cout << "Default destructor called" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("GradeSign or GradeExec too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("GradeSign or GradeExec too low");
}
const char* AForm::IsSigned::what() const throw()
{
	return ("form isn't signed");
}

AForm &AForm::operator=(AForm & cp){
	this->_signature = cp.getSignature();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, AForm const & cp){
	out << "name : " << cp.getName() << ", gradeExec : " << cp.getGradeExec() \
	<< ", gradeSign : "  << cp.getGradeSign() << ", signature : " << (cp.getSignature() ? "true" : "false") << std::endl;
	return (out);
}

void AForm::beSigned(Bureaucrat &inst)
{
	if (inst.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	else
		this->_signature = true;
}