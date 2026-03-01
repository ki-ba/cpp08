/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 23:05:17 by kbarru            #+#    #+#             */
/*   Updated: 2026/02/28 23:41:11 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "easyfind.hpp"

#define N_VALUES 10
#define NEEDLE 5

int main(void)
{
	std::vector<int> v;

	for (int i = 0; i < N_VALUES; ++i)
		v.push_back(i);

	try
	{
		std::cout << *easyfind(v, NEEDLE) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}
}
