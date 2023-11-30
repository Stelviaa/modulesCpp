/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/28 18:19:19 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
    Harl harl;
    harl.complain("debug");
    harl.complain("DEBUG");
    harl.complain("info");
    harl.complain("INFO");
    harl.complain("warning");
    harl.complain("WARNING");
    harl.complain("error");
    harl.complain("ERROR");
}