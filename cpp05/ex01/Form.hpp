/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:06:41 by sforesti          #+#    #+#             */
/*   Updated: 2024/01/29 17:47:30 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Form{
	private:
		std::string const	_name;
		bool				signature;
		int const			_gradeExec;
		int const			_gradeSign;
	public:
		Form();
		Form(Form & cp);
		Form(std::string const name, bool signature, int const _gradeExec, int const _GradeSign);
		~Form();
		
		std::string const	getName();
		bool				getSignature();
		int const			getGradeExec();
		int const			getradeSign();

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