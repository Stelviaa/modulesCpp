/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:41:17 by sforesti          #+#    #+#             */
/*   Updated: 2024/01/29 17:47:57 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("defaultName"), _gradeExec(1), _gradeSign(1)
{
	std::cout << "Form: Default Constructor called" << std::endl;
}
Form(std::string const name, bool signature, int const _gradeExec, int const _GradeSign) : _name(name), 
{
	
}
