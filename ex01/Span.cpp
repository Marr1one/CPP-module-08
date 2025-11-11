/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:00:39 by marwan            #+#    #+#             */
/*   Updated: 2025/11/11 20:37:37 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _size(n)
{
}

Span::~Span(){}

void Span::addNumber(int n)
{
    if (_vector.size() >= _size)
        throw noMoreSpaceException();
    _vector.push_back(n);
}

int Span::longestSpan()
{
    int i = 0;
    int j;
    int longest = INT_MIN;
    int diff;
    while (i < _vector.size())
    {
        j = i + 1;
        while (j < _vector.size())
        {
            diff = _vector[j] - _vector[i];
            if (abs(diff) > longest)
                longest = abs(diff);
            j++;
        }
        i++;
    }
    return (longest);
}

int Span::shortestSpan()
{
    int i = 0;
    int j;
    int shortest = INT_MAX;
    int diff;
    while (i < _vector.size())
    {
        j = i + 1;
        while (j < _vector.size())
        {
            diff = _vector[j] - _vector[i];
            if (abs(diff) < shortest)
                shortest = abs(diff);
            j++;
        }
        i++;
    }
    return (shortest);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (std::distance(begin, end) + _vector.size() > _size)
        throw noMoreSpaceException();
    _vector.insert(_vector.end(), begin, end);
}