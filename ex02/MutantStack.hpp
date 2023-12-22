/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:25:19 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/22 12:13:19 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>
#include <list>
#include <deque>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
    private:
    
    public:
    
    MutantStack(): std::stack<T>() {};
    MutantStack(const MutantStack<T> &other) : std::stack<T>(other){}
    virtual ~MutantStack(){};
    MutantStack &operator=(const MutantStack<T> &other){
        std::stack<T>::operator=(other);
        return *this;
    }
    
	typedef typename Container::iterator				iterator;
    
    iterator begin(){ 
            return (this->c.begin());
        };
        
    iterator end(){
        return this->c.end();
    };

};

#endif