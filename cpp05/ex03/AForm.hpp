/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:06:41 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/02 17:47:14 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

class Bureaucrat;

class AForm{
	protected:
		std::string const	_name;
		bool				_signature;
		const int			_gradeExec;
		const int			_gradeSign;
	public:
		AForm();
		AForm(AForm & cp);
		AForm(std::string name, int gradeExec, int gradeSign);
		~AForm();
		
		std::string 		getName() const;
		bool				getSignature() const;
		int					getGradeExec() const;
		int					getGradeSign() const;

		void beSigned(Bureaucrat &inst);
		virtual void execute(Bureaucrat const & executor) const = 0;


		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class IsSigned : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		AForm & operator=(AForm & cp);
};

std::ostream &operator<< (std::ostream &out, AForm const &inst);