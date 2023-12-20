/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:17:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/20 20:14:41 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

class Span
{
    private:
    std::vector<int> _v;
    unsigned int      N;
    
    public:
    Span(unsigned int N);
    ~Span();
    void    addNumber(int number);
    int     shortestSpan();
    int     longestSpan();
    void    Add(int number);
    void    Affichage();
    
    class   NoplaceInVector : public std::exception
    {
        const char *what() const throw()
        {
            return "The containers is full" ;
        }

    };
    // class No  appel a std::run time error (vas te renseigner)
};


#endif