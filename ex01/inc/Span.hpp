/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 14:07:28 by kbarru            #+#    #+#             */
/*   Updated: 2026/03/01 15:27:16 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <set>
#include <iostream>

class Span
{
public:
	Span();
	Span(Span &other);
	Span(unsigned int N);
	~Span();
	void addNumber(int number);
	Span &operator=(Span &other);
	std::ostream &operator<<(std::ostream &s);
	std::set<int> getNumbers() const;
	unsigned int getSize() const;
	unsigned int shortestSpan();
	unsigned int longestSpan();

private:
	std::set<int> _numbers;
	unsigned int _size;
};
std::ostream &operator<<(std::ostream &s, Span &span);
#endif
