/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:25:36 by sergio            #+#    #+#             */
/*   Updated: 2025/10/20 20:55:32 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

// OCF
Span::Span()
	:	_maxSize(0)
{}

Span::Span(unsigned int maxSize)
	:	_maxSize(maxSize)
{
	_numbers.reserve(maxSize);
}

Span::Span(const Span& other)
	:	_maxSize(other._maxSize),
		_numbers(other._numbers)
{}

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	_maxSize = other._maxSize;
    _numbers = other._numbers;
    return *this;
}

Span::~Span() {}

//Metodos
void Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Span is full");
	_numbers.push_back(number);
}

unsigned int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");

	std::vector<int> tmp = _numbers;
	std::sort(tmp.begin(), tmp.end());
	unsigned int minSpan = std::numeric_limits<unsigned int>::max();
	for (std::size_t i = 1; i < tmp.size(); ++i)
	{
		unsigned int diff = static_cast<unsigned int>(tmp[i] - tmp[i - 1]);
		if (diff < minSpan)
            minSpan = diff;
	}
	    return minSpan;
}

unsigned int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");

	int minVal = *std::min_element(_numbers.begin(), _numbers.end());
	int maxVal = *std::max_element(_numbers.begin(), _numbers.end());
	return static_cast<unsigned int>(maxVal - minVal);
}
