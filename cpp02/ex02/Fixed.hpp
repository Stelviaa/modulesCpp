/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:43:12 by sforesti          #+#    #+#             */
/*   Updated: 2023/12/02 15:14:37 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{

	private :
		int _value;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed(Fixed const & cp);
		Fixed(const int value);
		Fixed(const float value);
		float 	toFloat(void) const;
		int		toInt(void) const;
		int getRawBits() const;
		void	setRawBits(int const raw);
		static const Fixed & min(Fixed const & a, Fixed const & b);
		static const Fixed & max(Fixed const & a, Fixed const & b);
		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);
		~Fixed();

		Fixed & operator=(Fixed const & i);
		Fixed operator*(Fixed const & i) const;
		Fixed operator/(Fixed const & i) const;
		Fixed operator-(Fixed const & i) const;
		Fixed operator+(Fixed const & i) const;

		bool operator<(Fixed const & i) const;
		bool operator<=(Fixed const & i) const;
		bool operator>(Fixed const & i) const;
		bool operator>=(Fixed const & i) const;
		bool operator==(Fixed const & i) const;
		bool operator!=(Fixed const & i) const;

		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

};

std::ostream & operator<<(std::ostream & o, Fixed const & fix);

#endif