/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:01:59 by kbarru            #+#    #+#             */
/*   Updated: 2026/03/03 17:06:06 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int	main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "first element : " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "stack size : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
			++it;
	}
	std::stack<int> s(mstack);
	MutantStack<int> stack2(mstack);
	MutantStack<int>::iterator iter = stack2.begin();
	std::cout << std::endl;
	while (iter != stack2.end())
	{
		std::cout << *iter << std::endl;
			++iter;
	}
	return 0;
}
