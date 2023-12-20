/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:17:57 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/20 20:17:10 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _v(), N(N)
{}

Span::~Span()
{}

void    Span::addNumber(int number)
{
    if (this->_v.size() < this->N)
        this->_v.push_back(number);
    else
        throw NoplaceInVector();
}

int Span::shortestSpan()
{
    int nb;
    int index;
    int res2;
    int res;
     
    int it;
    index = 1;
    nb = this->_v[index];
    it = 0;
    res = nb - this->_v[it];
    if (res < 0)
        res = this->_v[it] - nb;
    for (index = 1; index != (int)this->_v.size(); index++)
    {
        nb = this->_v[index];
        res2 = nb - this->_v[it];
        if (res2 >= 0 && res2 < res)
            res = res2;
        if (this->_v[index] == this->_v[this->_v.size() - 2])
        {
            it++;
            index = it;
        }
    }
    return (res);
}

int Span::longestSpan()
{
    int max;
    int min;

    std::vector<int>::iterator it;
    it = this->_v.begin();
    min = *it++;
    max = *it++;
    for (it = this->_v.begin(); it != this->_v.end(); it++)
    {
        if (*it < min)
            min = *it;
        if (*it > max)
            max = *it;
    }
    return (max - min);
}

void Span::Add(int number)
{
    while ((unsigned int)this->_v.size() != this->N)
        addNumber(number);
}

void    Span::Affichage()
{
    std::vector<int>::iterator it;
    it = this->_v.begin();
    for (it = this->_v.begin(); it < this->_v.end(); it++)
    {
        std::cout << "nb : " << *it << std::endl;
    }
}