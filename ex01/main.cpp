/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:49:21 by root              #+#    #+#             */
/*   Updated: 2025/12/10 17:46:49 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
	Span sp = Span(1000);
	try
	{
		int spSize = sp.getSize();
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::vector<int> vect = sp.getVector();
		std::cout << "vector de sp apres 6 ajouts\n";
		// std::cout << "DEBUG = > vect size = " << vect.size() << std::endl;
		for (int i  = 0 ; i < vect.size() ; i++)
			std::cout << vect[i] << std::endl;
		std::cout  << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout  << "Longest span : "<< sp.longestSpan() << std::endl;
		std::vector<int>v;
		for(int i = 0; i < 500 ; i++)
			v.push_back(i);
		sp.addRange(v.begin(), v.end());
		std::vector<int> vectv2 = sp.getVector();
		std::cout << "vector de sp apres les 500 ajouts\n";
		for (int i  = 0 ; i < vectv2.size() ; i++)
			std::cout << vectv2[i] << std::endl;
		
	}
	catch(Span::noMoreSpaceException &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return 0;
}