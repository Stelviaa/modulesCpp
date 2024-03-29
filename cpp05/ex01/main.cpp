/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/02 17:59:01 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#include "Bureaucrat.hpp"
#endif

int main(void)
{
	try
	{
		Bureaucrat	John("John", 150);
		Form		JohnForm("JohnForm", 130, 0);
		
		JohnForm.beSigned(John);
		John.signForm(JohnForm);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}