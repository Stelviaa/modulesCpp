/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:06:41 by sforesti          #+#    #+#             */
/*   Updated: 2024/01/31 13:35:30 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

class Bureaucrat;

class Form{
	private:
		std::string const	_name;
		bool				_signature;
		const int			_gradeExec;
		const int			_gradeSign;
	public:
		Form();
		Form(Form & cp);
		Form(std::string name, int gradeExec, int gradeSign);
		~Form();
		
		std::string 		getName() const;
		bool				getSignature() const;
		int					getGradeExec() const;
		int					getGradeSign() const;

		void beSigned(Bureaucrat &inst);

		class GradeTooHighException : std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : std::exception{
			public:
				virtual const char* what() const throw();
		};
		Form & operator=(Form & cp);
};

std::ostream &operator<< (std::ostream &out, Form const &inst);