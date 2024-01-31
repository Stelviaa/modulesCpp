/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:41:17 by sforesti          #+#    #+#             */
/*   Updated: 2024/01/31 17:06:46 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

Form::Form() : _name("defaultName"), _signature(false), _gradeExec(1), _gradeSign(1)
{
	std::cout << "Form: Default Constructor called" << std::endl;
}
Form::Form(std::string name, int gradeExec, int gradeSign) : _name(name), _signature(false), _gradeExec(gradeExec), _gradeSign(gradeSign)
{
	std::cout << "Assignation Constructor called" << std::endl;
	try{
		if (this->_gradeExec > 150)
			throw GradeTooLowException();
		else if (this->_gradeExec < 1)
			throw GradeTooHighException();
	}
	catch(GradeTooLowException & e){
		std::cerr << this->_name << ": gradeExec: " << e.what() << std::endl;
	}
	catch(GradeTooHighException & e){
		std::cerr << this->_name << ": gradeExec: " << e.what() << std::endl;
	}
	try{
		if (this->_gradeSign > 150)
			throw GradeTooLowException();
		else if (this->_gradeSign < 1)
			throw GradeTooHighException();
	}
	catch(GradeTooLowException & e){
		std::cerr << this->_name << ": gradeSign: " << e.what() << std::endl;
	}
	catch(GradeTooHighException & e){
		std::cerr << this->_name << ": gradeSign: " << e.what() << std::endl;
	}
}
Form::Form(Form & cp) : _name(cp._name), _signature(false), _gradeExec(cp._gradeExec), _gradeSign(cp._gradeSign)
{
	std::cout << "Copy Constructor called" << std::endl;
}

std::string		Form::getName() const{
	return (this->_name);
}
bool				Form::getSignature() const
{
	return (this->_signature);
}
int			Form::getGradeExec() const
{
	return (this->_gradeExec);
}
int			Form::getGradeSign() const{
	return (this->_gradeSign);
}

Form::~Form()
{
	std::cout << "Default destructor called" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

Form &Form::operator=(Form & cp){
	this->_signature = cp.getSignature();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const & cp){
	out << "name : " << cp.getName() << ", gradeExec : " << cp.getGradeExec() \
	<< ", gradeSign : "  << cp.getGradeSign() << ", signature : " << (cp.getSignature() ? "true" : "false") << std::endl;
	return (out);
}

void Form::beSigned(Bureaucrat &inst)
{
	try {
		if (inst.getGrade() > this->_gradeExec)
			throw GradeTooLowException();
		else
			this->_signature = true;
	}
	catch (GradeTooLowException & e)
	{
		std::cerr << e.what() << this->_name << "" << std::endl;
	}
}