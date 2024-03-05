/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:28:19 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/09 14:29:44 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename A,typename L, typename F>
void iter(A array, L size, F f){
	if (!array[0] || !size)
		return ;
	for (L i = 0; i < size; i ++)
		f(array[i]);
}