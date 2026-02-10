/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:49:21 by root              #+#    #+#             */
/*   Updated: 2026/02/10 18:36:31 by maissat          ###   ########.fr       */
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
		srand(time(NULL));//initialise le time pour rand
		for(int i = 0; i < 50 ; i++)
			v.push_back(rand() % 50);
		sp.addRange(v.begin(), v.end());
		std::vector<int> vectv2 = sp.getVector();
		std::cout << " -----------vector de sp apres les 50 ajouts----------\n";
		std::cout << "taille de vectv2 =>" << vectv2.size() << std::endl;
		for (int i  = 0 ; i < vectv2.size() ; i++)
			std::cout << vectv2[i] << std::endl;
		
	}
	catch(Span::noMoreSpaceException &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return 0;
}