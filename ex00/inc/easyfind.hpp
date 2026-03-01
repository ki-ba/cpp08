/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 23:05:32 by kbarru            #+#    #+#             */
/*   Updated: 2026/02/28 23:41:07 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <algorithm>

template <typename T>  typename T::iterator easyfind(T haystack, int needle)
{
	typename T::iterator it = std::find(haystack.begin(), haystack.end(), needle);
	if (it == haystack.end())
		throw (std::runtime_error("Not found"));
	return (it);
}
