/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 14:14:46 by kbarru            #+#    #+#             */
/*   Updated: 2026/03/01 15:18:29 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

#define SPAN_SIZE 1e5
#define MAX_DISPLAY_SIZE 20
int main(void)
{
	Span s(SPAN_SIZE);
	Span s2(SPAN_SIZE);
	Span s3(2);
	Span s4(2);

	for (int i = SPAN_SIZE / 2; i > -SPAN_SIZE / 2; i--)
	{
		try
		{
			s.addNumber(i);
		}
		catch (std::exception & e)
		{
			std::cout << "Error : " << e.what() << std::endl;
		}
	}

	for (int i = SPAN_SIZE; i > 0; i--)
	{
		try
		{
			s2.addNumber(i * 2);
		}
		catch (std::exception & e)
		{
			std::cout << "Error : " << e.what() << std::endl;
		}
	}

	s3.addNumber(3);
	s3.addNumber(10);

	s4.addNumber(-2);
	s4.addNumber(-4);


	if (SPAN_SIZE < MAX_DISPLAY_SIZE)
		std::cout << s;
	std::cout << "Shortest span : " << s.shortestSpan() << std::endl;
	std::cout << "Longest span : " << s.longestSpan() << std::endl;

	std::cout << std::endl;

	if (SPAN_SIZE < MAX_DISPLAY_SIZE)
		std::cout << s2;
	std::cout << "Shortest span : " << s2.shortestSpan() << std::endl;
	std::cout << "Longest span : " << s2.longestSpan() << std::endl;

	std::cout << std::endl;

	if (SPAN_SIZE < MAX_DISPLAY_SIZE)
		std::cout << s3;
	std::cout << "Shortest span : " << s3.shortestSpan() << std::endl;
	std::cout << "Longest span : " << s3.longestSpan() << std::endl;

	std::cout << std::endl;

	if (SPAN_SIZE < MAX_DISPLAY_SIZE)
		std::cout << s4;
	std::cout << "Shortest span : " << s4.shortestSpan() << std::endl;
	std::cout << "Longest span : " << s4.longestSpan() << std::endl;

	return (0);
}
