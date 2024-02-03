/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:29:33 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/03 13:35:14 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

class Intern{
	private:
	public:
		Intern();
		Intern(std::string n1, std::string n2, std::string n3);
		Intern(Intern & cp);
		~Intern();

		Form *makeForm(std::string target, std::string name);

		Intern & operator=(Intern & cp);
		class UnknownType : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

Form *makeScf(std::string target);
Form *makeRrf(std::string target);
Form *makePpf(std::string target);