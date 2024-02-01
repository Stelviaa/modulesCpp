/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:06:41 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/01 18:26:12 by sforesti         ###   ########.fr       */
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
		virtual ~AForm();
		
		std::string 		getName() const;
		bool				getSignature() const;
		int					getGradeExec() const;
		int					getGradeSign() const;

		void	beSigned(Bureaucrat &inst);
		virtual	void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : std::exception{
			public:
				virtual const char* what() const throw();
		};

		class IsSigned : std::exception{
			public:
				virtual const char* what() const throw();
		};
		AForm & operator=(AForm & cp);
};

std::ostream &operator<< (std::ostream &out, AForm const &inst);