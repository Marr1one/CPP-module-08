/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:00:39 by marwan            #+#    #+#             */
/*   Updated: 2026/02/10 16:24:10 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _size(n)
{
}

Span::Span(const Span &other) : _size(other._size), _vector(other._vector)
{
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->_size = other._size;
        this->_vector = other._vector;
    }
    return (*this);
}

Span::~Span(){}

unsigned int Span::getSize() const
{
    return (this->_size);
}

std::vector<int> Span::getVector() const
{
    return (this->_vector);
}


void Span::addNumber(const int n)
{
    if (_vector.size() >= _size)
        throw noMoreSpaceException();
    _vector.push_back(n);
}

int Span::longestSpan()
{
    // int i = 0;
    // int j;
    // int longest = INT_MIN;
    // int diff;
    // while (i < _vector.size())
    // {
    //     j = i + 1;
    //     while (j < _vector.size())
    //     {
    //         diff = _vector[j] - _vector[i];
    //         if (abs(diff) > longest)
    //             longest = abs(diff);
    //         j++;
    //     }
    // }
    int max = *std::max_element(this->_vector.begin(), this->_vector.end());
    int min = *std::min_element(this->_vector.begin(), this->_vector.end());
    return (max-min);
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