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
	Span s5(12);

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

	for (int i = 10; i > 0; i--)
	{
		try
		{
			s5.addNumber(i * 2);
		}
		catch (std::exception & e)
		{
			std::cout << "Error : " << e.what() << std::endl;
		}
	}

	s5.addNumber(1);
	s5.addNumber(200);

	if (s.getSize()< MAX_DISPLAY_SIZE)
		std::cout << s;
	else
		s.preview();
	std::cout << "Shortest span : " << s.shortestSpan() << std::endl;
	std::cout << "Longest span : " << s.longestSpan() << std::endl;

	std::cout << std::endl;

	if (s2.getSize()< MAX_DISPLAY_SIZE)
		std::cout << s2;
	else
		s2.preview();
	std::cout << "Shortest span : " << s2.shortestSpan() << std::endl;
	std::cout << "Longest span : " << s2.longestSpan() << std::endl;

	std::cout << std::endl;

	if (s3.getSize()< MAX_DISPLAY_SIZE)
		std::cout << s3;
	else
		s3.preview();
	std::cout << "Shortest span : " << s3.shortestSpan() << std::endl;
	std::cout << "Longest span : " << s3.longestSpan() << std::endl;

	std::cout << std::endl;

	if (s4.getSize() < MAX_DISPLAY_SIZE)
		std::cout << s4;
	else
		s4.preview();
	std::cout << "Shortest span : " << s4.shortestSpan() << std::endl;
	std::cout << "Longest span : " << s4.longestSpan() << std::endl;

	if (s5.getSize() < MAX_DISPLAY_SIZE)
		std::cout << s5;
	else
		s4.preview();
	std::cout << "Shortest span : " << s5.shortestSpan() << std::endl;
	std::cout << "Longest span : " << s5.longestSpan() << std::endl;

	return (0);
}
