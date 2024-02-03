/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/03 13:54:24 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

int main(void)
{
	Form *scf;
	Form *rrf;
	Form *ppf;
	Form *bad;
	try {

		Intern slave;
		
		scf = slave.makeForm("scf", "Shruberry");
		rrf = slave.makeForm("rrf", "Robot");
		ppf = slave.makeForm("ppf", "President");
		bad = slave.makeForm("s", "bad");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (scf != NULL)
		delete scf;
	if (rrf != NULL)
		delete rrf;
	if (ppf != NULL)
		delete ppf;
	if (bad != NULL)
		delete bad;
}