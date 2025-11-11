/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 02:37:03 by root              #+#    #+#             */
/*   Updated: 2025/11/11 20:37:35 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include <vector>
#include <cmath>

class Span
{
	private :
		std::vector<int> _vector;
		unsigned int  _size;
	public :
		Span(unsigned int size);
		~Span();
		void addNumber(int n);
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


