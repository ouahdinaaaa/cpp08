/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:25:03 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/23 12:36:59 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <stack>

int main() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    // Itération sur MutantStack
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "nb in stack : " << *it << std::endl;
        ++it;
    }
    std::cout << "size of stack after push : " << mstack.size() << std::endl;
    // Utilisation de std::stack
    std::stack<int> s(mstack);

    std::cout << "--------------------------------------  NEXT PART WITH LIST -----------------------------" << std::endl;
    
    // Utilisation de std::list
    std::list<int> llist;
    llist.push_back(5);
    llist.push_back(17);
    std::cout << llist.back() << std::endl;
    llist.pop_back();
    std::cout << llist.size() << std::endl;
    llist.push_back(3);
    llist.push_back(5);
    llist.push_back(737);
    //[...]
    llist.push_back(0);

    // Itération sur std::list
    std::list<int>::iterator lit = llist.begin();
    std::list<int>::iterator lite = llist.end();
    ++lit;
    --lit;
    while (lit != lite)
    {
        std::cout << "nb in list : " << *lit << std::endl;
        ++lit;
    }
    std::cout << "size of list after push : " << llist.size() << std::endl;

    // Utilisation de std::list
    std::list<int> slist(llist);

    return 0;
}