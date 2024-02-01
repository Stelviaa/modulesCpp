/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/01 19:28:48 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

int main(void)
{
	Bureaucrat tester("Tester", 137);
	tester.setGrade(0);
	tester.setGrade(151);
	
    ShrubberyCreationForm a("cible");
	a.execute(tester);
	a.beSigned(tester);
	a.execute(tester);

	tester.setGrade(45);
	
	RobotomyRequestForm b("cible");
	b.execute(tester);
	b.beSigned(tester);
	b.execute(tester);
	
	tester.setGrade(5);
	PresidentialPardonForm c("cible");
	c.execute(tester);
	c.beSigned(tester);
	c.execute(tester);

	Bureaucrat tester2("tester", 1);
	tester2.executeForm(c);
}