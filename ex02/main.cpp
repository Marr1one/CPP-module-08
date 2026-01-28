/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 03:28:49 by marwan            #+#    #+#             */
/*   Updated: 2025/12/12 16:07:21 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

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
    return 0;
}