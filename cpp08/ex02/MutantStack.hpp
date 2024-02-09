/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:48:18 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/09 14:39:56 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>
#endif

template<typename T>
class MutantStack : public std::stack<T>
{

    private:

    public:

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(){
            return (std::stack<T>::c.begin());
        }
        iterator end(){
            return (std::stack<T>::c.end());
        }
        iterator rbegin(){
            return (std::stack<T>::c.rbegin());
        }
        iterator rend(){
            return (std::stack<T>::c.rend());
        }
        iterator cbegin() {
            return (std::stack<T>::c.cbegin());
        }
        iterator cend(){
            return (std::stack<T>::c.cend());
        }
        iterator crbegin(){
            return (std::stack<T>::c.crbegin());
        }
        iterator crend(){
            return (std::stack<T>::c.crend());
        }
};