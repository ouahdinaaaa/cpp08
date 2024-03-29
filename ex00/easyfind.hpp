/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:18:25 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/19 14:14:45 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm>


class   IsNotFound : public std::exception
{

    public :  
    const char *what() const throw()
    {
        return ("Is not found in container");
    }
};

template<class T>
typename T::iterator easyfind(T &container, int nb)
{
    typename T::iterator it = find(container.begin(), container.end(), nb);

    if (it == container.end())
        throw IsNotFound();
    return (it);
}

#endif
