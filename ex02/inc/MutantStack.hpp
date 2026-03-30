/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:00:00 by kbarru            #+#    #+#             */
/*   Updated: 2026/03/09 11:08:36 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template<typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
public:
	MutantStack();
	MutantStack(MutantStack &other);
	~MutantStack();
	MutantStack &operator=(MutantStack &other);

	typedef typename std::deque<T>::iterator iterator;

	iterator begin();
	iterator end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack &other) : std::stack<T>()
{
	this->c = other.c;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack &other)
{
	this->c = other.c;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}
