/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:02:13 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/06 18:31:58 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
class Array{
	
	private:
		T 				*_element;
		unsigned int	_size;
	public:
		Array() : _elements(NULL), _size(0);
		Array(unsigned int n) : _element(new T[n]), _size(n);
		Array(const Array & cp) : _size(cp._size){
			_element = new T [_size];
			for (int i = 0; i < _size; i ++)
				_element[i] = cp._element[i]; 
		}
		~Array(){
			if (_elements != NULL)
				delete [] T	;
		}

		/*operator*/
		
		T & operator[](size_t i) const{
			if (i >= this->_size)
				throw (std::out_of_range("Bro, seriously ?"));
			return (this->element[i]);
		}
		T & operator= (const Array & cp)
		{
			if (this == &cp)
				return (*this);
			_size = cp._size
			_element = new T [_size];
			for (int i = 0; i < size; i ++)
				_element[i] = cp._element[i]; 
			return (*this);
		}
};