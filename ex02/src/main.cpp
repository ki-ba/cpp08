/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:01:59 by kbarru            #+#    #+#             */
/*   Updated: 2026/03/09 11:09:04 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main(void)
{
	MutantStack<int> mstack;
	std::list<int> list;

	mstack.push(5);
	mstack.push(17);

	list.push_back(5);
	list.push_back(17);
	std::cout << "mstack first element : " << mstack.top() << std::endl;
	std::cout << "list first element : " << list.front() << std::endl;

	mstack.pop();
	list.pop_back();

	std::cout << "stack size : " << mstack.size() << std::endl;
	std::cout << "list size : " << list.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << std::endl << "DISPLAY MUTANT STACK" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
			++it;
	}
	std::stack<int> s(mstack);
	MutantStack<int> stack2(mstack);
	MutantStack<int> stack3;

	stack3 = mstack;

	MutantStack<int>::iterator iter = stack2.begin();

	std::cout << std::endl << "DISPLAY MUTANT STACK COPY" << std::endl;
	while (iter != stack2.end())
	{
		std::cout << *iter << std::endl;
			++iter;
	}

	MutantStack<int>::iterator itera = stack3.begin();

	std::cout << std::endl << "DISPLAY MUTANT STACK ASSIGNED COPY" << std::endl;
	while (itera != stack3.end())
	{
		std::cout << *itera << std::endl;
			++itera;
	}

	std::list<int>::iterator iterat = list.begin();

	std::cout << std::endl << "DISPLAY LIST" << std::endl;
	while (iterat != list.end())
	{
		std::cout << *iterat << std::endl;
			++iterat;
	}
	return 0;
}
