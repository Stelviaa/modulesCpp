/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:43:43 by sforesti          #+#    #+#             */
/*   Updated: 2024/01/29 15:53:30 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

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

		class GradeTooHighException : std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : std::exception{
			public:
				virtual const char* what() const throw();
		};
};


std::ostream &operator<<(std::ostream &out, Bureaucrat const & cp);