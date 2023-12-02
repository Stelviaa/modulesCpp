/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:43:12 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/02 13:37:26 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{

	private :
		int _value;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed(Fixed const & cp);
		int getRawBits() const;
		void	setRawBits(int const raw);
		~Fixed();

		Fixed & operator=(Fixed const &i);

};

#endif