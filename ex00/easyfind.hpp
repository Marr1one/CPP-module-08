/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:54:55 by root              #+#    #+#             */
/*   Updated: 2026/01/28 15:42:16 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>


template <typename T>
void easyfind(const T &container, int n)
{
	typename T::const_iterator it;
	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw std::runtime_error("value not found\n");
	std::cout << n << " founded !\n";
}