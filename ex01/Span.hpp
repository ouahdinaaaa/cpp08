/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:17:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/19 20:21:55 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <string>
#include <algorithm>

class Span
{
    private:
    std::vector<int> _v;
    unsigned int      N;
    
    public:
    Span();
    ~Span();
    void    AddNumber(int number);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    // class No  appel a std::run time error (vas te renseigner)
};


#endif