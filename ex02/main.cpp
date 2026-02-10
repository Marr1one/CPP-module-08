/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 03:28:49 by marwan            #+#    #+#             */
/*   Updated: 2026/02/10 19:19:46 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout  << "Stack size after the pop = >"<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    std::cout << "Contenu de la stack ====\n";
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Test de la copie dans une stack normale ===\n";
    std::stack<int> s(mstack);
    std::cout << "Contenu de la stack copie\n";
    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    std::cout << "Test MutantStack<std::string> ===" << std::endl;

    MutantStack<std::string> ms;
    ms.push("Test");
    ms.push("strings");
    ms.push("hihi");

    for (MutantStack<std::string>::iterator it = ms.begin(); it != ms.end(); ++it)
        std::cout << *it << std::endl;
	std::cout << "------------------TEST AVEC LA LIST POUR COMPARER----------------------\n";
	std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << list.back() << std::endl;
    list.pop_back();
    std::cout  << "list size after the pop = >"<< list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    //[...]
    list.push_back(0);
    std::list<int>::iterator it2 = list.begin();
    std::list<int>::iterator ite2 = list.end();
    // ++it;
    // --it;
    std::cout << "Contenu de la list ====\n";
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    std::cout << "Test de la copie dans une list normale ===\n";
    std::list<int> s2(list);
    std::cout << "Contenu de la list copie\n";
    while (!s2.empty())
    {
        std::cout << s2.back() << std::endl;
        s2.pop_back();
    }
    std::cout << "Test list<std::string> ===" << std::endl;

    std::list<std::string> list_string;
    list_string.push_back("Test");
    list_string.push_back("strings");
    list_string.push_back("hihi");

    for (std::list<std::string>::iterator it3 = list_string.begin(); it3 != list_string.end(); ++it3)
        std::cout << *it3 << std::endl;
    return 0;
}