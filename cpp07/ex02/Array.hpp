/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:02:13 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/06 22:27:56 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class Array{
	
	private:
		T 				*_element;
		unsigned int	_size;
	public:
		Array() : _element(NULL), _size(0){
			std::cout << "Default constructor called" << std::endl;
		}
		Array(unsigned int n) : _element(new T[n]), _size(n){
			std::cout << "Assignation constructor called" << std::endl;
		}
		Array(const Array & cp) : _size(cp._size){
			std::cout << "Copy constructor called" << std::endl;
			_element = new T [_size];
			for (unsigned int i = 0; i < _size; i ++)
				_element[i] = cp._element[i]; 
		}
		~Array(){
			std::cout << "Destructor Called" << std::endl;
			if (_element != NULL) 
				delete [] _element;
		}

		/*operator*/
		
		T & operator[](size_t i) const{
			if (i >= this->_size)
				throw std::out_of_range("\033[1;31mError : \033[0mout of range on \"Array\"");
			return (this->_element[i]);
		}
		Array & operator=(const Array & cp)
		{
			if (this == &cp)
				return (*this);
			_size = cp._size;
			_element = new T [_size];
			for (unsigned int i = 0; i < _size; i ++)
				_element[i] = cp._element[i]; 
			return (*this);
		}
		/*Member function*/
		unsigned int size() {return (_size);}
};