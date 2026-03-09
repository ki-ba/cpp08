/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 14:12:55 by kbarru            #+#    #+#             */
/*   Updated: 2026/03/01 15:29:01 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iterator>
#include <stdexcept>
#include <iostream>
#include <set>

Span::Span() : _numbers(), _size(42) {}
Span::Span(unsigned int N) : _size(N) {}
Span::Span(Span &other) : _numbers(other._numbers), _size(other._size) {}
Span::~Span() {}

std::set<int> Span::getNumbers() const
{
	return(this->_numbers);
}

unsigned int Span::getSize() const
{
	return(this->_size);
}
Span &Span::operator=(Span &other)
{
	if (this == &other)
		return (*this);
	this->_numbers = other._numbers;
	this->_size = other._size;
	return (*this);
}

// stream operator for Span class

std::ostream &Span::operator<<(std::ostream &s)
{
	std::cout << "[";
	for (std::set<int>::const_iterator it = this->_numbers.begin(); it != this->_numbers.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << "]";
	return (s);
}

std::ostream &operator<<(std::ostream &s, Span &span)
{
	std::set<int> numbers = span.getNumbers();
	s << "[ ";
	for (std::set<int>::const_iterator it = numbers.begin(); it != numbers.end();  ++it)
	{
		s << *it << " ";
	}
	s << "]\n";
	return (s);

}

void Span::addNumber(int number)
{
	if (this->_numbers.size() > this->_size - 1)
		throw (std::runtime_error("No more space"));
	(this->_numbers).insert(number);
}


unsigned int Span::shortestSpan()
{
	if (this->_numbers.size() < 2)
		throw (std::runtime_error("Not enough numbers"));
	std::set<int>::const_iterator it = this->_numbers.begin();
	std::set<int>::const_iterator next = it;
	next++;
	int min = *next - *it;
	while (next != this->_numbers.end())
	{
		if (*next - *it < min)
			min = *next - *it;
		it++;
		next++;
	}
	return (min);
}

unsigned int Span::longestSpan()
{
	if (this->_numbers.size() < 2)
		throw (std::runtime_error("Not enough numbers"));
	return (*this->_numbers.rbegin() - *this->_numbers.begin());
}

void Span::preview()
{
	std::set<int>::const_iterator it = this->_numbers.begin();
	std::set<int>::const_iterator it_hide(this->_numbers.begin());
	std::set<int>::const_iterator it_unhide(this->_numbers.end());
	it_hide++;
	it_hide++;
	it_unhide--;
	it_unhide--;
	std::cout << "[";
	while (it != it_hide)
	{
			std::cout << *it << " ";
			it++;
	}
	if (it != this->_numbers.end())
		std::cout << "... ";
	while (it_unhide != this->_numbers.end())
	{
			std::cout << *it_unhide << " ";
			it_unhide++;
	}
	std::cout << "]" << std::endl;

}
