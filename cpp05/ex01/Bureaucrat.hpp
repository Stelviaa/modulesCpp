/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:43:43 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/02 17:08:59 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"
#include <exception>
#endif

class Bureaucrat{
	
	private:
		std::string const _name;
		int			_grade;
			
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat & cp);
		std::string getName() const;
		int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const & cp);

		void signForm(Form & Form);

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
};


std::ostream &operator<<(std::ostream &out, Bureaucrat const & cp);