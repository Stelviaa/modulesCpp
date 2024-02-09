/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:32:55 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/09 14:37:39 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <algorithm>
#endif

class Span {

    private:
        std::vector<unsigned int>   _container;
        unsigned int                _size;
    public:
        Span();
        Span(unsigned int n);
        Span(Span & cp);
        ~Span();

        void addNumber(unsigned int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        Span & operator=(Span & cp);

        void fillSpan(unsigned int);
        void printContent(void);

        class MaxSize : public std::exception{
            virtual const char* what() const throw();
        };
        
        class EmptyContainer : public std::exception{
            virtual const char* what() const throw();
        };
};