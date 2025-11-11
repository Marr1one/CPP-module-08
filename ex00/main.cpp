/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:11:43 by root              #+#    #+#             */
/*   Updated: 2025/10/29 17:37:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try 
	{
		std::vector<int> container= {1, 2 ,3 ,3 ,5 ,8};
		easyfind(container, 3);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	return (0);
}