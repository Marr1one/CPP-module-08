/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:11:43 by root              #+#    #+#             */
/*   Updated: 2026/02/10 19:07:17 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int argc, char **argv)
{
	if (argc != 1) return (std::cout << "Usagr : ./ex00\n", 1);
	try 
	{
		std::vector<int> container= {1, 2 ,3 ,3 ,5 ,8};
		easyfind(container, 5);
		easyfind(container, 1);
		easyfind(container, 10);
	}
	catch(std::exception &e)
	{
		std::cout  << "Exception catched ! : " << e.what();
	}
	return (0);
}