/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 03:13:01 by marwan            #+#    #+#             */
/*   Updated: 2026/02/10 19:03:30 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP 

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>    
{
    private :
    public :
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(){return this->c.begin();}
        iterator end(){return this->c.end();}
};

#endif
