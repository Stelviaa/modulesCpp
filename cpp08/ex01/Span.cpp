/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:59:15 by sforesti          #+#    #+#             */
/*   Updated: 2024/02/08 17:31:22 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int n){
    std::cout << "Assignation constructor called" << std::endl;    
    this->_container.reserve(n);
    this->_size = n;
}
Span::Span(Span & cp){
    std::cout << "Copy Constructor called" << std::endl;
    this->_container = cp._container;
}

void Span::addNumber(unsigned int n){
    if (this->_container.size() == this->_size)
        throw MaxSize();
    this->_container.push_back(n);
}

unsigned int Span::longestSpan(){
    if (this->_container.size() <= 1)
        throw EmptyContainer();
    std::sort(this->_container.begin(), this->_container.end());
    std::vector<unsigned int>::iterator max = this->_container.end() - 1;
    std::vector<unsigned int>::iterator min = this->_container.begin();
    return (*max - *min);
}

unsigned int Span::shortestSpan(){
    if (this->_container.size() <= 1)
        throw EmptyContainer();
    std::sort(this->_container.begin(), this->_container.end());
    std::vector<unsigned int>::iterator it1 = this->_container.begin();
    std::vector<unsigned int>::iterator it2 = it1 + 1;
    unsigned int offset = (*it2 - *it1);
    for (size_t i = 0; i < this->_container.size() - 1; i++)
    {
        if ((*it2 - *it1) < offset)
            offset = (*it2 - *it1);
        it1++;
        it2++;
        if (offset == 0)
            return (offset);
    }
    return (offset);
}

Span & Span::operator=(Span & cp){
    this->_container = cp._container;
    return (*this);
}

const char *Span::MaxSize::what() const throw(){
    return ("Impossible action, container is full.");
}

const char *Span::EmptyContainer::what() const throw(){
    return ("Too few value in container, impossible action.");
}


void Span::fillSpan(unsigned int n){
    if (this->_container.size() == this->_size)
        throw MaxSize();
    std::srand(time(NULL));
    
    for (unsigned int i = this->_container.size() - 1; i < n ; i++)
        this->addNumber(static_cast<int>(rand() % 10000));
}

Span::~Span(){
    std::cout << "Default destructor called" << std::endl;
}

void Span::printContent(void)
{
    if (this->_container.size() == 0)
        throw EmptyContainer();
    std::vector<unsigned int>::iterator it = this->_container.begin();
    std::cout << "=============" <<std::endl;
    for (size_t i = 0; i < this->_container.size(); i++)
    {
        std::cout << *it << std::endl;
        it++;
    }
    std::cout << "=============" <<std::endl;
}