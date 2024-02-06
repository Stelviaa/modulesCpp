/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:28:19 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/06 16:06:04 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void swap(T& a, T& b){
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T & min(T & a, T & b){
	return ((a < b ? a : b));
}

template<typename T>
T & max(T & a, T & b){
	return ((a > b ? a : b));
}