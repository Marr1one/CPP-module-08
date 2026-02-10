/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:54:55 by root              #+#    #+#             */
/*   Updated: 2026/02/10 19:07:22 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

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

#endif