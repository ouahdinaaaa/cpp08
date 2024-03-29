/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:13:52 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/23 12:24:54 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

void print(int i)
{
	std::cout << i << std::endl; 
}

int main()
{
	std::list<int> list;
	std::vector<int> vector;

	for (int i = 0; i <= 42; i++)
		vector.push_back(i);

	try
	{
		std::vector<int>::iterator it_vector = easyfind(vector, 12);
		std::cout << "Vector starting at 12:" << std::endl;
		for_each(it_vector, vector.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	for (int i = 0; i <= 42; i++)
		list.push_back(i);

	try
	{
		std::list<int>::iterator it_list = easyfind(list, 55);
		std::cout << "List starting at 19:" << std::endl;
		for_each(it_list, list.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}