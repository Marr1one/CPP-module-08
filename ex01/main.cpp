/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:49:21 by root              #+#    #+#             */
/*   Updated: 2025/11/11 20:41:10 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
	Span sp = Span(1000);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::vector<int>v;
		for(int i = 0; i < 500 ; i++)
			v.push_back(i);
		sp.addRange(v.begin(), v.end());
		std::cout  << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout  << "Longest span : "<< sp.longestSpan() << std::endl;
	}
	catch(Span::noMoreSpaceException &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return 0;
}