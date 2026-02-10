/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 02:37:03 by root              #+#    #+#             */
/*   Updated: 2026/02/10 16:25:04 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <limits.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <ctime>

class Span
{
	private :
		std::vector<int> _vector;
		unsigned int  _size;
	public :
		Span(unsigned int size);
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);
		void addNumber(const int n);
		unsigned int getSize() const;
		std::vector<int> getVector() const;
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
		class noMoreSpaceException : public std::exception
		{
			public :
				const char * what() throw()
				{
					return ("No more space !");
				}
		};
};


#endif